#include "pch-cpp.hpp"

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

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// EnemyScript/ObjectOddsPair[]
struct ObjectOddsPairU5BU5D_t2F621535B6FBDD69E6B8F7869F20A536E0E7EDD5;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// BallController
struct BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9;
// CameraController
struct CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// DroppedItemScript
struct DroppedItemScript_t3D1EDC5B72EE22E19F84358B017E7ACA138DD061;
// EnemyProjectileScript
struct EnemyProjectileScript_t87DB61FFE917047281F152F95684311634C02282;
// EnemyScript
struct EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6;
// EntranceScript
struct EntranceScript_t1E4E3E05AA4766163191063CDDEDD13AF3F2861F;
// ExampleScript
struct ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089;
// ExplodeScript
struct ExplodeScript_tBCB568A298EC091BD1421E759EB29570F837BCB5;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameController
struct GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// LightningScript
struct LightningScript_t217C2D931541CC32964FD206DA0AB697A6404F20;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MenuController
struct MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PlayerProjectile
struct PlayerProjectile_tA265B9898046575C87E4C08C779AC0C872CAA5CB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral079B4B36234FF49EF3DCA22CE70BEA5E5278BD0A;
IL2CPP_EXTERN_C String_t* _stringLiteral08EF1409295A748F17C961491378A3B6215AA838;
IL2CPP_EXTERN_C String_t* _stringLiteral0B9A825AA10FC084D0E9390F36B65021EF40A5BD;
IL2CPP_EXTERN_C String_t* _stringLiteral13DEE4414E15D2C41754D46AE7D727F207F80D81;
IL2CPP_EXTERN_C String_t* _stringLiteral19E30120BF148B4BD74A0C6CE7F85A461E68A628;
IL2CPP_EXTERN_C String_t* _stringLiteral19F7B3420CC723FA250511AB020F09DA400B2238;
IL2CPP_EXTERN_C String_t* _stringLiteral1FB0F0033F6DE2A077C3A556C78769E707467016;
IL2CPP_EXTERN_C String_t* _stringLiteral2189B74E163D19996E58BA92D81675466BA238A6;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2C51ED42322191B3CF160E489175D86BEAFEDB03;
IL2CPP_EXTERN_C String_t* _stringLiteral30BAA61492ECEDABB573C50F8450B6F6F303C981;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3;
IL2CPP_EXTERN_C String_t* _stringLiteral345A3EE965F1F41012B7EFD0F1B00FBE6C37644C;
IL2CPP_EXTERN_C String_t* _stringLiteral356C1E5C4967B2437C5EA54105DC608936B0ED2C;
IL2CPP_EXTERN_C String_t* _stringLiteral3B8C05805B75DCD913796375CFCD3FEF1E16A147;
IL2CPP_EXTERN_C String_t* _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D;
IL2CPP_EXTERN_C String_t* _stringLiteral4415B736430B4ED98D4092B23AF644AD4E09860E;
IL2CPP_EXTERN_C String_t* _stringLiteral45CD3F4B9F0FA9909B48F178CC980A73FB78F817;
IL2CPP_EXTERN_C String_t* _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B;
IL2CPP_EXTERN_C String_t* _stringLiteral4B35CE1AB5E2DC90AB069C4BE809941334FE0BE4;
IL2CPP_EXTERN_C String_t* _stringLiteral59E2107B28E73F30F203DA7D3EC21F5E77423597;
IL2CPP_EXTERN_C String_t* _stringLiteral687D9BA523E32A2B8A4FEAD5E5EAE89D357E1420;
IL2CPP_EXTERN_C String_t* _stringLiteral73124E9790094D4B33B67A45B9974829E69AE9AB;
IL2CPP_EXTERN_C String_t* _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287;
IL2CPP_EXTERN_C String_t* _stringLiteral7F863AB7B06A4392AD24121FA95D31609484ADCE;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8B087B752EF0D0EF98DFB9C658CF4BD3323CDAEE;
IL2CPP_EXTERN_C String_t* _stringLiteral919069C4D27DB941C1E72D795394568665753716;
IL2CPP_EXTERN_C String_t* _stringLiteral94EABF2870777277D8BB4FB3EE4DF7EB7AE2C47E;
IL2CPP_EXTERN_C String_t* _stringLiteral970CC57CB5C903AF48E2BA90910F0E408DAC9211;
IL2CPP_EXTERN_C String_t* _stringLiteral97875C402B1B0A7635CF5733C9331B6118210275;
IL2CPP_EXTERN_C String_t* _stringLiteral9B0F572DACA2403E3CDFAC64092366829997C551;
IL2CPP_EXTERN_C String_t* _stringLiteralADA5DB2E05775E5994F4ACE1B7005BD0F794F2AD;
IL2CPP_EXTERN_C String_t* _stringLiteralAFED36ACC0553B4C248473FE0F0D2CB5C55B1242;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58;
IL2CPP_EXTERN_C String_t* _stringLiteralCA3D117146C77538DC633E0E90255AE8D3106242;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8;
IL2CPP_EXTERN_C String_t* _stringLiteralD66E3F63E9D51C60F235E94728E480D80C3A0613;
IL2CPP_EXTERN_C String_t* _stringLiteralE83EBBE67B70DE56666499A3BDC7D09E5C4B6A5F;
IL2CPP_EXTERN_C String_t* _stringLiteralEB65518ABA070C29F7C36E2CFBF5AD5526A8C77E;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309;
IL2CPP_EXTERN_C String_t* _stringLiteralED35FF3F063D29A026AE09F18392D9C7537823F2;
IL2CPP_EXTERN_C String_t* _stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223;
IL2CPP_EXTERN_C String_t* _stringLiteralF598A7F340CC1AA3FA230B5EF8C9669BC05887E8;
IL2CPP_EXTERN_C String_t* _stringLiteralF6A577D434AC942DDB38F171010FC5CEBF94E542;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6_m9F6547B6A7873C40D2B333829E9D0AFA4AB3710A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089_m4484074F6509A9BAF36E696A3CBE1A3C448BF94C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m4976A41443E954425C930DED33593E7870CDE3B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m01C51735078110D354DFDA5EB9685D44E6659287_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089_mEC33505540B0DDAB2D7B1F428542F7B07D8D7DF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_mCBE129B396568B632923B0B88AF7ADDD9E69A69D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF;
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct ObjectOddsPairU5BU5D_t2F621535B6FBDD69E6B8F7869F20A536E0E7EDD5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct  Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// EnemyScript/ObjectOddsPair
struct  ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543 
{
public:
	// UnityEngine.GameObject EnemyScript/ObjectOddsPair::drop
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___drop_0;
	// System.Int32 EnemyScript/ObjectOddsPair::odds
	int32_t ___odds_1;

public:
	inline static int32_t get_offset_of_drop_0() { return static_cast<int32_t>(offsetof(ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543, ___drop_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_drop_0() const { return ___drop_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_drop_0() { return &___drop_0; }
	inline void set_drop_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___drop_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drop_0), (void*)value);
	}

	inline static int32_t get_offset_of_odds_1() { return static_cast<int32_t>(offsetof(ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543, ___odds_1)); }
	inline int32_t get_odds_1() const { return ___odds_1; }
	inline int32_t* get_address_of_odds_1() { return &___odds_1; }
	inline void set_odds_1(int32_t value)
	{
		___odds_1 = value;
	}
};

// Native definition for P/Invoke marshalling of EnemyScript/ObjectOddsPair
struct ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___drop_0;
	int32_t ___odds_1;
};
// Native definition for COM marshalling of EnemyScript/ObjectOddsPair
struct ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___drop_0;
	int32_t ___odds_1;
};

// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
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
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct  Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Sprite
struct  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Collider2D
struct  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// BallController
struct  BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody2D BallController::bod
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___bod_4;
	// System.Single BallController::spd
	float ___spd_5;

public:
	inline static int32_t get_offset_of_bod_4() { return static_cast<int32_t>(offsetof(BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD, ___bod_4)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_bod_4() const { return ___bod_4; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_bod_4() { return &___bod_4; }
	inline void set_bod_4(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___bod_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bod_4), (void*)value);
	}

	inline static int32_t get_offset_of_spd_5() { return static_cast<int32_t>(offsetof(BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD, ___spd_5)); }
	inline float get_spd_5() const { return ___spd_5; }
	inline float* get_address_of_spd_5() { return &___spd_5; }
	inline void set_spd_5(float value)
	{
		___spd_5 = value;
	}
};


// UnityEngine.BoxCollider2D
struct  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// CameraController
struct  CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform CameraController::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_4;
	// UnityEngine.Vector3[] CameraController::staticTargets
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___staticTargets_5;
	// System.Single CameraController::lerpSpd
	float ___lerpSpd_6;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___target_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_4() const { return ___target_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_4), (void*)value);
	}

	inline static int32_t get_offset_of_staticTargets_5() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___staticTargets_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_staticTargets_5() const { return ___staticTargets_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_staticTargets_5() { return &___staticTargets_5; }
	inline void set_staticTargets_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___staticTargets_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___staticTargets_5), (void*)value);
	}

	inline static int32_t get_offset_of_lerpSpd_6() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___lerpSpd_6)); }
	inline float get_lerpSpd_6() const { return ___lerpSpd_6; }
	inline float* get_address_of_lerpSpd_6() { return &___lerpSpd_6; }
	inline void set_lerpSpd_6(float value)
	{
		___lerpSpd_6 = value;
	}
};


// DroppedItemScript
struct  DroppedItemScript_t3D1EDC5B72EE22E19F84358B017E7ACA138DD061  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// EnemyProjectileScript
struct  EnemyProjectileScript_t87DB61FFE917047281F152F95684311634C02282  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single EnemyProjectileScript::spd
	float ___spd_4;
	// UnityEngine.Rigidbody2D EnemyProjectileScript::bod
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___bod_5;
	// System.Int32 EnemyProjectileScript::damage
	int32_t ___damage_6;
	// System.Boolean EnemyProjectileScript::hasHurt
	bool ___hasHurt_7;

public:
	inline static int32_t get_offset_of_spd_4() { return static_cast<int32_t>(offsetof(EnemyProjectileScript_t87DB61FFE917047281F152F95684311634C02282, ___spd_4)); }
	inline float get_spd_4() const { return ___spd_4; }
	inline float* get_address_of_spd_4() { return &___spd_4; }
	inline void set_spd_4(float value)
	{
		___spd_4 = value;
	}

	inline static int32_t get_offset_of_bod_5() { return static_cast<int32_t>(offsetof(EnemyProjectileScript_t87DB61FFE917047281F152F95684311634C02282, ___bod_5)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_bod_5() const { return ___bod_5; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_bod_5() { return &___bod_5; }
	inline void set_bod_5(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___bod_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bod_5), (void*)value);
	}

	inline static int32_t get_offset_of_damage_6() { return static_cast<int32_t>(offsetof(EnemyProjectileScript_t87DB61FFE917047281F152F95684311634C02282, ___damage_6)); }
	inline int32_t get_damage_6() const { return ___damage_6; }
	inline int32_t* get_address_of_damage_6() { return &___damage_6; }
	inline void set_damage_6(int32_t value)
	{
		___damage_6 = value;
	}

	inline static int32_t get_offset_of_hasHurt_7() { return static_cast<int32_t>(offsetof(EnemyProjectileScript_t87DB61FFE917047281F152F95684311634C02282, ___hasHurt_7)); }
	inline bool get_hasHurt_7() const { return ___hasHurt_7; }
	inline bool* get_address_of_hasHurt_7() { return &___hasHurt_7; }
	inline void set_hasHurt_7(bool value)
	{
		___hasHurt_7 = value;
	}
};


// EnemyScript
struct  EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator EnemyScript::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_4;
	// UnityEngine.Collider2D EnemyScript::col
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col_5;
	// System.Int32 EnemyScript::hp
	int32_t ___hp_6;
	// System.Int32 EnemyScript::maxHp
	int32_t ___maxHp_7;
	// GameController EnemyScript::cont
	GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * ___cont_8;
	// System.Single EnemyScript::spd
	float ___spd_9;
	// EnemyScript/ObjectOddsPair[] EnemyScript::itemDrops
	ObjectOddsPairU5BU5D_t2F621535B6FBDD69E6B8F7869F20A536E0E7EDD5* ___itemDrops_10;
	// UnityEngine.Rigidbody2D EnemyScript::bod
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___bod_11;
	// ExampleScript EnemyScript::player
	ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * ___player_12;
	// System.Single EnemyScript::attackRange
	float ___attackRange_13;
	// System.Single EnemyScript::distance
	float ___distance_14;
	// System.Single EnemyScript::attackCools
	float ___attackCools_15;
	// System.Single EnemyScript::timeBetweenAttacks
	float ___timeBetweenAttacks_16;
	// UnityEngine.GameObject EnemyScript::enemyProjectile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemyProjectile_17;
	// UnityEngine.GameObject EnemyScript::lightning
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___lightning_18;
	// System.Single EnemyScript::iframeTime
	float ___iframeTime_19;
	// System.Single EnemyScript::iframeVar
	float ___iframeVar_20;

public:
	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6, ___anim_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_4() const { return ___anim_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_4), (void*)value);
	}

	inline static int32_t get_offset_of_col_5() { return static_cast<int32_t>(offsetof(EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6, ___col_5)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_col_5() const { return ___col_5; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_col_5() { return &___col_5; }
	inline void set_col_5(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___col_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___col_5), (void*)value);
	}

	inline static int32_t get_offset_of_hp_6() { return static_cast<int32_t>(offsetof(EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6, ___hp_6)); }
	inline int32_t get_hp_6() const { return ___hp_6; }
	inline int32_t* get_address_of_hp_6() { return &___hp_6; }
	inline void set_hp_6(int32_t value)
	{
		___hp_6 = value;
	}

	inline static int32_t get_offset_of_maxHp_7() { return static_cast<int32_t>(offsetof(EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6, ___maxHp_7)); }
	inline int32_t get_maxHp_7() const { return ___maxHp_7; }
	inline int32_t* get_address_of_maxHp_7() { return &___maxHp_7; }
	inline void set_maxHp_7(int32_t value)
	{
		___maxHp_7 = value;
	}

	inline static int32_t get_offset_of_cont_8() { return static_cast<int32_t>(offsetof(EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6, ___cont_8)); }
	inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * get_cont_8() const { return ___cont_8; }
	inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 ** get_address_of_cont_8() { return &___cont_8; }
	inline void set_cont_8(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * value)
	{
		___cont_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cont_8), (void*)value);
	}

	inline static int32_t get_offset_of_spd_9() { return static_cast<int32_t>(offsetof(EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6, ___spd_9)); }
	inline float get_spd_9() const { return ___spd_9; }
	inline float* get_address_of_spd_9() { return &___spd_9; }
	inline void set_spd_9(float value)
	{
		___spd_9 = value;
	}

	inline static int32_t get_offset_of_itemDrops_10() { return static_cast<int32_t>(offsetof(EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6, ___itemDrops_10)); }
	inline ObjectOddsPairU5BU5D_t2F621535B6FBDD69E6B8F7869F20A536E0E7EDD5* get_itemDrops_10() const { return ___itemDrops_10; }
	inline ObjectOddsPairU5BU5D_t2F621535B6FBDD69E6B8F7869F20A536E0E7EDD5** get_address_of_itemDrops_10() { return &___itemDrops_10; }
	inline void set_itemDrops_10(ObjectOddsPairU5BU5D_t2F621535B6FBDD69E6B8F7869F20A536E0E7EDD5* value)
	{
		___itemDrops_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemDrops_10), (void*)value);
	}

	inline static int32_t get_offset_of_bod_11() { return static_cast<int32_t>(offsetof(EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6, ___bod_11)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_bod_11() const { return ___bod_11; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_bod_11() { return &___bod_11; }
	inline void set_bod_11(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___bod_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bod_11), (void*)value);
	}

	inline static int32_t get_offset_of_player_12() { return static_cast<int32_t>(offsetof(EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6, ___player_12)); }
	inline ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * get_player_12() const { return ___player_12; }
	inline ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 ** get_address_of_player_12() { return &___player_12; }
	inline void set_player_12(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * value)
	{
		___player_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_12), (void*)value);
	}

	inline static int32_t get_offset_of_attackRange_13() { return static_cast<int32_t>(offsetof(EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6, ___attackRange_13)); }
	inline float get_attackRange_13() const { return ___attackRange_13; }
	inline float* get_address_of_attackRange_13() { return &___attackRange_13; }
	inline void set_attackRange_13(float value)
	{
		___attackRange_13 = value;
	}

	inline static int32_t get_offset_of_distance_14() { return static_cast<int32_t>(offsetof(EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6, ___distance_14)); }
	inline float get_distance_14() const { return ___distance_14; }
	inline float* get_address_of_distance_14() { return &___distance_14; }
	inline void set_distance_14(float value)
	{
		___distance_14 = value;
	}

	inline static int32_t get_offset_of_attackCools_15() { return static_cast<int32_t>(offsetof(EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6, ___attackCools_15)); }
	inline float get_attackCools_15() const { return ___attackCools_15; }
	inline float* get_address_of_attackCools_15() { return &___attackCools_15; }
	inline void set_attackCools_15(float value)
	{
		___attackCools_15 = value;
	}

	inline static int32_t get_offset_of_timeBetweenAttacks_16() { return static_cast<int32_t>(offsetof(EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6, ___timeBetweenAttacks_16)); }
	inline float get_timeBetweenAttacks_16() const { return ___timeBetweenAttacks_16; }
	inline float* get_address_of_timeBetweenAttacks_16() { return &___timeBetweenAttacks_16; }
	inline void set_timeBetweenAttacks_16(float value)
	{
		___timeBetweenAttacks_16 = value;
	}

	inline static int32_t get_offset_of_enemyProjectile_17() { return static_cast<int32_t>(offsetof(EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6, ___enemyProjectile_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemyProjectile_17() const { return ___enemyProjectile_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemyProjectile_17() { return &___enemyProjectile_17; }
	inline void set_enemyProjectile_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemyProjectile_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyProjectile_17), (void*)value);
	}

	inline static int32_t get_offset_of_lightning_18() { return static_cast<int32_t>(offsetof(EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6, ___lightning_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_lightning_18() const { return ___lightning_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_lightning_18() { return &___lightning_18; }
	inline void set_lightning_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___lightning_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightning_18), (void*)value);
	}

	inline static int32_t get_offset_of_iframeTime_19() { return static_cast<int32_t>(offsetof(EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6, ___iframeTime_19)); }
	inline float get_iframeTime_19() const { return ___iframeTime_19; }
	inline float* get_address_of_iframeTime_19() { return &___iframeTime_19; }
	inline void set_iframeTime_19(float value)
	{
		___iframeTime_19 = value;
	}

	inline static int32_t get_offset_of_iframeVar_20() { return static_cast<int32_t>(offsetof(EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6, ___iframeVar_20)); }
	inline float get_iframeVar_20() const { return ___iframeVar_20; }
	inline float* get_address_of_iframeVar_20() { return &___iframeVar_20; }
	inline void set_iframeVar_20(float value)
	{
		___iframeVar_20 = value;
	}
};


// EntranceScript
struct  EntranceScript_t1E4E3E05AA4766163191063CDDEDD13AF3F2861F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator EntranceScript::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_4;
	// UnityEngine.BoxCollider2D EntranceScript::coll
	BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * ___coll_5;
	// System.Int32 EntranceScript::state
	int32_t ___state_6;

public:
	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(EntranceScript_t1E4E3E05AA4766163191063CDDEDD13AF3F2861F, ___anim_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_4() const { return ___anim_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_4), (void*)value);
	}

	inline static int32_t get_offset_of_coll_5() { return static_cast<int32_t>(offsetof(EntranceScript_t1E4E3E05AA4766163191063CDDEDD13AF3F2861F, ___coll_5)); }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * get_coll_5() const { return ___coll_5; }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 ** get_address_of_coll_5() { return &___coll_5; }
	inline void set_coll_5(BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * value)
	{
		___coll_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coll_5), (void*)value);
	}

	inline static int32_t get_offset_of_state_6() { return static_cast<int32_t>(offsetof(EntranceScript_t1E4E3E05AA4766163191063CDDEDD13AF3F2861F, ___state_6)); }
	inline int32_t get_state_6() const { return ___state_6; }
	inline int32_t* get_address_of_state_6() { return &___state_6; }
	inline void set_state_6(int32_t value)
	{
		___state_6 = value;
	}
};


// ExampleScript
struct  ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ExampleScript::spd
	float ___spd_4;
	// UnityEngine.Rigidbody2D ExampleScript::bod
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___bod_5;
	// UnityEngine.Vector2 ExampleScript::input
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___input_6;
	// UnityEngine.GameObject ExampleScript::projectile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___projectile_7;
	// UnityEngine.UI.Text ExampleScript::gemsText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___gemsText_8;
	// System.Int32 ExampleScript::gems
	int32_t ___gems_9;
	// GameController ExampleScript::cont
	GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * ___cont_10;
	// UnityEngine.GameObject ExampleScript::heartParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___heartParent_11;
	// UnityEngine.GameObject ExampleScript::hpImage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hpImage_12;
	// UnityEngine.GameObject ExampleScript::sword
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___sword_13;
	// UnityEngine.GameObject ExampleScript::altAttackIcon
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___altAttackIcon_14;
	// UnityEngine.GameObject ExampleScript::clickAttackIcon
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___clickAttackIcon_15;
	// UnityEngine.GameObject ExampleScript::shopFire
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shopFire_16;
	// UnityEngine.GameObject ExampleScript::shopLightning
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shopLightning_17;
	// UnityEngine.Sprite ExampleScript::potionSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___potionSprite_18;
	// System.Int32 ExampleScript::hp
	int32_t ___hp_19;
	// System.Int32 ExampleScript::maxHp
	int32_t ___maxHp_20;
	// System.Single ExampleScript::iframeTime
	float ___iframeTime_21;
	// System.Single ExampleScript::iframeVar
	float ___iframeVar_22;
	// UnityEngine.Animator ExampleScript::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_23;
	// UnityEngine.Vector3 ExampleScript::dir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir_24;
	// System.Int32 ExampleScript::faceDir
	int32_t ___faceDir_29;
	// UnityEngine.Vector3 ExampleScript::right
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___right_30;
	// UnityEngine.Vector3 ExampleScript::left
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___left_31;
	// System.Boolean ExampleScript::hasFire
	bool ___hasFire_32;
	// System.Boolean ExampleScript::hasLightning
	bool ___hasLightning_33;
	// UnityEngine.UI.Text ExampleScript::displayText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___displayText_34;
	// UnityEngine.Vector2[] ExampleScript::warpSpots
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___warpSpots_35;

public:
	inline static int32_t get_offset_of_spd_4() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___spd_4)); }
	inline float get_spd_4() const { return ___spd_4; }
	inline float* get_address_of_spd_4() { return &___spd_4; }
	inline void set_spd_4(float value)
	{
		___spd_4 = value;
	}

	inline static int32_t get_offset_of_bod_5() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___bod_5)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_bod_5() const { return ___bod_5; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_bod_5() { return &___bod_5; }
	inline void set_bod_5(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___bod_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bod_5), (void*)value);
	}

	inline static int32_t get_offset_of_input_6() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___input_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_input_6() const { return ___input_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_input_6() { return &___input_6; }
	inline void set_input_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___input_6 = value;
	}

	inline static int32_t get_offset_of_projectile_7() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___projectile_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_projectile_7() const { return ___projectile_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_projectile_7() { return &___projectile_7; }
	inline void set_projectile_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___projectile_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectile_7), (void*)value);
	}

	inline static int32_t get_offset_of_gemsText_8() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___gemsText_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_gemsText_8() const { return ___gemsText_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_gemsText_8() { return &___gemsText_8; }
	inline void set_gemsText_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___gemsText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gemsText_8), (void*)value);
	}

	inline static int32_t get_offset_of_gems_9() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___gems_9)); }
	inline int32_t get_gems_9() const { return ___gems_9; }
	inline int32_t* get_address_of_gems_9() { return &___gems_9; }
	inline void set_gems_9(int32_t value)
	{
		___gems_9 = value;
	}

	inline static int32_t get_offset_of_cont_10() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___cont_10)); }
	inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * get_cont_10() const { return ___cont_10; }
	inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 ** get_address_of_cont_10() { return &___cont_10; }
	inline void set_cont_10(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * value)
	{
		___cont_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cont_10), (void*)value);
	}

	inline static int32_t get_offset_of_heartParent_11() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___heartParent_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_heartParent_11() const { return ___heartParent_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_heartParent_11() { return &___heartParent_11; }
	inline void set_heartParent_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___heartParent_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heartParent_11), (void*)value);
	}

	inline static int32_t get_offset_of_hpImage_12() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___hpImage_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hpImage_12() const { return ___hpImage_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hpImage_12() { return &___hpImage_12; }
	inline void set_hpImage_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hpImage_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hpImage_12), (void*)value);
	}

	inline static int32_t get_offset_of_sword_13() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___sword_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_sword_13() const { return ___sword_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_sword_13() { return &___sword_13; }
	inline void set_sword_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___sword_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sword_13), (void*)value);
	}

	inline static int32_t get_offset_of_altAttackIcon_14() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___altAttackIcon_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_altAttackIcon_14() const { return ___altAttackIcon_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_altAttackIcon_14() { return &___altAttackIcon_14; }
	inline void set_altAttackIcon_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___altAttackIcon_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___altAttackIcon_14), (void*)value);
	}

	inline static int32_t get_offset_of_clickAttackIcon_15() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___clickAttackIcon_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_clickAttackIcon_15() const { return ___clickAttackIcon_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_clickAttackIcon_15() { return &___clickAttackIcon_15; }
	inline void set_clickAttackIcon_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___clickAttackIcon_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clickAttackIcon_15), (void*)value);
	}

	inline static int32_t get_offset_of_shopFire_16() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___shopFire_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shopFire_16() const { return ___shopFire_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shopFire_16() { return &___shopFire_16; }
	inline void set_shopFire_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shopFire_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopFire_16), (void*)value);
	}

	inline static int32_t get_offset_of_shopLightning_17() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___shopLightning_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shopLightning_17() const { return ___shopLightning_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shopLightning_17() { return &___shopLightning_17; }
	inline void set_shopLightning_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shopLightning_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopLightning_17), (void*)value);
	}

	inline static int32_t get_offset_of_potionSprite_18() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___potionSprite_18)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_potionSprite_18() const { return ___potionSprite_18; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_potionSprite_18() { return &___potionSprite_18; }
	inline void set_potionSprite_18(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___potionSprite_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___potionSprite_18), (void*)value);
	}

	inline static int32_t get_offset_of_hp_19() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___hp_19)); }
	inline int32_t get_hp_19() const { return ___hp_19; }
	inline int32_t* get_address_of_hp_19() { return &___hp_19; }
	inline void set_hp_19(int32_t value)
	{
		___hp_19 = value;
	}

	inline static int32_t get_offset_of_maxHp_20() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___maxHp_20)); }
	inline int32_t get_maxHp_20() const { return ___maxHp_20; }
	inline int32_t* get_address_of_maxHp_20() { return &___maxHp_20; }
	inline void set_maxHp_20(int32_t value)
	{
		___maxHp_20 = value;
	}

	inline static int32_t get_offset_of_iframeTime_21() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___iframeTime_21)); }
	inline float get_iframeTime_21() const { return ___iframeTime_21; }
	inline float* get_address_of_iframeTime_21() { return &___iframeTime_21; }
	inline void set_iframeTime_21(float value)
	{
		___iframeTime_21 = value;
	}

	inline static int32_t get_offset_of_iframeVar_22() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___iframeVar_22)); }
	inline float get_iframeVar_22() const { return ___iframeVar_22; }
	inline float* get_address_of_iframeVar_22() { return &___iframeVar_22; }
	inline void set_iframeVar_22(float value)
	{
		___iframeVar_22 = value;
	}

	inline static int32_t get_offset_of_anim_23() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___anim_23)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_23() const { return ___anim_23; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_23() { return &___anim_23; }
	inline void set_anim_23(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_23), (void*)value);
	}

	inline static int32_t get_offset_of_dir_24() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___dir_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dir_24() const { return ___dir_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dir_24() { return &___dir_24; }
	inline void set_dir_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dir_24 = value;
	}

	inline static int32_t get_offset_of_faceDir_29() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___faceDir_29)); }
	inline int32_t get_faceDir_29() const { return ___faceDir_29; }
	inline int32_t* get_address_of_faceDir_29() { return &___faceDir_29; }
	inline void set_faceDir_29(int32_t value)
	{
		___faceDir_29 = value;
	}

	inline static int32_t get_offset_of_right_30() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___right_30)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_right_30() const { return ___right_30; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_right_30() { return &___right_30; }
	inline void set_right_30(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___right_30 = value;
	}

	inline static int32_t get_offset_of_left_31() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___left_31)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_left_31() const { return ___left_31; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_left_31() { return &___left_31; }
	inline void set_left_31(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___left_31 = value;
	}

	inline static int32_t get_offset_of_hasFire_32() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___hasFire_32)); }
	inline bool get_hasFire_32() const { return ___hasFire_32; }
	inline bool* get_address_of_hasFire_32() { return &___hasFire_32; }
	inline void set_hasFire_32(bool value)
	{
		___hasFire_32 = value;
	}

	inline static int32_t get_offset_of_hasLightning_33() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___hasLightning_33)); }
	inline bool get_hasLightning_33() const { return ___hasLightning_33; }
	inline bool* get_address_of_hasLightning_33() { return &___hasLightning_33; }
	inline void set_hasLightning_33(bool value)
	{
		___hasLightning_33 = value;
	}

	inline static int32_t get_offset_of_displayText_34() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___displayText_34)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_displayText_34() const { return ___displayText_34; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_displayText_34() { return &___displayText_34; }
	inline void set_displayText_34(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___displayText_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayText_34), (void*)value);
	}

	inline static int32_t get_offset_of_warpSpots_35() { return static_cast<int32_t>(offsetof(ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089, ___warpSpots_35)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_warpSpots_35() const { return ___warpSpots_35; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_warpSpots_35() { return &___warpSpots_35; }
	inline void set_warpSpots_35(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___warpSpots_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___warpSpots_35), (void*)value);
	}
};


// ExplodeScript
struct  ExplodeScript_tBCB568A298EC091BD1421E759EB29570F837BCB5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ExplodeScript::spd
	float ___spd_4;
	// UnityEngine.Rigidbody2D ExplodeScript::bod
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___bod_5;

public:
	inline static int32_t get_offset_of_spd_4() { return static_cast<int32_t>(offsetof(ExplodeScript_tBCB568A298EC091BD1421E759EB29570F837BCB5, ___spd_4)); }
	inline float get_spd_4() const { return ___spd_4; }
	inline float* get_address_of_spd_4() { return &___spd_4; }
	inline void set_spd_4(float value)
	{
		___spd_4 = value;
	}

	inline static int32_t get_offset_of_bod_5() { return static_cast<int32_t>(offsetof(ExplodeScript_tBCB568A298EC091BD1421E759EB29570F837BCB5, ___bod_5)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_bod_5() const { return ___bod_5; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_bod_5() { return &___bod_5; }
	inline void set_bod_5(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___bod_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bod_5), (void*)value);
	}
};


// GameController
struct  GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] GameController::enemyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___enemyArray_4;
	// UnityEngine.GameObject GameController::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_5;
	// System.Single GameController::timeBetweenSpawns
	float ___timeBetweenSpawns_6;
	// System.Single GameController::timeReduceFactor
	float ___timeReduceFactor_7;
	// System.Single GameController::spawnCools
	float ___spawnCools_8;
	// UnityEngine.Vector3[] GameController::spawnPoint
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___spawnPoint_9;
	// System.Int32 GameController::score
	int32_t ___score_10;
	// System.Boolean GameController::paused
	bool ___paused_11;
	// UnityEngine.GameObject GameController::pauseUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pauseUI_12;
	// UnityEngine.GameObject GameController::pauseButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pauseButton_13;
	// UnityEngine.GameObject GameController::restartButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___restartButton_14;
	// UnityEngine.UI.Text GameController::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_15;
	// System.Single GameController::seconds
	float ___seconds_16;

public:
	inline static int32_t get_offset_of_enemyArray_4() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___enemyArray_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_enemyArray_4() const { return ___enemyArray_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_enemyArray_4() { return &___enemyArray_4; }
	inline void set_enemyArray_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___enemyArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyArray_4), (void*)value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___player_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_5() const { return ___player_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}

	inline static int32_t get_offset_of_timeBetweenSpawns_6() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___timeBetweenSpawns_6)); }
	inline float get_timeBetweenSpawns_6() const { return ___timeBetweenSpawns_6; }
	inline float* get_address_of_timeBetweenSpawns_6() { return &___timeBetweenSpawns_6; }
	inline void set_timeBetweenSpawns_6(float value)
	{
		___timeBetweenSpawns_6 = value;
	}

	inline static int32_t get_offset_of_timeReduceFactor_7() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___timeReduceFactor_7)); }
	inline float get_timeReduceFactor_7() const { return ___timeReduceFactor_7; }
	inline float* get_address_of_timeReduceFactor_7() { return &___timeReduceFactor_7; }
	inline void set_timeReduceFactor_7(float value)
	{
		___timeReduceFactor_7 = value;
	}

	inline static int32_t get_offset_of_spawnCools_8() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___spawnCools_8)); }
	inline float get_spawnCools_8() const { return ___spawnCools_8; }
	inline float* get_address_of_spawnCools_8() { return &___spawnCools_8; }
	inline void set_spawnCools_8(float value)
	{
		___spawnCools_8 = value;
	}

	inline static int32_t get_offset_of_spawnPoint_9() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___spawnPoint_9)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_spawnPoint_9() const { return ___spawnPoint_9; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_spawnPoint_9() { return &___spawnPoint_9; }
	inline void set_spawnPoint_9(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___spawnPoint_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnPoint_9), (void*)value);
	}

	inline static int32_t get_offset_of_score_10() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___score_10)); }
	inline int32_t get_score_10() const { return ___score_10; }
	inline int32_t* get_address_of_score_10() { return &___score_10; }
	inline void set_score_10(int32_t value)
	{
		___score_10 = value;
	}

	inline static int32_t get_offset_of_paused_11() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___paused_11)); }
	inline bool get_paused_11() const { return ___paused_11; }
	inline bool* get_address_of_paused_11() { return &___paused_11; }
	inline void set_paused_11(bool value)
	{
		___paused_11 = value;
	}

	inline static int32_t get_offset_of_pauseUI_12() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___pauseUI_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pauseUI_12() const { return ___pauseUI_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pauseUI_12() { return &___pauseUI_12; }
	inline void set_pauseUI_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pauseUI_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseUI_12), (void*)value);
	}

	inline static int32_t get_offset_of_pauseButton_13() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___pauseButton_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pauseButton_13() const { return ___pauseButton_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pauseButton_13() { return &___pauseButton_13; }
	inline void set_pauseButton_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pauseButton_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseButton_13), (void*)value);
	}

	inline static int32_t get_offset_of_restartButton_14() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___restartButton_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_restartButton_14() const { return ___restartButton_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_restartButton_14() { return &___restartButton_14; }
	inline void set_restartButton_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___restartButton_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___restartButton_14), (void*)value);
	}

	inline static int32_t get_offset_of_scoreText_15() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___scoreText_15)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_15() const { return ___scoreText_15; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_15() { return &___scoreText_15; }
	inline void set_scoreText_15(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_15), (void*)value);
	}

	inline static int32_t get_offset_of_seconds_16() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___seconds_16)); }
	inline float get_seconds_16() const { return ___seconds_16; }
	inline float* get_address_of_seconds_16() { return &___seconds_16; }
	inline void set_seconds_16(float value)
	{
		___seconds_16 = value;
	}
};


// LightningScript
struct  LightningScript_t217C2D931541CC32964FD206DA0AB697A6404F20  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SpriteRenderer LightningScript::rend
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___rend_4;
	// UnityEngine.SpriteRenderer[] LightningScript::childRends
	SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* ___childRends_5;
	// System.Single LightningScript::fadePerSecond
	float ___fadePerSecond_6;

public:
	inline static int32_t get_offset_of_rend_4() { return static_cast<int32_t>(offsetof(LightningScript_t217C2D931541CC32964FD206DA0AB697A6404F20, ___rend_4)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_rend_4() const { return ___rend_4; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_rend_4() { return &___rend_4; }
	inline void set_rend_4(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___rend_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rend_4), (void*)value);
	}

	inline static int32_t get_offset_of_childRends_5() { return static_cast<int32_t>(offsetof(LightningScript_t217C2D931541CC32964FD206DA0AB697A6404F20, ___childRends_5)); }
	inline SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* get_childRends_5() const { return ___childRends_5; }
	inline SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF** get_address_of_childRends_5() { return &___childRends_5; }
	inline void set_childRends_5(SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* value)
	{
		___childRends_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childRends_5), (void*)value);
	}

	inline static int32_t get_offset_of_fadePerSecond_6() { return static_cast<int32_t>(offsetof(LightningScript_t217C2D931541CC32964FD206DA0AB697A6404F20, ___fadePerSecond_6)); }
	inline float get_fadePerSecond_6() const { return ___fadePerSecond_6; }
	inline float* get_address_of_fadePerSecond_6() { return &___fadePerSecond_6; }
	inline void set_fadePerSecond_6(float value)
	{
		___fadePerSecond_6 = value;
	}
};


// MenuController
struct  MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// PlayerProjectile
struct  PlayerProjectile_tA265B9898046575C87E4C08C779AC0C872CAA5CB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single PlayerProjectile::spd
	float ___spd_4;
	// UnityEngine.Rigidbody2D PlayerProjectile::bod
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___bod_5;
	// System.Int32 PlayerProjectile::damage
	int32_t ___damage_6;
	// System.Boolean PlayerProjectile::hasHurt
	bool ___hasHurt_7;
	// UnityEngine.GameObject PlayerProjectile::explode
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___explode_8;

public:
	inline static int32_t get_offset_of_spd_4() { return static_cast<int32_t>(offsetof(PlayerProjectile_tA265B9898046575C87E4C08C779AC0C872CAA5CB, ___spd_4)); }
	inline float get_spd_4() const { return ___spd_4; }
	inline float* get_address_of_spd_4() { return &___spd_4; }
	inline void set_spd_4(float value)
	{
		___spd_4 = value;
	}

	inline static int32_t get_offset_of_bod_5() { return static_cast<int32_t>(offsetof(PlayerProjectile_tA265B9898046575C87E4C08C779AC0C872CAA5CB, ___bod_5)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_bod_5() const { return ___bod_5; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_bod_5() { return &___bod_5; }
	inline void set_bod_5(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___bod_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bod_5), (void*)value);
	}

	inline static int32_t get_offset_of_damage_6() { return static_cast<int32_t>(offsetof(PlayerProjectile_tA265B9898046575C87E4C08C779AC0C872CAA5CB, ___damage_6)); }
	inline int32_t get_damage_6() const { return ___damage_6; }
	inline int32_t* get_address_of_damage_6() { return &___damage_6; }
	inline void set_damage_6(int32_t value)
	{
		___damage_6 = value;
	}

	inline static int32_t get_offset_of_hasHurt_7() { return static_cast<int32_t>(offsetof(PlayerProjectile_tA265B9898046575C87E4C08C779AC0C872CAA5CB, ___hasHurt_7)); }
	inline bool get_hasHurt_7() const { return ___hasHurt_7; }
	inline bool* get_address_of_hasHurt_7() { return &___hasHurt_7; }
	inline void set_hasHurt_7(bool value)
	{
		___hasHurt_7 = value;
	}

	inline static int32_t get_offset_of_explode_8() { return static_cast<int32_t>(offsetof(PlayerProjectile_tA265B9898046575C87E4C08C779AC0C872CAA5CB, ___explode_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_explode_8() const { return ___explode_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_explode_8() { return &___explode_8; }
	inline void set_explode_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___explode_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explode_8), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// EnemyScript/ObjectOddsPair[]
struct ObjectOddsPairU5BU5D_t2F621535B6FBDD69E6B8F7869F20A536E0E7EDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543  m_Items[1];

public:
	inline ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___drop_0), (void*)NULL);
	}
	inline ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___drop_0), (void*)NULL);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * m_Items[1];

public:
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
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
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * m_Items[1];

public:
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___tag0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<ExampleScript>()
inline ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * Component_GetComponent_TisExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089_m4484074F6509A9BAF36E696A3CBE1A3C448BF94C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void ExampleScript::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleScript_TakeDamage_mB13A22F6CE0A1A9333A626D9E8B1A4FD10858CD3 (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * __this, int32_t ___dmg0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<GameController>()
inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * Object_FindObjectOfType_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_mCBE129B396568B632923B0B88AF7ADDD9E69A69D (const RuntimeMethod* method)
{
	return ((  GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Object::FindObjectOfType<ExampleScript>()
inline ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * Object_FindObjectOfType_TisExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089_mEC33505540B0DDAB2D7B1F428542F7B07D8D7DF4 (const RuntimeMethod* method)
{
	return ((  ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Void EnemyScript::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyScript_Attack_mF751516A20ADBA17DBDA32A897DFF847FA351FD3 (EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398 (float ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void EnemyScript::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyScript_TakeDamage_mB5512871DC9E432EF8F95A82E2686F477824FE36 (EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6 * __this, int32_t ___dmg0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___stateName0, const RuntimeMethod* method);
// System.Void GameController::AddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_AddScore_m94D19FBD9E3BCBCA1DB41320D1B9EC93ED3F40B3 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, int32_t ___pts0, const RuntimeMethod* method);
// System.Void EnemyScript::RandomizeItemDrop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyScript_RandomizeItemDrop_m602C7E965265A8C951A06702BB544B2A88390F31 (EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.BoxCollider2D::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoxCollider2D_get_size_m011E7AA7861BF58898A64D986A4235C1E2061BF9 (BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.BoxCollider2D::set_size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider2D_set_size_m8460A38ADDD4BE82BE1F416DE3D7AFB87EBA6760 (BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider2D::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider2D_set_isTrigger_m129C3059CC21789EFA198E153A3C82662E3BFF52 (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void ExampleScript::AddHeart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleScript_AddHeart_m644DB68AEA3C195EBCA916F1E8B3B540BC3D4887 (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void ExampleScript::SwordAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleScript_SwordAttack_m63CDCE9C75E4394BB3376053E70460FFA6150EA4 (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void ExampleScript::RemoveHeart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleScript_RemoveHeart_mC69AE8FBAC10A582EEEBEF9CEC68D663927BE3E4 (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * __this, const RuntimeMethod* method);
// System.Void ExampleScript::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleScript_Die_m8C434F9124789DF451D96386D70199BB307815A4 (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// System.Void GameController::ClearSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_ClearSave_m3F8837084A901EA238F463B4FC2E5AA8F7DD5D3E (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// System.Void GameController::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Pause_mF6FCFD1C244F2FD91A652F9D9A6ED07C9AD0DC2B (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// System.Void ExampleScript::ChangeGems(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleScript_ChangeGems_m46525BB116961B6A850B60659071BB9A49FC508B (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * __this, int32_t ___amt0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Collider2D::get_isTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider2D_get_isTrigger_m2D8D206E7F91ED3AF8AC552E17414CBD7279F6FF (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * __this, const RuntimeMethod* method);
// System.Void ExampleScript::SavePrefs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleScript_SavePrefs_m18AABC2A564596A78A9A93A86C118ECE53DF967A (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214 (String_t* ___key0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471 (String_t* ___key0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void GameController::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SpawnEnemy_mBE7985A65ECDF6BCDAB4A8E525805B0FA829B01A (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mEFB6D3FD1D9D251EBB6E6286491592C4A6ABD6DE (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Text>()
inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* GameObject_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m01C51735078110D354DFDA5EB9685D44E6659287 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared)(__this, method);
}
// System.Void UnityEngine.PlayerPrefs::DeleteAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteAll_mAE4594C2D974BE67EC390E0FDECEDC59F17A12E0 (const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.SpriteRenderer>()
inline SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* GameObject_GetComponentsInChildren_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m4976A41443E954425C930DED33593E7870CDE3B9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<EnemyScript>()
inline EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6 * Component_GetComponent_TisEnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6_m9F6547B6A7873C40D2B333829E9D0AFA4AB3710A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void BallController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallController_Awake_m1B1009E79B3B20D9566C8965ADAB540198269F22 (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bod = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_bod_4(L_0);
		// }
		return;
	}
}
// System.Void BallController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallController_OnEnable_m9B94586CD799CE2240E1CB01BA4EB06E19DD788A (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, const RuntimeMethod* method)
{
	{
		// bod.AddForce(Vector2.up * spd);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_bod_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_2 = __this->get_spd_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_1, L_2, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BallController::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallController_OnTriggerEnter2D_m060A49067F0FBA0830A1B18893C4352BD9AAF8F6 (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (collision.CompareTag("Wall")){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void BallController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallController__ctor_m2D731C16454B72F7E66EBDA53C80A910BADC6CC6 (BallController_t2ABF2C16C46F6450CACB64FD360219CEC7087AAD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CameraController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Awake_mD3451D79F6E4EC030180A56728D0329E1D9F0809 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B0F572DACA2403E3CDFAC64092366829997C551);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// transform.position = staticTargets[PlayerPrefs.GetInt("WarpSpot")];
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = __this->get_staticTargets_5();
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9B0F572DACA2403E3CDFAC64092366829997C551, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_4, /*hidden argument*/NULL);
		// if (SceneManager.GetActiveScene().name == "Shop")
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_5;
		L_5 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_1 = L_5;
		String_t* L_6;
		L_6 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_1), /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223, /*hidden argument*/NULL);
		V_0 = L_7;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		// target = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		__this->set_target_4(L_9);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void CameraController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_FixedUpdate_m5C8D9F96E5AECA2F53DB83DAD8194CE51048B9E3 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// transform.position = Vector3.Lerp(transform.position, new Vector3(target.position.x, target.position.y, -10), lerpSpd * Time.fixedDeltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_target_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_target_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), L_5, L_8, (-10.0f), /*hidden argument*/NULL);
		float L_10 = __this->get_lerpSpd_6();
		float L_11;
		L_11 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_2, L_9, ((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_m07EC5A8C82742876097619BE7DD9043F47327DAE (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DroppedItemScript::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DroppedItemScript_OnEnable_mF6FB35A36E0E1CF5AAB4C49E6CF14B0B41A4B16D (DroppedItemScript_t3D1EDC5B72EE22E19F84358B017E7ACA138DD061 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("Disable", 8f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309, (8.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DroppedItemScript::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DroppedItemScript_Disable_m1F2592E7FA60E9105422FFC6D01D1E379B4964E8 (DroppedItemScript_t3D1EDC5B72EE22E19F84358B017E7ACA138DD061 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DroppedItemScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DroppedItemScript__ctor_m565B9BFBB16251DBA9126D47412A4450AF2334B1 (DroppedItemScript_t3D1EDC5B72EE22E19F84358B017E7ACA138DD061 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EnemyProjectileScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyProjectileScript_Awake_m5B4DD3FA4F1CC0334A7C9DEAC9F3916975FC92C0 (EnemyProjectileScript_t87DB61FFE917047281F152F95684311634C02282 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bod = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_bod_5(L_0);
		// }
		return;
	}
}
// System.Void EnemyProjectileScript::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyProjectileScript_OnEnable_m46B08973838440DD07CC7B1DFC46CF84DFC1BE4F (EnemyProjectileScript_t87DB61FFE917047281F152F95684311634C02282 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hasHurt = false;
		__this->set_hasHurt_7((bool)0);
		// bod.AddForce(transform.up * spd);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_bod_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_spd_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_0, L_5, /*hidden argument*/NULL);
		// Invoke("Disable", 4f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309, (4.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyProjectileScript::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyProjectileScript_Disable_m1B4CA3023AEBAC8F8A7AC90A614808A967FB0343 (EnemyProjectileScript_t87DB61FFE917047281F152F95684311634C02282 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyProjectileScript::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyProjectileScript_OnTriggerEnter2D_m24D0C5EF005AFE9D759A689426C1CB877F583E38 (EnemyProjectileScript_t87DB61FFE917047281F152F95684311634C02282 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089_m4484074F6509A9BAF36E696A3CBE1A3C448BF94C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (collision.gameObject.CompareTag("Player") && !hasHurt)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		bool L_3 = __this->get_hasHurt_7();
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_004a;
		}
	}
	{
		// collision.GetComponent<ExampleScript>().TakeDamage(damage);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5 = ___collision0;
		ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * L_6;
		L_6 = Component_GetComponent_TisExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089_m4484074F6509A9BAF36E696A3CBE1A3C448BF94C(L_5, /*hidden argument*/Component_GetComponent_TisExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089_m4484074F6509A9BAF36E696A3CBE1A3C448BF94C_RuntimeMethod_var);
		int32_t L_7 = __this->get_damage_6();
		ExampleScript_TakeDamage_mB13A22F6CE0A1A9333A626D9E8B1A4FD10858CD3(L_6, L_7, /*hidden argument*/NULL);
		// hasHurt = true;
		__this->set_hasHurt_7((bool)1);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_8, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// if (collision.CompareTag("Wall"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_9 = ___collision0;
		bool L_10;
		L_10 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_9, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, /*hidden argument*/NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_12, /*hidden argument*/NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void EnemyProjectileScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyProjectileScript__ctor_mAB6F408E6F46EC07689C6B071DDEDB20383FF6AB (EnemyProjectileScript_t87DB61FFE917047281F152F95684311634C02282 * __this, const RuntimeMethod* method)
{
	{
		// public int damage = 1;
		__this->set_damage_6(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EnemyScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyScript_Awake_m9AEC04373E6E7EF02AF9692086B5DA2B8EF74382 (EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089_mEC33505540B0DDAB2D7B1F428542F7B07D8D7DF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_mCBE129B396568B632923B0B88AF7ADDD9E69A69D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cont = FindObjectOfType<GameController>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_0;
		L_0 = Object_FindObjectOfType_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_mCBE129B396568B632923B0B88AF7ADDD9E69A69D(/*hidden argument*/Object_FindObjectOfType_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_mCBE129B396568B632923B0B88AF7ADDD9E69A69D_RuntimeMethod_var);
		__this->set_cont_8(L_0);
		// anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim_4(L_1);
		// bod = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2;
		L_2 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_bod_11(L_2);
		// col = GetComponent<Collider2D>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3;
		L_3 = Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30(__this, /*hidden argument*/Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		__this->set_col_5(L_3);
		// player = FindObjectOfType<ExampleScript>();
		ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * L_4;
		L_4 = Object_FindObjectOfType_TisExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089_mEC33505540B0DDAB2D7B1F428542F7B07D8D7DF4(/*hidden argument*/Object_FindObjectOfType_TisExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089_mEC33505540B0DDAB2D7B1F428542F7B07D8D7DF4_RuntimeMethod_var);
		__this->set_player_12(L_4);
		// hp = maxHp;
		int32_t L_5 = __this->get_maxHp_7();
		__this->set_hp_6(L_5);
		// }
		return;
	}
}
// System.Void EnemyScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyScript_Update_m58890167DB372F32856DF1504DD50977C37E38F5 (EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B087B752EF0D0EF98DFB9C658CF4BD3323CDAEE);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// if (player.isActiveAndEnabled)
		ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * L_0 = __this->get_player_12();
		bool L_1;
		L_1 = Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_00c2;
		}
	}
	{
		// distance = Vector2.Distance(transform.position, player.transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * L_6 = __this->get_player_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_8, /*hidden argument*/NULL);
		float L_10;
		L_10 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_5, L_9, /*hidden argument*/NULL);
		__this->set_distance_14(L_10);
		// if (distance >= attackRange)
		float L_11 = __this->get_distance_14();
		float L_12 = __this->get_attackRange_13();
		V_3 = (bool)((((int32_t)((!(((float)L_11) >= ((float)L_12)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0093;
		}
	}
	{
		// transform.position = Vector3.MoveTowards(transform.position, player.transform.position, spd * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * L_17 = __this->get_player_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = __this->get_spd_9();
		float L_21;
		L_21 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_16, L_19, ((float)il2cpp_codegen_multiply((float)L_20, (float)L_21)), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_14, L_22, /*hidden argument*/NULL);
	}

IL_0093:
	{
		// if (distance < attackRange & attackCools <= 0)
		float L_23 = __this->get_distance_14();
		float L_24 = __this->get_attackRange_13();
		float L_25 = __this->get_attackCools_15();
		V_4 = (bool)((int32_t)((int32_t)((((float)L_23) < ((float)L_24))? 1 : 0)&(int32_t)((((int32_t)((!(((float)L_25) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0)));
		bool L_26 = V_4;
		if (!L_26)
		{
			goto IL_00c1;
		}
	}
	{
		// Attack();
		EnemyScript_Attack_mF751516A20ADBA17DBDA32A897DFF847FA351FD3(__this, /*hidden argument*/NULL);
	}

IL_00c1:
	{
	}

IL_00c2:
	{
		// if (attackCools > 0) attackCools -= Time.deltaTime;
		float L_27 = __this->get_attackCools_15();
		V_5 = (bool)((((float)L_27) > ((float)(0.0f)))? 1 : 0);
		bool L_28 = V_5;
		if (!L_28)
		{
			goto IL_00e7;
		}
	}
	{
		// if (attackCools > 0) attackCools -= Time.deltaTime;
		float L_29 = __this->get_attackCools_15();
		float L_30;
		L_30 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_attackCools_15(((float)il2cpp_codegen_subtract((float)L_29, (float)L_30)));
	}

IL_00e7:
	{
		// if (iframeVar > 0)
		float L_31 = __this->get_iframeVar_20();
		V_6 = (bool)((((float)L_31) > ((float)(0.0f)))? 1 : 0);
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_0127;
		}
	}
	{
		// iframeVar -= Time.deltaTime;
		float L_33 = __this->get_iframeVar_20();
		float L_34;
		L_34 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_iframeVar_20(((float)il2cpp_codegen_subtract((float)L_33, (float)L_34)));
		// anim.SetFloat("iframes", iframeVar);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_35 = __this->get_anim_4();
		float L_36 = __this->get_iframeVar_20();
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_35, _stringLiteral8B087B752EF0D0EF98DFB9C658CF4BD3323CDAEE, L_36, /*hidden argument*/NULL);
		goto IL_0134;
	}

IL_0127:
	{
		// else col.enabled = true;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_37 = __this->get_col_5();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_37, (bool)1, /*hidden argument*/NULL);
	}

IL_0134:
	{
		// Vector3 dir = player.transform.position - transform.position;
		ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * L_38 = __this->get_player_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_38, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_39, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_40, L_42, /*hidden argument*/NULL);
		V_0 = L_43;
		// float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg + 90;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = V_0;
		float L_45 = L_44.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = V_0;
		float L_47 = L_46.get_x_2();
		float L_48;
		L_48 = atan2f(L_45, L_47);
		V_1 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_48, (float)(57.2957802f))), (float)(90.0f)));
		// gameObject.transform.rotation = Quaternion.AngleAxis(angle, Vector3.forward);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49;
		L_49 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_49, /*hidden argument*/NULL);
		float L_51 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_53;
		L_53 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(L_51, L_52, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_50, L_53, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyScript::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyScript_Attack_mF751516A20ADBA17DBDA32A897DFF847FA351FD3 (EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// Vector3 dir = player.transform.position - transform.position;
		ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * L_0 = __this->get_player_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg - 90;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		float L_9 = L_8.get_x_2();
		float L_10;
		L_10 = atan2f(L_7, L_9);
		V_1 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_10, (float)(57.2957802f))), (float)(90.0f)));
		// Instantiate(enemyProjectile, transform.position, Quaternion.AngleAxis(angle, Vector3.forward));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_enemyProjectile_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(L_14, L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_11, L_13, L_16, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// attackCools = timeBetweenAttacks;
		float L_18 = __this->get_timeBetweenAttacks_16();
		__this->set_attackCools_15(L_18);
		// }
		return;
	}
}
// System.Void EnemyScript::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyScript_OnTriggerEnter2D_m76DBE0FC70F77354045113A47B58307F94398E79 (EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B9A825AA10FC084D0E9390F36B65021EF40A5BD);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (collision.gameObject.CompareTag("PlayerWeapon"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteral0B9A825AA10FC084D0E9390F36B65021EF40A5BD, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// TakeDamage(1);
		EnemyScript_TakeDamage_mB5512871DC9E432EF8F95A82E2686F477824FE36(__this, 1, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void EnemyScript::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyScript_OnTriggerStay2D_m38BA56706C77AC400FC2118151843F501D309DE2 (EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B9A825AA10FC084D0E9390F36B65021EF40A5BD);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (collision.gameObject.CompareTag("PlayerWeapon"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteral0B9A825AA10FC084D0E9390F36B65021EF40A5BD, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// TakeDamage(1);
		EnemyScript_TakeDamage_mB5512871DC9E432EF8F95A82E2686F477824FE36(__this, 1, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void EnemyScript::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyScript_OnMouseDown_m628B8E499EBC662A46850D0EC27C755F8EDE121D (EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (player.hasLightning)
		ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * L_0 = __this->get_player_12();
		bool L_1 = L_0->get_hasLightning_33();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		// TakeDamage(1);
		EnemyScript_TakeDamage_mB5512871DC9E432EF8F95A82E2686F477824FE36(__this, 1, /*hidden argument*/NULL);
		// Vector3 pos = gameObject.GetComponent<Transform>().position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_3, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// Instantiate(lightning, pos, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_lightning_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_6, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void EnemyScript::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyScript_TakeDamage_mB5512871DC9E432EF8F95A82E2686F477824FE36 (EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6 * __this, int32_t ___dmg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08EF1409295A748F17C961491378A3B6215AA838);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59E2107B28E73F30F203DA7D3EC21F5E77423597);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B087B752EF0D0EF98DFB9C658CF4BD3323CDAEE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// anim.Play("BossHurt");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_anim_4();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_0, _stringLiteral59E2107B28E73F30F203DA7D3EC21F5E77423597, /*hidden argument*/NULL);
		// col.enabled = false;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_1 = __this->get_col_5();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)0, /*hidden argument*/NULL);
		// attackCools = timeBetweenAttacks;
		float L_2 = __this->get_timeBetweenAttacks_16();
		__this->set_attackCools_15(L_2);
		// if (iframeVar <= 0)
		float L_3 = __this->get_iframeVar_20();
		V_0 = (bool)((((int32_t)((!(((float)L_3) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_00a8;
		}
	}
	{
		// for (int i = 0; i < dmg; i++)
		V_1 = 0;
		goto IL_007c;
	}

IL_0044:
	{
		// hp -= dmg;
		int32_t L_5 = __this->get_hp_6();
		int32_t L_6 = ___dmg0;
		__this->set_hp_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)));
		// if (hp <= 0)
		int32_t L_7 = __this->get_hp_6();
		V_2 = (bool)((((int32_t)((((int32_t)L_7) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0077;
		}
	}
	{
		// Invoke("Die", 0.03f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral08EF1409295A748F17C961491378A3B6215AA838, (0.0299999993f), /*hidden argument*/NULL);
		// return;
		goto IL_00a8;
	}

IL_0077:
	{
		// for (int i = 0; i < dmg; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_007c:
	{
		// for (int i = 0; i < dmg; i++)
		int32_t L_10 = V_1;
		int32_t L_11 = ___dmg0;
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0044;
		}
	}
	{
		// iframeVar = iframeTime;
		float L_13 = __this->get_iframeTime_19();
		__this->set_iframeVar_20(L_13);
		// anim.SetFloat("iframes", iframeVar);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_14 = __this->get_anim_4();
		float L_15 = __this->get_iframeVar_20();
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_14, _stringLiteral8B087B752EF0D0EF98DFB9C658CF4BD3323CDAEE, L_15, /*hidden argument*/NULL);
	}

IL_00a8:
	{
		// }
		return;
	}
}
// System.Void EnemyScript::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyScript_Die_mBBADE7E31668FE4BE577523A2D27761181E1FE14 (EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (maxHp == 1) cont.AddScore(100);
		int32_t L_0 = __this->get_maxHp_7();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// if (maxHp == 1) cont.AddScore(100);
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_2 = __this->get_cont_8();
		GameController_AddScore_m94D19FBD9E3BCBCA1DB41320D1B9EC93ED3F40B3(L_2, ((int32_t)100), /*hidden argument*/NULL);
	}

IL_001c:
	{
		// if (maxHp >= 2) cont.AddScore(1000);
		int32_t L_3 = __this->get_maxHp_7();
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// if (maxHp >= 2) cont.AddScore(1000);
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_5 = __this->get_cont_8();
		GameController_AddScore_m94D19FBD9E3BCBCA1DB41320D1B9EC93ED3F40B3(L_5, ((int32_t)1000), /*hidden argument*/NULL);
	}

IL_003d:
	{
		// RandomizeItemDrop();
		EnemyScript_RandomizeItemDrop_m602C7E965265A8C951A06702BB544B2A88390F31(__this, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyScript::RandomizeItemDrop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyScript_RandomizeItemDrop_m602C7E965265A8C951A06702BB544B2A88390F31 (EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B7_0 = 0;
	{
		// int maxRoll = 0;
		V_0 = 0;
		// List<int> oddsChunks = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_0, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		V_1 = L_0;
		// oddsChunks.Add(maxRoll);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = V_1;
		int32_t L_2 = V_0;
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_1, L_2, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// for (int i = 0; i < itemDrops.Length; i++)
		V_3 = 0;
		goto IL_0037;
	}

IL_0015:
	{
		// maxRoll += itemDrops[i].odds;
		int32_t L_3 = V_0;
		ObjectOddsPairU5BU5D_t2F621535B6FBDD69E6B8F7869F20A536E0E7EDD5* L_4 = __this->get_itemDrops_10();
		int32_t L_5 = V_3;
		int32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->get_odds_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_6));
		// oddsChunks.Add(maxRoll);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_7 = V_1;
		int32_t L_8 = V_0;
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_7, L_8, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// for (int i = 0; i < itemDrops.Length; i++)
		int32_t L_9 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0037:
	{
		// for (int i = 0; i < itemDrops.Length; i++)
		int32_t L_10 = V_3;
		ObjectOddsPairU5BU5D_t2F621535B6FBDD69E6B8F7869F20A536E0E7EDD5* L_11 = __this->get_itemDrops_10();
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0015;
		}
	}
	{
		// int randRoll = (Random.Range(1, maxRoll+1));
		int32_t L_13 = V_0;
		int32_t L_14;
		L_14 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_14;
		// for (int j = 0; j < itemDrops.Length; j++)
		V_5 = 0;
		goto IL_00d6;
	}

IL_0057:
	{
		// if (randRoll > oddsChunks[j] && randRoll <= oddsChunks[j+1])
		int32_t L_15 = V_2;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_16 = V_1;
		int32_t L_17 = V_5;
		int32_t L_18;
		L_18 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_16, L_17, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		if ((((int32_t)L_15) <= ((int32_t)L_18)))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_19 = V_2;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_20 = V_1;
		int32_t L_21 = V_5;
		int32_t L_22;
		L_22 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_20, ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)), /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		G_B7_0 = ((((int32_t)((((int32_t)L_19) > ((int32_t)L_22))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0076;
	}

IL_0075:
	{
		G_B7_0 = 0;
	}

IL_0076:
	{
		V_6 = (bool)G_B7_0;
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00cf;
		}
	}
	{
		// if (itemDrops[j].drop != null) Instantiate(itemDrops[j].drop, transform.position, Quaternion.AngleAxis(0, Vector3.forward));
		ObjectOddsPairU5BU5D_t2F621535B6FBDD69E6B8F7869F20A536E0E7EDD5* L_24 = __this->get_itemDrops_10();
		int32_t L_25 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->get_drop_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_26, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_7 = L_27;
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00cd;
		}
	}
	{
		// if (itemDrops[j].drop != null) Instantiate(itemDrops[j].drop, transform.position, Quaternion.AngleAxis(0, Vector3.forward));
		ObjectOddsPairU5BU5D_t2F621535B6FBDD69E6B8F7869F20A536E0E7EDD5* L_29 = __this->get_itemDrops_10();
		int32_t L_30 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->get_drop_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_35;
		L_35 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398((0.0f), L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36;
		L_36 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_31, L_33, L_35, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_00cd:
	{
		// break;
		goto IL_00eb;
	}

IL_00cf:
	{
		// for (int j = 0; j < itemDrops.Length; j++)
		int32_t L_37 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00d6:
	{
		// for (int j = 0; j < itemDrops.Length; j++)
		int32_t L_38 = V_5;
		ObjectOddsPairU5BU5D_t2F621535B6FBDD69E6B8F7869F20A536E0E7EDD5* L_39 = __this->get_itemDrops_10();
		V_8 = (bool)((((int32_t)L_38) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))? 1 : 0);
		bool L_40 = V_8;
		if (L_40)
		{
			goto IL_0057;
		}
	}

IL_00eb:
	{
		// }
		return;
	}
}
// System.Void EnemyScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyScript__ctor_m6E261C7BA27C4FE19F976B61D984EC5E07D526D8 (EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6 * __this, const RuntimeMethod* method)
{
	{
		// public float timeBetweenAttacks = 0.3f;
		__this->set_timeBetweenAttacks_16((0.300000012f));
		// public float iframeTime = 0.3f;
		__this->set_iframeTime_19((0.300000012f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EntranceScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntranceScript_Awake_mBEA2B595F41264C151A0BD61527514AB2D5A2C91 (EntranceScript_t1E4E3E05AA4766163191063CDDEDD13AF3F2861F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45CD3F4B9F0FA9909B48F178CC980A73FB78F817);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B35CE1AB5E2DC90AB069C4BE809941334FE0BE4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		// if (!PlayerPrefs.HasKey("RevealedEntrances"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral45CD3F4B9F0FA9909B48F178CC980A73FB78F817, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// PlayerPrefs.SetInt("RevealedEntrances", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral45CD3F4B9F0FA9909B48F178CC980A73FB78F817, 0, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// if ((PlayerPrefs.GetInt("RevealedEntrances") > 0 && state == 0) || (PlayerPrefs.GetInt("RevealedEntrances") > 1 && state == 2))
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral45CD3F4B9F0FA9909B48F178CC980A73FB78F817, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_3 = __this->get_state_6();
		if (!L_3)
		{
			goto IL_004e;
		}
	}

IL_0033:
	{
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral45CD3F4B9F0FA9909B48F178CC980A73FB78F817, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_5 = __this->get_state_6();
		G_B7_0 = ((((int32_t)L_5) == ((int32_t)2))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B7_0 = 0;
	}

IL_004c:
	{
		G_B9_0 = G_B7_0;
		goto IL_004f;
	}

IL_004e:
	{
		G_B9_0 = 1;
	}

IL_004f:
	{
		V_1 = (bool)G_B9_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_007e;
		}
	}
	{
		// anim.Play("Stairs");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_7 = __this->get_anim_4();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_7, _stringLiteral4B35CE1AB5E2DC90AB069C4BE809941334FE0BE4, /*hidden argument*/NULL);
		// state = 1;
		__this->set_state_6(1);
		// Invoke("Open", 1.5f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B, (1.5f), /*hidden argument*/NULL);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void EntranceScript::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntranceScript_OnTriggerEnter2D_m7CE5029113573E93DF2FA77E9070C92245B083EE (EntranceScript_t1E4E3E05AA4766163191063CDDEDD13AF3F2861F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B9A825AA10FC084D0E9390F36B65021EF40A5BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FB0F0033F6DE2A077C3A556C78769E707467016);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45CD3F4B9F0FA9909B48F178CC980A73FB78F817);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (collision.CompareTag("PlayerWeapon") && state == 0)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteral0B9A825AA10FC084D0E9390F36B65021EF40A5BD, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = __this->get_state_6();
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		// Invoke("Open", 1.5f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B, (1.5f), /*hidden argument*/NULL);
		// state = 1;
		__this->set_state_6(1);
		// anim.Play("EntranceReveal");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = __this->get_anim_4();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_4, _stringLiteral1FB0F0033F6DE2A077C3A556C78769E707467016, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("RevealedEntrances", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral45CD3F4B9F0FA9909B48F178CC980A73FB78F817, 1, /*hidden argument*/NULL);
	}

IL_0055:
	{
		// if (collision.CompareTag("Fire") && state == 2)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5 = ___collision0;
		bool L_6;
		L_6 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_5, _stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_7 = __this->get_state_6();
		G_B8_0 = ((((int32_t)L_7) == ((int32_t)2))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B8_0 = 0;
	}

IL_006e:
	{
		V_1 = (bool)G_B8_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_00a9;
		}
	}
	{
		// Invoke("Open", 1.5f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B, (1.5f), /*hidden argument*/NULL);
		// state = 1;
		__this->set_state_6(1);
		// anim.Play("EntranceReveal");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = __this->get_anim_4();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_9, _stringLiteral1FB0F0033F6DE2A077C3A556C78769E707467016, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("RevealedEntrances", 2);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral45CD3F4B9F0FA9909B48F178CC980A73FB78F817, 2, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void EntranceScript::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntranceScript_Open_m8FA549E3017970F98F7248F46A4CBD4820F9AB4A (EntranceScript_t1E4E3E05AA4766163191063CDDEDD13AF3F2861F * __this, const RuntimeMethod* method)
{
	{
		// coll.size =  new Vector2(coll.size.x, coll.size.y / 4);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_0 = __this->get_coll_5();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_1 = __this->get_coll_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = BoxCollider2D_get_size_m011E7AA7861BF58898A64D986A4235C1E2061BF9(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_0();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_4 = __this->get_coll_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = BoxCollider2D_get_size_m011E7AA7861BF58898A64D986A4235C1E2061BF9(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), L_3, ((float)((float)L_6/(float)(4.0f))), /*hidden argument*/NULL);
		BoxCollider2D_set_size_m8460A38ADDD4BE82BE1F416DE3D7AFB87EBA6760(L_0, L_7, /*hidden argument*/NULL);
		// coll.isTrigger = true;
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_8 = __this->get_coll_5();
		Collider2D_set_isTrigger_m129C3059CC21789EFA198E153A3C82662E3BFF52(L_8, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EntranceScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntranceScript__ctor_m87DA72E3EC2EBAC531CC8703D0D5A4175AA60A63 (EntranceScript_t1E4E3E05AA4766163191063CDDEDD13AF3F2861F * __this, const RuntimeMethod* method)
{
	{
		// public int state = 0;
		__this->set_state_6(0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ExampleScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleScript_Awake_m72E4F6CAEB6389B6EF072A8E8EAF3EE525B65109 (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_mCBE129B396568B632923B0B88AF7ADDD9E69A69D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13DEE4414E15D2C41754D46AE7D727F207F80D81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral345A3EE965F1F41012B7EFD0F1B00FBE6C37644C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral356C1E5C4967B2437C5EA54105DC608936B0ED2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B8C05805B75DCD913796375CFCD3FEF1E16A147);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970CC57CB5C903AF48E2BA90910F0E408DAC9211);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B0F572DACA2403E3CDFAC64092366829997C551);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFED36ACC0553B4C248473FE0F0D2CB5C55B1242);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B27_0 = 0;
	{
		// if (!PlayerPrefs.HasKey("Hearts") || PlayerPrefs.GetInt("Hearts") < 0) PlayerPrefs.SetInt("Hearts", maxHp);
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteralAFED36ACC0553B4C248473FE0F0D2CB5C55B1242, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralAFED36ACC0553B4C248473FE0F0D2CB5C55B1242, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if (!PlayerPrefs.HasKey("Hearts") || PlayerPrefs.GetInt("Hearts") < 0) PlayerPrefs.SetInt("Hearts", maxHp);
		int32_t L_3 = __this->get_maxHp_20();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralAFED36ACC0553B4C248473FE0F0D2CB5C55B1242, L_3, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// if (!PlayerPrefs.HasKey("Gems")) PlayerPrefs.SetInt("Gems", 0);
		bool L_4;
		L_4 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral345A3EE965F1F41012B7EFD0F1B00FBE6C37644C, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// if (!PlayerPrefs.HasKey("Gems")) PlayerPrefs.SetInt("Gems", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral345A3EE965F1F41012B7EFD0F1B00FBE6C37644C, 0, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// if (!PlayerPrefs.HasKey("Powers")) PlayerPrefs.SetInt("Powers", 0);
		bool L_6;
		L_6 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral356C1E5C4967B2437C5EA54105DC608936B0ED2C, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_006c;
		}
	}
	{
		// if (!PlayerPrefs.HasKey("Powers")) PlayerPrefs.SetInt("Powers", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral356C1E5C4967B2437C5EA54105DC608936B0ED2C, 0, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// if (!PlayerPrefs.HasKey("WarpSpot")) PlayerPrefs.SetInt("WarpSpot", 0);
		bool L_8;
		L_8 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral9B0F572DACA2403E3CDFAC64092366829997C551, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0089;
		}
	}
	{
		// if (!PlayerPrefs.HasKey("WarpSpot")) PlayerPrefs.SetInt("WarpSpot", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9B0F572DACA2403E3CDFAC64092366829997C551, 0, /*hidden argument*/NULL);
	}

IL_0089:
	{
		// cont = FindObjectOfType<GameController>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_10;
		L_10 = Object_FindObjectOfType_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_mCBE129B396568B632923B0B88AF7ADDD9E69A69D(/*hidden argument*/Object_FindObjectOfType_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_mCBE129B396568B632923B0B88AF7ADDD9E69A69D_RuntimeMethod_var);
		__this->set_cont_10(L_10);
		// bod = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_11;
		L_11 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_bod_5(L_11);
		// hp = PlayerPrefs.GetInt("Hearts");
		int32_t L_12;
		L_12 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralAFED36ACC0553B4C248473FE0F0D2CB5C55B1242, /*hidden argument*/NULL);
		__this->set_hp_19(L_12);
		// gems = PlayerPrefs.GetInt("Gems");
		int32_t L_13;
		L_13 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral345A3EE965F1F41012B7EFD0F1B00FBE6C37644C, /*hidden argument*/NULL);
		__this->set_gems_9(L_13);
		// if (PlayerPrefs.GetInt("Powers") > 0)
		int32_t L_14;
		L_14 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral356C1E5C4967B2437C5EA54105DC608936B0ED2C, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_14) > ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00e9;
		}
	}
	{
		// hasFire = true;
		__this->set_hasFire_32((bool)1);
		// altAttackIcon.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_altAttackIcon_14();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)1, /*hidden argument*/NULL);
	}

IL_00e9:
	{
		// if (PlayerPrefs.GetInt("Powers") > 1)
		int32_t L_17;
		L_17 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral356C1E5C4967B2437C5EA54105DC608936B0ED2C, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_17) > ((int32_t)1))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0112;
		}
	}
	{
		// hasLightning = true;
		__this->set_hasLightning_33((bool)1);
		// clickAttackIcon.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_clickAttackIcon_15();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_19, (bool)1, /*hidden argument*/NULL);
	}

IL_0112:
	{
		// gameObject.GetComponent<Transform>().position = warpSpots[PlayerPrefs.GetInt("WarpSpot")];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_20, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_22 = __this->get_warpSpots_35();
		int32_t L_23;
		L_23 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9B0F572DACA2403E3CDFAC64092366829997C551, /*hidden argument*/NULL);
		int32_t L_24 = L_23;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_25, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_21, L_26, /*hidden argument*/NULL);
		// if (SceneManager.GetActiveScene().name == "Shop" && PlayerPrefs.GetInt("WarpSpot") == 2)
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_27;
		L_27 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_7 = L_27;
		String_t* L_28;
		L_28 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_7), /*hidden argument*/NULL);
		bool L_29;
		L_29 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_28, _stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0166;
		}
	}
	{
		int32_t L_30;
		L_30 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9B0F572DACA2403E3CDFAC64092366829997C551, /*hidden argument*/NULL);
		G_B18_0 = ((((int32_t)L_30) == ((int32_t)2))? 1 : 0);
		goto IL_0167;
	}

IL_0166:
	{
		G_B18_0 = 0;
	}

IL_0167:
	{
		V_6 = (bool)G_B18_0;
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_01ad;
		}
	}
	{
		// if (hasLightning)
		bool L_32 = __this->get_hasLightning_33();
		V_8 = L_32;
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_019b;
		}
	}
	{
		// displayText.text = "THERE IS NOTHING LEFT FOR YOU HERE.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_34 = __this->get_displayText_34();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_34, _stringLiteral13DEE4414E15D2C41754D46AE7D727F207F80D81);
		// Destroy(shopLightning);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_shopLightning_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_35, /*hidden argument*/NULL);
		goto IL_01ac;
	}

IL_019b:
	{
		// displayText.text = "SHH. IT'S A SECRET TO EVERYONE.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_36 = __this->get_displayText_34();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, _stringLiteral3B8C05805B75DCD913796375CFCD3FEF1E16A147);
	}

IL_01ac:
	{
	}

IL_01ad:
	{
		// if (SceneManager.GetActiveScene().name == "Shop" && PlayerPrefs.GetInt("WarpSpot") == 1 && hasFire)
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_37;
		L_37 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_7 = L_37;
		String_t* L_38;
		L_38 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_7), /*hidden argument*/NULL);
		bool L_39;
		L_39 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_38, _stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_01dc;
		}
	}
	{
		int32_t L_40;
		L_40 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9B0F572DACA2403E3CDFAC64092366829997C551, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_40) == ((uint32_t)1))))
		{
			goto IL_01dc;
		}
	}
	{
		bool L_41 = __this->get_hasFire_32();
		G_B27_0 = ((int32_t)(L_41));
		goto IL_01dd;
	}

IL_01dc:
	{
		G_B27_0 = 0;
	}

IL_01dd:
	{
		V_9 = (bool)G_B27_0;
		bool L_42 = V_9;
		if (!L_42)
		{
			goto IL_020d;
		}
	}
	{
		// shopFire.tag = "Potion";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = __this->get_shopFire_16();
		GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(L_43, _stringLiteral970CC57CB5C903AF48E2BA90910F0E408DAC9211, /*hidden argument*/NULL);
		// shopFire.GetComponent<SpriteRenderer>().sprite = potionSprite;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = __this->get_shopFire_16();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_45;
		L_45 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_44, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_46 = __this->get_potionSprite_18();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_45, L_46, /*hidden argument*/NULL);
	}

IL_020d:
	{
		// anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_47;
		L_47 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim_23(L_47);
		// for (int i = 0; i < hp; i++)
		V_10 = 0;
		goto IL_022d;
	}

IL_021e:
	{
		// AddHeart();
		ExampleScript_AddHeart_m644DB68AEA3C195EBCA916F1E8B3B540BC3D4887(__this, /*hidden argument*/NULL);
		// for (int i = 0; i < hp; i++)
		int32_t L_48 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_022d:
	{
		// for (int i = 0; i < hp; i++)
		int32_t L_49 = V_10;
		int32_t L_50 = __this->get_hp_19();
		V_11 = (bool)((((int32_t)L_49) < ((int32_t)L_50))? 1 : 0);
		bool L_51 = V_11;
		if (L_51)
		{
			goto IL_021e;
		}
	}
	{
		// gemsText.text = "x" + gems.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_52 = __this->get_gemsText_8();
		int32_t* L_53 = __this->get_address_of_gems_9();
		String_t* L_54;
		L_54 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_53, /*hidden argument*/NULL);
		String_t* L_55;
		L_55 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_54, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_52, L_55);
		// }
		return;
	}
}
// System.Void ExampleScript::AddHeart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleScript_AddHeart_m644DB68AEA3C195EBCA916F1E8B3B540BC3D4887 (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// GameObject h = Instantiate(hpImage);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_hpImage_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_0, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_0 = L_1;
		// h.transform.SetParent(heartParent.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_heartParent_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ExampleScript::RemoveHeart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleScript_RemoveHeart_mC69AE8FBAC10A582EEEBEF9CEC68D663927BE3E4 (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(heartParent.transform.GetChild(0).gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_heartParent_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_1, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ExampleScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleScript_Update_m9FD57A20D589883ED85A5DC111EEB652ACA4A6A8 (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C51ED42322191B3CF160E489175D86BEAFEDB03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4415B736430B4ED98D4092B23AF644AD4E09860E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B087B752EF0D0EF98DFB9C658CF4BD3323CDAEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97875C402B1B0A7635CF5733C9331B6118210275);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B28_0 = 0;
	{
		// input = new Vector2(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"));
		float L_0;
		L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		float L_1;
		L_1 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		__this->set_input_6(L_2);
		// if (input.x != 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = __this->get_address_of_input_6();
		float L_4 = L_3->get_x_0();
		V_0 = (bool)((((int32_t)((((float)L_4) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_009c;
		}
	}
	{
		// bod.AddForce(Vector2.right * spd * input.x * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_6 = __this->get_bod_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		float L_8 = __this->get_spd_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_7, L_8, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_10 = __this->get_address_of_input_6();
		float L_11 = L_10->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_9, L_11, /*hidden argument*/NULL);
		float L_13;
		L_13 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_12, L_13, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_6, L_14, /*hidden argument*/NULL);
		// dir = Vector2.right * spd * input.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		float L_16 = __this->get_spd_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_15, L_16, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_18 = __this->get_address_of_input_6();
		float L_19 = L_18->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_17, L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_20, /*hidden argument*/NULL);
		__this->set_dir_24(L_21);
	}

IL_009c:
	{
		// if (input.y != 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_22 = __this->get_address_of_input_6();
		float L_23 = L_22->get_y_1();
		V_1 = (bool)((((int32_t)((((float)L_23) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_1;
		if (!L_24)
		{
			goto IL_0118;
		}
	}
	{
		// bod.AddForce(Vector2.up * spd * input.y * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_25 = __this->get_bod_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		L_26 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_27 = __this->get_spd_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28;
		L_28 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_26, L_27, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_29 = __this->get_address_of_input_6();
		float L_30 = L_29->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		L_31 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_28, L_30, /*hidden argument*/NULL);
		float L_32;
		L_32 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33;
		L_33 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_31, L_32, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_25, L_33, /*hidden argument*/NULL);
		// dir = Vector2.up * spd * input.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34;
		L_34 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_35 = __this->get_spd_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36;
		L_36 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_34, L_35, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_37 = __this->get_address_of_input_6();
		float L_38 = L_37->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39;
		L_39 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_36, L_38, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_39, /*hidden argument*/NULL);
		__this->set_dir_24(L_40);
	}

IL_0118:
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_41;
		L_41 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		V_2 = L_41;
		bool L_42 = V_2;
		if (!L_42)
		{
			goto IL_0182;
		}
	}
	{
		// SwordAttack();
		ExampleScript_SwordAttack_m63CDCE9C75E4394BB3376053E70460FFA6150EA4(__this, /*hidden argument*/NULL);
		// float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg - 90;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_43 = __this->get_address_of_dir_24();
		float L_44 = L_43->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_45 = __this->get_address_of_dir_24();
		float L_46 = L_45->get_x_2();
		float L_47;
		L_47 = atan2f(L_44, L_46);
		V_3 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_47, (float)(57.2957802f))), (float)(90.0f)));
		// if (hasFire) Instantiate(projectile, transform.position, Quaternion.AngleAxis(angle, Vector3.forward));
		bool L_48 = __this->get_hasFire_32();
		V_4 = L_48;
		bool L_49 = V_4;
		if (!L_49)
		{
			goto IL_0181;
		}
	}
	{
		// if (hasFire) Instantiate(projectile, transform.position, Quaternion.AngleAxis(angle, Vector3.forward));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = __this->get_projectile_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_51, /*hidden argument*/NULL);
		float L_53 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_55;
		L_55 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(L_53, L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56;
		L_56 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_50, L_52, L_55, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_0181:
	{
	}

IL_0182:
	{
		// if (Input.GetKeyDown(KeyCode.C))
		bool L_57;
		L_57 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)99), /*hidden argument*/NULL);
		V_5 = L_57;
		bool L_58 = V_5;
		if (!L_58)
		{
			goto IL_0198;
		}
	}
	{
		// SwordAttack();
		ExampleScript_SwordAttack_m63CDCE9C75E4394BB3376053E70460FFA6150EA4(__this, /*hidden argument*/NULL);
	}

IL_0198:
	{
		// if (Input.GetKeyDown(KeyCode.D) || Input.GetKeyDown(KeyCode.RightArrow))
		bool L_59;
		L_59 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)100), /*hidden argument*/NULL);
		if (L_59)
		{
			goto IL_01ad;
		}
	}
	{
		bool L_60;
		L_60 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)275), /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_60));
		goto IL_01ae;
	}

IL_01ad:
	{
		G_B13_0 = 1;
	}

IL_01ae:
	{
		V_6 = (bool)G_B13_0;
		bool L_61 = V_6;
		if (!L_61)
		{
			goto IL_01e5;
		}
	}
	{
		// faceDir = RIGHT;
		__this->set_faceDir_29(3);
		// gameObject.transform.localScale = right;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62;
		L_62 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_62, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64 = __this->get_right_30();
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_63, L_64, /*hidden argument*/NULL);
		// anim.Play("PlayerIdleRight");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_65 = __this->get_anim_23();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_65, _stringLiteral4415B736430B4ED98D4092B23AF644AD4E09860E, /*hidden argument*/NULL);
	}

IL_01e5:
	{
		// if (Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_66;
		L_66 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)97), /*hidden argument*/NULL);
		if (L_66)
		{
			goto IL_01fa;
		}
	}
	{
		bool L_67;
		L_67 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)276), /*hidden argument*/NULL);
		G_B18_0 = ((int32_t)(L_67));
		goto IL_01fb;
	}

IL_01fa:
	{
		G_B18_0 = 1;
	}

IL_01fb:
	{
		V_7 = (bool)G_B18_0;
		bool L_68 = V_7;
		if (!L_68)
		{
			goto IL_0232;
		}
	}
	{
		// faceDir = LEFT;
		__this->set_faceDir_29(2);
		// gameObject.transform.localScale = left;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69;
		L_69 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70;
		L_70 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_69, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71 = __this->get_left_31();
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_70, L_71, /*hidden argument*/NULL);
		// anim.Play("PlayerIdleRight");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_72 = __this->get_anim_23();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_72, _stringLiteral4415B736430B4ED98D4092B23AF644AD4E09860E, /*hidden argument*/NULL);
	}

IL_0232:
	{
		// if (Input.GetKeyDown(KeyCode.S) || Input.GetKeyDown(KeyCode.DownArrow))
		bool L_73;
		L_73 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)115), /*hidden argument*/NULL);
		if (L_73)
		{
			goto IL_0247;
		}
	}
	{
		bool L_74;
		L_74 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)274), /*hidden argument*/NULL);
		G_B23_0 = ((int32_t)(L_74));
		goto IL_0248;
	}

IL_0247:
	{
		G_B23_0 = 1;
	}

IL_0248:
	{
		V_8 = (bool)G_B23_0;
		bool L_75 = V_8;
		if (!L_75)
		{
			goto IL_027f;
		}
	}
	{
		// faceDir = DOWN;
		__this->set_faceDir_29(1);
		// gameObject.transform.localScale = right;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76;
		L_76 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77;
		L_77 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_76, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78 = __this->get_right_30();
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_77, L_78, /*hidden argument*/NULL);
		// anim.Play("PlayerIdleDown");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_79 = __this->get_anim_23();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_79, _stringLiteral2C51ED42322191B3CF160E489175D86BEAFEDB03, /*hidden argument*/NULL);
	}

IL_027f:
	{
		// if (Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.UpArrow))
		bool L_80;
		L_80 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)119), /*hidden argument*/NULL);
		if (L_80)
		{
			goto IL_0294;
		}
	}
	{
		bool L_81;
		L_81 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)273), /*hidden argument*/NULL);
		G_B28_0 = ((int32_t)(L_81));
		goto IL_0295;
	}

IL_0294:
	{
		G_B28_0 = 1;
	}

IL_0295:
	{
		V_9 = (bool)G_B28_0;
		bool L_82 = V_9;
		if (!L_82)
		{
			goto IL_02b5;
		}
	}
	{
		// faceDir = UP;
		__this->set_faceDir_29(0);
		// anim.Play("PlayerIdleUp");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_83 = __this->get_anim_23();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_83, _stringLiteral97875C402B1B0A7635CF5733C9331B6118210275, /*hidden argument*/NULL);
	}

IL_02b5:
	{
		// if (iframeVar > 0)
		float L_84 = __this->get_iframeVar_22();
		V_10 = (bool)((((float)L_84) > ((float)(0.0f)))? 1 : 0);
		bool L_85 = V_10;
		if (!L_85)
		{
			goto IL_02f3;
		}
	}
	{
		// iframeVar -= Time.deltaTime;
		float L_86 = __this->get_iframeVar_22();
		float L_87;
		L_87 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_iframeVar_22(((float)il2cpp_codegen_subtract((float)L_86, (float)L_87)));
		// anim.SetFloat("iframes", iframeVar);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_88 = __this->get_anim_23();
		float L_89 = __this->get_iframeVar_22();
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_88, _stringLiteral8B087B752EF0D0EF98DFB9C658CF4BD3323CDAEE, L_89, /*hidden argument*/NULL);
	}

IL_02f3:
	{
		// }
		return;
	}
}
// System.Void ExampleScript::SwordAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleScript_SwordAttack_m63CDCE9C75E4394BB3376053E70460FFA6150EA4 (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2189B74E163D19996E58BA92D81675466BA238A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94EABF2870777277D8BB4FB3EE4DF7EB7AE2C47E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF598A7F340CC1AA3FA230B5EF8C9669BC05887E8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// if (faceDir == DOWN)
		int32_t L_0 = __this->get_faceDir_29();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		// sword.GetComponent<Transform>().rotation = Quaternion.Euler(0, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_sword_13();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_2, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_3, L_4, /*hidden argument*/NULL);
		// anim.Play("PlayerAttackDown");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = __this->get_anim_23();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_5, _stringLiteral94EABF2870777277D8BB4FB3EE4DF7EB7AE2C47E, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// if (faceDir == RIGHT || faceDir == LEFT)
		int32_t L_6 = __this->get_faceDir_29();
		if ((((int32_t)L_6) == ((int32_t)3)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_7 = __this->get_faceDir_29();
		G_B5_0 = ((((int32_t)L_7) == ((int32_t)2))? 1 : 0);
		goto IL_005b;
	}

IL_005a:
	{
		G_B5_0 = 1;
	}

IL_005b:
	{
		V_1 = (bool)G_B5_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0097;
		}
	}
	{
		// sword.GetComponent<Transform>().rotation = Quaternion.Euler(0, 0, 90);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_sword_13();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_9, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (90.0f), /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_10, L_11, /*hidden argument*/NULL);
		// anim.Play("PlayerAttackSide");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_12 = __this->get_anim_23();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_12, _stringLiteralF598A7F340CC1AA3FA230B5EF8C9669BC05887E8, /*hidden argument*/NULL);
	}

IL_0097:
	{
		// if (faceDir == UP)
		int32_t L_13 = __this->get_faceDir_29();
		V_2 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_00dc;
		}
	}
	{
		// sword.GetComponent<Transform>().rotation = Quaternion.Euler(0, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_sword_13();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_15, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_16, L_17, /*hidden argument*/NULL);
		// anim.Play("PlayerAttackUp");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_18 = __this->get_anim_23();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_18, _stringLiteral2189B74E163D19996E58BA92D81675466BA238A6, /*hidden argument*/NULL);
	}

IL_00dc:
	{
		// }
		return;
	}
}
// System.Void ExampleScript::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleScript_TakeDamage_mB13A22F6CE0A1A9333A626D9E8B1A4FD10858CD3 (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * __this, int32_t ___dmg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59E2107B28E73F30F203DA7D3EC21F5E77423597);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B087B752EF0D0EF98DFB9C658CF4BD3323CDAEE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (iframeVar <= 0)
		float L_0 = __this->get_iframeVar_22();
		V_0 = (bool)((((int32_t)((!(((float)L_0) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_008c;
		}
	}
	{
		// anim.Play("BossHurt");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_anim_23();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_2, _stringLiteral59E2107B28E73F30F203DA7D3EC21F5E77423597, /*hidden argument*/NULL);
		// for (int i = 0; i < dmg; i++)
		V_1 = 0;
		goto IL_0060;
	}

IL_002b:
	{
		// RemoveHeart();
		ExampleScript_RemoveHeart_mC69AE8FBAC10A582EEEBEF9CEC68D663927BE3E4(__this, /*hidden argument*/NULL);
		// hp -= dmg;
		int32_t L_3 = __this->get_hp_19();
		int32_t L_4 = ___dmg0;
		__this->set_hp_19(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4)));
		// if (hp <= 0)
		int32_t L_5 = __this->get_hp_19();
		V_2 = (bool)((((int32_t)((((int32_t)L_5) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		// Die();
		ExampleScript_Die_m8C434F9124789DF451D96386D70199BB307815A4(__this, /*hidden argument*/NULL);
		// return;
		goto IL_008c;
	}

IL_005b:
	{
		// for (int i = 0; i < dmg; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0060:
	{
		// for (int i = 0; i < dmg; i++)
		int32_t L_8 = V_1;
		int32_t L_9 = ___dmg0;
		V_3 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_3;
		if (L_10)
		{
			goto IL_002b;
		}
	}
	{
		// iframeVar = iframeTime;
		float L_11 = __this->get_iframeTime_21();
		__this->set_iframeVar_22(L_11);
		// anim.SetFloat("iframes", iframeVar);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_12 = __this->get_anim_23();
		float L_13 = __this->get_iframeVar_22();
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_12, _stringLiteral8B087B752EF0D0EF98DFB9C658CF4BD3323CDAEE, L_13, /*hidden argument*/NULL);
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void ExampleScript::ChangeGems(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleScript_ChangeGems_m46525BB116961B6A850B60659071BB9A49FC508B (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * __this, int32_t ___amt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gems += amt;
		int32_t L_0 = __this->get_gems_9();
		int32_t L_1 = ___amt0;
		__this->set_gems_9(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// gemsText.text = "x" + gems.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_gemsText_8();
		int32_t* L_3 = __this->get_address_of_gems_9();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// }
		return;
	}
}
// System.Void ExampleScript::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleScript_Die_m8C434F9124789DF451D96386D70199BB307815A4 (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19E30120BF148B4BD74A0C6CE7F85A461E68A628);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<SpriteRenderer>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_0, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_1, (bool)0, /*hidden argument*/NULL);
		// cont.pauseUI.GetComponentInChildren<Text>().text = "GAME OVER";
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_2 = __this->get_cont_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2->get_pauseUI_12();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4;
		L_4 = GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881(L_3, /*hidden argument*/GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral19E30120BF148B4BD74A0C6CE7F85A461E68A628);
		// cont.ClearSave();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_5 = __this->get_cont_10();
		GameController_ClearSave_m3F8837084A901EA238F463B4FC2E5AA8F7DD5D3E(L_5, /*hidden argument*/NULL);
		// cont.Pause();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_6 = __this->get_cont_10();
		GameController_Pause_mF6FCFD1C244F2FD91A652F9D9A6ED07C9AD0DC2B(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ExampleScript::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleScript_OnTriggerEnter2D_m923BBF6C8B317B62501BF7E1D7AEE1C4C852DEA6 (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079B4B36234FF49EF3DCA22CE70BEA5E5278BD0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19F7B3420CC723FA250511AB020F09DA400B2238);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30BAA61492ECEDABB573C50F8450B6F6F303C981);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B35CE1AB5E2DC90AB069C4BE809941334FE0BE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral687D9BA523E32A2B8A4FEAD5E5EAE89D357E1420);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F863AB7B06A4392AD24121FA95D31609484ADCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970CC57CB5C903AF48E2BA90910F0E408DAC9211);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B0F572DACA2403E3CDFAC64092366829997C551);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADA5DB2E05775E5994F4ACE1B7005BD0F794F2AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA3D117146C77538DC633E0E90255AE8D3106242);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE83EBBE67B70DE56666499A3BDC7D09E5C4B6A5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB65518ABA070C29F7C36E2CFBF5AD5526A8C77E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t G_B16_0 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B34_0 = 0;
	{
		// if (collision.CompareTag("Item"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// ChangeGems(1);
		ExampleScript_ChangeGems_m46525BB116961B6A850B60659071BB9A49FC508B(__this, 1, /*hidden argument*/NULL);
		// cont.AddScore(10);
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_3 = __this->get_cont_10();
		GameController_AddScore_m94D19FBD9E3BCBCA1DB41320D1B9EC93ED3F40B3(L_3, ((int32_t)10), /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// if (collision.CompareTag("BigGem"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_6 = ___collision0;
		bool L_7;
		L_7 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_6, _stringLiteral19F7B3420CC723FA250511AB020F09DA400B2238, /*hidden argument*/NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0068;
		}
	}
	{
		// ChangeGems(10);
		ExampleScript_ChangeGems_m46525BB116961B6A850B60659071BB9A49FC508B(__this, ((int32_t)10), /*hidden argument*/NULL);
		// cont.AddScore(100);
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_9 = __this->get_cont_10();
		GameController_AddScore_m94D19FBD9E3BCBCA1DB41320D1B9EC93ED3F40B3(L_9, ((int32_t)100), /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_10 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_11, /*hidden argument*/NULL);
	}

IL_0068:
	{
		// if (collision.CompareTag("Heart"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_12 = ___collision0;
		bool L_13;
		L_13 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_12, _stringLiteralADA5DB2E05775E5994F4ACE1B7005BD0F794F2AD, /*hidden argument*/NULL);
		V_2 = L_13;
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_00ae;
		}
	}
	{
		// if (hp < maxHp)
		int32_t L_15 = __this->get_hp_19();
		int32_t L_16 = __this->get_maxHp_20();
		V_3 = (bool)((((int32_t)L_15) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_00a1;
		}
	}
	{
		// AddHeart();
		ExampleScript_AddHeart_m644DB68AEA3C195EBCA916F1E8B3B540BC3D4887(__this, /*hidden argument*/NULL);
		// hp++;
		int32_t L_18 = __this->get_hp_19();
		__this->set_hp_19(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
	}

IL_00a1:
	{
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_19 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_20, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		// if (collision.CompareTag("Fire Book"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_21 = ___collision0;
		bool L_22;
		L_22 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_21, _stringLiteralEB65518ABA070C29F7C36E2CFBF5AD5526A8C77E, /*hidden argument*/NULL);
		V_4 = L_22;
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_0110;
		}
	}
	{
		// if (gems >= 10)
		int32_t L_24 = __this->get_gems_9();
		V_5 = (bool)((((int32_t)((((int32_t)L_24) < ((int32_t)((int32_t)10)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_010f;
		}
	}
	{
		// ChangeGems(-10);
		ExampleScript_ChangeGems_m46525BB116961B6A850B60659071BB9A49FC508B(__this, ((int32_t)-10), /*hidden argument*/NULL);
		// hasFire = true;
		__this->set_hasFire_32((bool)1);
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_26 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_27, /*hidden argument*/NULL);
		// displayText.text = "PRESS SPACEBAR TO SHOOT FIREBALLS.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_28 = __this->get_displayText_34();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_28, _stringLiteral079B4B36234FF49EF3DCA22CE70BEA5E5278BD0A);
		// altAttackIcon.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_altAttackIcon_14();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_29, (bool)1, /*hidden argument*/NULL);
	}

IL_010f:
	{
	}

IL_0110:
	{
		// if (collision.CompareTag("Potion"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_30 = ___collision0;
		bool L_31;
		L_31 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_30, _stringLiteral970CC57CB5C903AF48E2BA90910F0E408DAC9211, /*hidden argument*/NULL);
		V_6 = L_31;
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_01a4;
		}
	}
	{
		// if (gems >= 10 && hp < maxHp)
		int32_t L_33 = __this->get_gems_9();
		if ((((int32_t)L_33) < ((int32_t)((int32_t)10))))
		{
			goto IL_013f;
		}
	}
	{
		int32_t L_34 = __this->get_hp_19();
		int32_t L_35 = __this->get_maxHp_20();
		G_B16_0 = ((((int32_t)L_34) < ((int32_t)L_35))? 1 : 0);
		goto IL_0140;
	}

IL_013f:
	{
		G_B16_0 = 0;
	}

IL_0140:
	{
		V_7 = (bool)G_B16_0;
		bool L_36 = V_7;
		if (!L_36)
		{
			goto IL_01a3;
		}
	}
	{
		// ChangeGems(-10);
		ExampleScript_ChangeGems_m46525BB116961B6A850B60659071BB9A49FC508B(__this, ((int32_t)-10), /*hidden argument*/NULL);
		// for (int i = hp; i < maxHp; i++)
		int32_t L_37 = __this->get_hp_19();
		V_8 = L_37;
		goto IL_0169;
	}

IL_015a:
	{
		// AddHeart();
		ExampleScript_AddHeart_m644DB68AEA3C195EBCA916F1E8B3B540BC3D4887(__this, /*hidden argument*/NULL);
		// for (int i = hp; i < maxHp; i++)
		int32_t L_38 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_0169:
	{
		// for (int i = hp; i < maxHp; i++)
		int32_t L_39 = V_8;
		int32_t L_40 = __this->get_maxHp_20();
		V_9 = (bool)((((int32_t)L_39) < ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_9;
		if (L_41)
		{
			goto IL_015a;
		}
	}
	{
		// hp = maxHp;
		int32_t L_42 = __this->get_maxHp_20();
		__this->set_hp_19(L_42);
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_43 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44;
		L_44 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_44, /*hidden argument*/NULL);
		// displayText.text = "YOUR HEARTS HAVE BEEN RESTORED.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_45 = __this->get_displayText_34();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_45, _stringLiteral30BAA61492ECEDABB573C50F8450B6F6F303C981);
	}

IL_01a3:
	{
	}

IL_01a4:
	{
		// if (collision.CompareTag("Lightning Book"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_46 = ___collision0;
		bool L_47;
		L_47 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_46, _stringLiteralE83EBBE67B70DE56666499A3BDC7D09E5C4B6A5F, /*hidden argument*/NULL);
		V_10 = L_47;
		bool L_48 = V_10;
		if (!L_48)
		{
			goto IL_0206;
		}
	}
	{
		// if (gems >= 50)
		int32_t L_49 = __this->get_gems_9();
		V_11 = (bool)((((int32_t)((((int32_t)L_49) < ((int32_t)((int32_t)50)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_50 = V_11;
		if (!L_50)
		{
			goto IL_0205;
		}
	}
	{
		// ChangeGems(-50);
		ExampleScript_ChangeGems_m46525BB116961B6A850B60659071BB9A49FC508B(__this, ((int32_t)-50), /*hidden argument*/NULL);
		// hasLightning = true;
		__this->set_hasLightning_33((bool)1);
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_51 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52;
		L_52 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_52, /*hidden argument*/NULL);
		// displayText.text = "CLICK TO SUMMON LIGHTNING.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_53 = __this->get_displayText_34();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_53, _stringLiteral7F863AB7B06A4392AD24121FA95D31609484ADCE);
		// clickAttackIcon.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54 = __this->get_clickAttackIcon_15();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_54, (bool)1, /*hidden argument*/NULL);
	}

IL_0205:
	{
	}

IL_0206:
	{
		// if (collision.CompareTag("Stairs") && collision.GetComponent<Collider2D>().isTrigger == true)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_55 = ___collision0;
		bool L_56;
		L_56 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_55, _stringLiteral4B35CE1AB5E2DC90AB069C4BE809941334FE0BE4, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0220;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_57 = ___collision0;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_58;
		L_58 = Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30(L_57, /*hidden argument*/Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		bool L_59;
		L_59 = Collider2D_get_isTrigger_m2D8D206E7F91ED3AF8AC552E17414CBD7279F6FF(L_58, /*hidden argument*/NULL);
		G_B29_0 = ((int32_t)(L_59));
		goto IL_0221;
	}

IL_0220:
	{
		G_B29_0 = 0;
	}

IL_0221:
	{
		V_12 = (bool)G_B29_0;
		bool L_60 = V_12;
		if (!L_60)
		{
			goto IL_0247;
		}
	}
	{
		// PlayerPrefs.SetInt("WarpSpot", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9B0F572DACA2403E3CDFAC64092366829997C551, 1, /*hidden argument*/NULL);
		// SavePrefs();
		ExampleScript_SavePrefs_m18AABC2A564596A78A9A93A86C118ECE53DF967A(__this, /*hidden argument*/NULL);
		// SceneManager.LoadScene("Shop");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223, /*hidden argument*/NULL);
	}

IL_0247:
	{
		// if (collision.CompareTag("SecretStairs") && collision.GetComponent<Collider2D>().isTrigger == true)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_61 = ___collision0;
		bool L_62;
		L_62 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_61, _stringLiteralCA3D117146C77538DC633E0E90255AE8D3106242, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_0261;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_63 = ___collision0;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_64;
		L_64 = Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30(L_63, /*hidden argument*/Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		bool L_65;
		L_65 = Collider2D_get_isTrigger_m2D8D206E7F91ED3AF8AC552E17414CBD7279F6FF(L_64, /*hidden argument*/NULL);
		G_B34_0 = ((int32_t)(L_65));
		goto IL_0262;
	}

IL_0261:
	{
		G_B34_0 = 0;
	}

IL_0262:
	{
		V_13 = (bool)G_B34_0;
		bool L_66 = V_13;
		if (!L_66)
		{
			goto IL_0288;
		}
	}
	{
		// PlayerPrefs.SetInt("WarpSpot", 2);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9B0F572DACA2403E3CDFAC64092366829997C551, 2, /*hidden argument*/NULL);
		// SavePrefs();
		ExampleScript_SavePrefs_m18AABC2A564596A78A9A93A86C118ECE53DF967A(__this, /*hidden argument*/NULL);
		// SceneManager.LoadScene("Shop");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223, /*hidden argument*/NULL);
	}

IL_0288:
	{
		// if (collision.CompareTag("Exit"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_67 = ___collision0;
		bool L_68;
		L_68 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_67, _stringLiteral687D9BA523E32A2B8A4FEAD5E5EAE89D357E1420, /*hidden argument*/NULL);
		V_14 = L_68;
		bool L_69 = V_14;
		if (!L_69)
		{
			goto IL_02ad;
		}
	}
	{
		// SavePrefs();
		ExampleScript_SavePrefs_m18AABC2A564596A78A9A93A86C118ECE53DF967A(__this, /*hidden argument*/NULL);
		// SceneManager.LoadScene("Main");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D, /*hidden argument*/NULL);
	}

IL_02ad:
	{
		// }
		return;
	}
}
// System.Void ExampleScript::SavePrefs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleScript_SavePrefs_m18AABC2A564596A78A9A93A86C118ECE53DF967A (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral345A3EE965F1F41012B7EFD0F1B00FBE6C37644C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral356C1E5C4967B2437C5EA54105DC608936B0ED2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral919069C4D27DB941C1E72D795394568665753716);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFED36ACC0553B4C248473FE0F0D2CB5C55B1242);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	int32_t G_B4_0 = 0;
	String_t* G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	String_t* G_B6_2 = NULL;
	{
		// PlayerPrefs.SetInt("Hearts", hp);
		int32_t L_0 = __this->get_hp_19();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralAFED36ACC0553B4C248473FE0F0D2CB5C55B1242, L_0, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Gems", gems);
		int32_t L_1 = __this->get_gems_9();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral345A3EE965F1F41012B7EFD0F1B00FBE6C37644C, L_1, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Powers", (hasFire ? 1 : 0) + (hasLightning ? 1 : 0));
		bool L_2 = __this->get_hasFire_32();
		G_B1_0 = _stringLiteral356C1E5C4967B2437C5EA54105DC608936B0ED2C;
		if (L_2)
		{
			G_B2_0 = _stringLiteral356C1E5C4967B2437C5EA54105DC608936B0ED2C;
			goto IL_0033;
		}
	}
	{
		G_B3_0 = 0;
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
		bool L_3 = __this->get_hasLightning_33();
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		if (L_3)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			goto IL_003f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0040;
	}

IL_003f:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0040:
	{
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(G_B6_2, ((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0)), /*hidden argument*/NULL);
		// if (SceneManager.GetActiveScene().name != "Shop")
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_4;
		L_4 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5;
		L_5 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_1), /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_5, _stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223, /*hidden argument*/NULL);
		V_0 = L_6;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0090;
		}
	}
	{
		// PlayerPrefs.SetInt("Score", cont.score);
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_8 = __this->get_cont_10();
		int32_t L_9 = L_8->get_score_10();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, L_9, /*hidden argument*/NULL);
		// PlayerPrefs.SetFloat("TimeBetweenSpawns", cont.timeBetweenSpawns);
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_10 = __this->get_cont_10();
		float L_11 = L_10->get_timeBetweenSpawns_6();
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(_stringLiteral919069C4D27DB941C1E72D795394568665753716, L_11, /*hidden argument*/NULL);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void ExampleScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleScript__ctor_m81D1725424CD8C1D7671FF1FE5736894CD7A7828 (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 * __this, const RuntimeMethod* method)
{
	{
		// public float iframeTime = 0.3f;
		__this->set_iframeTime_21((0.300000012f));
		// public int faceDir = DOWN;
		__this->set_faceDir_29(1);
		// Vector3 right = new Vector3(1.0f, 1.0f, 1.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_right_30(L_0);
		// Vector3 left = new Vector3(-1.0f, 1.0f, 1.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_left_31(L_1);
		// public bool hasFire = false;
		__this->set_hasFire_32((bool)0);
		// public bool hasLightning = false;
		__this->set_hasLightning_33((bool)0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ExplodeScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeScript_Awake_mE1FA02F3FCFBBCFC7F3795B2599F3B8B18B9D350 (ExplodeScript_tBCB568A298EC091BD1421E759EB29570F837BCB5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bod = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_bod_5(L_0);
		// }
		return;
	}
}
// System.Void ExplodeScript::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeScript_OnEnable_mEE2C522BCCA03F2F8A0D5D58DB8F6A0B338F8B3B (ExplodeScript_tBCB568A298EC091BD1421E759EB29570F837BCB5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bod.AddForce(transform.up * spd);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_bod_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_spd_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_0, L_5, /*hidden argument*/NULL);
		// Invoke("Disable", 0.5f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309, (0.5f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ExplodeScript::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeScript_Disable_mE533EB970F8C7BD378F3F4BB4291FFAE7EEB0C88 (ExplodeScript_tBCB568A298EC091BD1421E759EB29570F837BCB5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ExplodeScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeScript__ctor_mD37459112D7FEF16570C78AA96986A668D34046C (ExplodeScript_tBCB568A298EC091BD1421E759EB29570F837BCB5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Awake_mE678A4EEF012294E485A814D37D93231A90B4BEC (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral919069C4D27DB941C1E72D795394568665753716);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED35FF3F063D29A026AE09F18392D9C7537823F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6A577D434AC942DDB38F171010FC5CEBF94E542);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// if (!PlayerPrefs.HasKey("Score")) PlayerPrefs.SetInt("Score", 0);
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// if (!PlayerPrefs.HasKey("Score")) PlayerPrefs.SetInt("Score", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, 0, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// if (!PlayerPrefs.HasKey("TimeBetweenSpawns")) PlayerPrefs.SetFloat("TimeBetweenSpawns", timeBetweenSpawns);
		bool L_2;
		L_2 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral919069C4D27DB941C1E72D795394568665753716, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		// if (!PlayerPrefs.HasKey("TimeBetweenSpawns")) PlayerPrefs.SetFloat("TimeBetweenSpawns", timeBetweenSpawns);
		float L_4 = __this->get_timeBetweenSpawns_6();
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(_stringLiteral919069C4D27DB941C1E72D795394568665753716, L_4, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// score = PlayerPrefs.GetInt("Score");
		int32_t L_5;
		L_5 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, /*hidden argument*/NULL);
		__this->set_score_10(L_5);
		// timeBetweenSpawns = PlayerPrefs.GetFloat("TimeBetweenSpawns");
		float L_6;
		L_6 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(_stringLiteral919069C4D27DB941C1E72D795394568665753716, /*hidden argument*/NULL);
		__this->set_timeBetweenSpawns_6(L_6);
		// scoreText.text = "SCORE: " + Mathf.Clamp(score, 0, 9999999).ToString("0000000");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_scoreText_15();
		int32_t L_8 = __this->get_score_10();
		int32_t L_9;
		L_9 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_8, 0, ((int32_t)9999999), /*hidden argument*/NULL);
		V_2 = L_9;
		String_t* L_10;
		L_10 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(&V_2), _stringLiteralF6A577D434AC942DDB38F171010FC5CEBF94E542, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralED35FF3F063D29A026AE09F18392D9C7537823F2, L_10, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_11);
		// }
		return;
	}
}
// System.Void GameController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Update_mA76A2CE1F2AC1AACCDBF913CA6E1EA73DC621CD0 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// seconds += Time.deltaTime;
		float L_0 = __this->get_seconds_16();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_seconds_16(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (seconds >= 60)
		float L_2 = __this->get_seconds_16();
		V_0 = (bool)((((int32_t)((!(((float)L_2) >= ((float)(60.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0067;
		}
	}
	{
		// seconds -= 60;
		float L_4 = __this->get_seconds_16();
		__this->set_seconds_16(((float)il2cpp_codegen_subtract((float)L_4, (float)(60.0f))));
		// if (timeBetweenSpawns >= 1.8) timeBetweenSpawns *= timeReduceFactor;
		float L_5 = __this->get_timeBetweenSpawns_6();
		V_1 = (bool)((((int32_t)((!(((double)((double)((double)L_5))) >= ((double)(1.8))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0066;
		}
	}
	{
		// if (timeBetweenSpawns >= 1.8) timeBetweenSpawns *= timeReduceFactor;
		float L_7 = __this->get_timeBetweenSpawns_6();
		float L_8 = __this->get_timeReduceFactor_7();
		__this->set_timeBetweenSpawns_6(((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)));
	}

IL_0066:
	{
	}

IL_0067:
	{
		// if (spawnCools > 0) spawnCools -= Time.deltaTime;
		float L_9 = __this->get_spawnCools_8();
		V_2 = (bool)((((float)L_9) > ((float)(0.0f)))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_008a;
		}
	}
	{
		// if (spawnCools > 0) spawnCools -= Time.deltaTime;
		float L_11 = __this->get_spawnCools_8();
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_spawnCools_8(((float)il2cpp_codegen_subtract((float)L_11, (float)L_12)));
	}

IL_008a:
	{
		// if (spawnCools <= 0)
		float L_13 = __this->get_spawnCools_8();
		V_3 = (bool)((((int32_t)((!(((float)L_13) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_00a7;
		}
	}
	{
		// SpawnEnemy();
		GameController_SpawnEnemy_mBE7985A65ECDF6BCDAB4A8E525805B0FA829B01A(__this, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_15;
		L_15 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)27), /*hidden argument*/NULL);
		V_4 = L_15;
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_00d3;
		}
	}
	{
		// if (player.GetComponent<SpriteRenderer>().enabled == true)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_player_5();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_18;
		L_18 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_17, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		bool L_19;
		L_19 = Renderer_get_enabled_mEFB6D3FD1D9D251EBB6E6286491592C4A6ABD6DE(L_18, /*hidden argument*/NULL);
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_00d2;
		}
	}
	{
		// Pause();
		GameController_Pause_mF6FCFD1C244F2FD91A652F9D9A6ED07C9AD0DC2B(__this, /*hidden argument*/NULL);
	}

IL_00d2:
	{
	}

IL_00d3:
	{
		// }
		return;
	}
}
// System.Void GameController::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Pause_mF6FCFD1C244F2FD91A652F9D9A6ED07C9AD0DC2B (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m01C51735078110D354DFDA5EB9685D44E6659287_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73124E9790094D4B33B67A45B9974829E69AE9AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6A577D434AC942DDB38F171010FC5CEBF94E542);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// if (paused)
		bool L_0 = __this->get_paused_11();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_006b;
		}
	}
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// paused = false;
		__this->set_paused_11((bool)0);
		// restartButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_restartButton_14();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// pauseUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_pauseUI_12();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// if (player.GetComponent<SpriteRenderer>().enabled == false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_player_5();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_5;
		L_5 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_4, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		bool L_6;
		L_6 = Renderer_get_enabled_mEFB6D3FD1D9D251EBB6E6286491592C4A6ABD6DE(L_5, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0065;
		}
	}
	{
		// pauseButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_pauseButton_13();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
	}

IL_0065:
	{
		goto IL_0137;
	}

IL_006b:
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// paused = true;
		__this->set_paused_11((bool)1);
		// pauseUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_pauseUI_12();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// restartButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_restartButton_14();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// if (player.GetComponent<SpriteRenderer>().enabled == false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_player_5();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_12;
		L_12 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_11, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		bool L_13;
		L_13 = Renderer_get_enabled_mEFB6D3FD1D9D251EBB6E6286491592C4A6ABD6DE(L_12, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0136;
		}
	}
	{
		// pauseUI.GetComponent<Image>().color = new Color(1.0f, 0, 0, pauseUI.GetComponent<Image>().color.a);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_pauseUI_12();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_16;
		L_16 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_15, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_pauseUI_12();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_18;
		L_18 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_17, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19;
		L_19 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_18);
		float L_20 = L_19.get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_21), (1.0f), (0.0f), (0.0f), L_20, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_21);
		// pauseUI.GetComponentsInChildren<Text>()[1].text = "Final Score: " + Mathf.Clamp(score, 0, 9999999).ToString("0000000");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_pauseUI_12();
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_23;
		L_23 = GameObject_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m01C51735078110D354DFDA5EB9685D44E6659287(L_22, /*hidden argument*/GameObject_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m01C51735078110D354DFDA5EB9685D44E6659287_RuntimeMethod_var);
		int32_t L_24 = 1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_25 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = __this->get_score_10();
		int32_t L_27;
		L_27 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_26, 0, ((int32_t)9999999), /*hidden argument*/NULL);
		V_3 = L_27;
		String_t* L_28;
		L_28 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(&V_3), _stringLiteralF6A577D434AC942DDB38F171010FC5CEBF94E542, /*hidden argument*/NULL);
		String_t* L_29;
		L_29 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral73124E9790094D4B33B67A45B9974829E69AE9AB, L_28, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_29);
		// pauseButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_pauseButton_13();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_30, (bool)0, /*hidden argument*/NULL);
	}

IL_0136:
	{
	}

IL_0137:
	{
		// }
		return;
	}
}
// System.Void GameController::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SpawnEnemy_mBE7985A65ECDF6BCDAB4A8E525805B0FA829B01A (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(enemyArray[Random.Range(0, enemyArray.Length)], spawnPoint[Random.Range(0,spawnPoint.Length)], Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_enemyArray_4();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_enemyArray_4();
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_5 = __this->get_spawnPoint_9();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_6 = __this->get_spawnPoint_9();
		int32_t L_7;
		L_7 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_4, L_9, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// spawnCools = timeBetweenSpawns;
		float L_12 = __this->get_timeBetweenSpawns_6();
		__this->set_spawnCools_8(L_12);
		// }
		return;
	}
}
// System.Void GameController::ClearSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_ClearSave_m3F8837084A901EA238F463B4FC2E5AA8F7DD5D3E (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	{
		// PlayerPrefs.DeleteAll();
		PlayerPrefs_DeleteAll_mAE4594C2D974BE67EC390E0FDECEDC59F17A12E0(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::AddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_AddScore_m94D19FBD9E3BCBCA1DB41320D1B9EC93ED3F40B3 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, int32_t ___pts0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED35FF3F063D29A026AE09F18392D9C7537823F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6A577D434AC942DDB38F171010FC5CEBF94E542);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// score += pts;
		int32_t L_0 = __this->get_score_10();
		int32_t L_1 = ___pts0;
		__this->set_score_10(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// scoreText.text = "SCORE: " + Mathf.Clamp(score,0,9999999).ToString("0000000");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_scoreText_15();
		int32_t L_3 = __this->get_score_10();
		int32_t L_4;
		L_4 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_3, 0, ((int32_t)9999999), /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(&V_0), _stringLiteralF6A577D434AC942DDB38F171010FC5CEBF94E542, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralED35FF3F063D29A026AE09F18392D9C7537823F2, L_5, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_6);
		// }
		return;
	}
}
// System.Void GameController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController__ctor_m9D952052C0A7234373FA5531292FCA8855BE2643 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	{
		// public float timeReduceFactor = 0.8f;
		__this->set_timeReduceFactor_7((0.800000012f));
		// public bool paused = false;
		__this->set_paused_11((bool)0);
		// public float seconds = 0f;
		__this->set_seconds_16((0.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LightningScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningScript_Awake_m20F2A0909EFA74F5C7D35A2C4A1CAFD67155F00B (LightningScript_t217C2D931541CC32964FD206DA0AB697A6404F20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m4976A41443E954425C930DED33593E7870CDE3B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD66E3F63E9D51C60F235E94728E480D80C3A0613);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rend = gameObject.GetComponent<SpriteRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_0, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		__this->set_rend_4(L_1);
		// childRends = gameObject.GetComponentsInChildren<SpriteRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* L_3;
		L_3 = GameObject_GetComponentsInChildren_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m4976A41443E954425C930DED33593E7870CDE3B9(L_2, /*hidden argument*/GameObject_GetComponentsInChildren_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m4976A41443E954425C930DED33593E7870CDE3B9_RuntimeMethod_var);
		__this->set_childRends_5(L_3);
		// Invoke("KillLightning", 2.5f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralD66E3F63E9D51C60F235E94728E480D80C3A0613, (2.5f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LightningScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningScript_Update_m416185A07C7A6F6D5F56B7E20F46EA36BF88DEC5 (LightningScript_t217C2D931541CC32964FD206DA0AB697A6404F20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m4976A41443E954425C930DED33593E7870CDE3B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* V_1 = NULL;
	int32_t V_2 = 0;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * V_3 = NULL;
	{
		// rend = gameObject.GetComponent<SpriteRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_0, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		__this->set_rend_4(L_1);
		// childRends = gameObject.GetComponentsInChildren<SpriteRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* L_3;
		L_3 = GameObject_GetComponentsInChildren_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m4976A41443E954425C930DED33593E7870CDE3B9(L_2, /*hidden argument*/GameObject_GetComponentsInChildren_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m4976A41443E954425C930DED33593E7870CDE3B9_RuntimeMethod_var);
		__this->set_childRends_5(L_3);
		// var fadeColor = rend.color;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4 = __this->get_rend_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// rend.color = new Color(fadeColor.r, fadeColor.g, fadeColor.b, fadeColor.a - (fadePerSecond * Time.deltaTime));
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_6 = __this->get_rend_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = V_0;
		float L_8 = L_7.get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = V_0;
		float L_10 = L_9.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11 = V_0;
		float L_12 = L_11.get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13 = V_0;
		float L_14 = L_13.get_a_3();
		float L_15 = __this->get_fadePerSecond_6();
		float L_16;
		L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_17), L_8, L_10, L_12, ((float)il2cpp_codegen_subtract((float)L_14, (float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)))), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_6, L_17, /*hidden argument*/NULL);
		// foreach (SpriteRenderer childRend in childRends)
		SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* L_18 = __this->get_childRends_5();
		V_1 = L_18;
		V_2 = 0;
		goto IL_00aa;
	}

IL_0071:
	{
		// foreach (SpriteRenderer childRend in childRends)
		SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* L_19 = V_1;
		int32_t L_20 = V_2;
		int32_t L_21 = L_20;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_3 = L_22;
		// childRend.color = new Color(fadeColor.r, fadeColor.g, fadeColor.b, fadeColor.a - (fadePerSecond * Time.deltaTime));
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_23 = V_3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24 = V_0;
		float L_25 = L_24.get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26 = V_0;
		float L_27 = L_26.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28 = V_0;
		float L_29 = L_28.get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30 = V_0;
		float L_31 = L_30.get_a_3();
		float L_32 = __this->get_fadePerSecond_6();
		float L_33;
		L_33 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_34), L_25, L_27, L_29, ((float)il2cpp_codegen_subtract((float)L_31, (float)((float)il2cpp_codegen_multiply((float)L_32, (float)L_33)))), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_23, L_34, /*hidden argument*/NULL);
		int32_t L_35 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00aa:
	{
		// foreach (SpriteRenderer childRend in childRends)
		int32_t L_36 = V_2;
		SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* L_37 = V_1;
		if ((((int32_t)L_36) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))))))
		{
			goto IL_0071;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LightningScript::KillLightning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningScript_KillLightning_m46C0A68D8B645F422B6C55D3F95EAD918AC3309E (LightningScript_t217C2D931541CC32964FD206DA0AB697A6404F20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LightningScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningScript__ctor_mCBF793F81984D3B67E728B6522226A123CDFD6AE (LightningScript_t217C2D931541CC32964FD206DA0AB697A6404F20 * __this, const RuntimeMethod* method)
{
	{
		// public float fadePerSecond = 2.5f;
		__this->set_fadePerSecond_6((2.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MenuController::LoadFirstLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_LoadFirstLevel_mE2507D85D094DACC8265CC1470B1B2101E325775 (MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuController::LoadLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_LoadLevel_m62F27FFE9642C63199ECA9A132CADD9BBE7002C1 (MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * __this, int32_t ___ind0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(ind);
		int32_t L_0 = ___ind0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuController::LoadLevel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_LoadLevel_m8530E46B78AECAE95D26DEFCA136126BF14DFB93 (MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(s);
		String_t* L_0 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuController::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_Quit_mAA57BD6D0000980B89F6AEE06C039954A2CADDA1 (MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuController::LoadCurrentLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_LoadCurrentLevel_m1A8ABFE5736CD44D79BA386D12E1BF7EAD2DA8A9 (MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController__ctor_m59357650A99D124D2EB1B4AD34FD6EB2B5F6E182 (MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerProjectile::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProjectile_Awake_m68DB4FD8184644BA21737A7F5AAA87BB47625AF2 (PlayerProjectile_tA265B9898046575C87E4C08C779AC0C872CAA5CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bod = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_bod_5(L_0);
		// }
		return;
	}
}
// System.Void PlayerProjectile::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProjectile_OnEnable_m6A12898BF709C7E089B89FB221B9876050EC7BDD (PlayerProjectile_tA265B9898046575C87E4C08C779AC0C872CAA5CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hasHurt = false;
		__this->set_hasHurt_7((bool)0);
		// bod.AddForce(transform.up * spd);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_bod_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_spd_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_0, L_5, /*hidden argument*/NULL);
		// Invoke("Disable", 4f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309, (4.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerProjectile::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProjectile_Disable_mD0C4451B461F8D882A77610EA64EC7BE16294702 (PlayerProjectile_tA265B9898046575C87E4C08C779AC0C872CAA5CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerProjectile::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProjectile_OnTriggerEnter2D_m4DE0110632CAA5A2903187F81559CEA0DD56DE7C (PlayerProjectile_tA265B9898046575C87E4C08C779AC0C872CAA5CB * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6_m9F6547B6A7873C40D2B333829E9D0AFA4AB3710A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (collision.gameObject.CompareTag("Enemy") && !hasHurt)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		bool L_3 = __this->get_hasHurt_7();
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_004a;
		}
	}
	{
		// collision.GetComponent<EnemyScript>().TakeDamage(damage);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5 = ___collision0;
		EnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6 * L_6;
		L_6 = Component_GetComponent_TisEnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6_m9F6547B6A7873C40D2B333829E9D0AFA4AB3710A(L_5, /*hidden argument*/Component_GetComponent_TisEnemyScript_t91932319EAA0E1E0C2EBCD3F71D503BBA7C60BD6_m9F6547B6A7873C40D2B333829E9D0AFA4AB3710A_RuntimeMethod_var);
		int32_t L_7 = __this->get_damage_6();
		EnemyScript_TakeDamage_mB5512871DC9E432EF8F95A82E2686F477824FE36(L_6, L_7, /*hidden argument*/NULL);
		// hasHurt = true;
		__this->set_hasHurt_7((bool)1);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_8, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// if (collision.CompareTag("Wall") || collision.CompareTag("Enemy"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_9 = ___collision0;
		bool L_10;
		L_10 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_9, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_11 = ___collision0;
		bool L_12;
		L_12 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_11, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_12));
		goto IL_0065;
	}

IL_0064:
	{
		G_B8_0 = 1;
	}

IL_0065:
	{
		V_1 = (bool)G_B8_0;
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ca;
		}
	}
	{
		// for (int i = 0; i < 4; i++)
		V_2 = 0;
		goto IL_00b5;
	}

IL_006e:
	{
		// Instantiate(explode, transform.position, transform.rotation * Quaternion.Euler(0, 0, -45f + (90 * i)));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_explode_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20;
		L_20 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), ((float)il2cpp_codegen_add((float)(-45.0f), (float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)90), (int32_t)L_19)))))), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21;
		L_21 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_18, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_14, L_16, L_21, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// for (int i = 0; i < 4; i++)
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_00b5:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_24 = V_2;
		V_3 = (bool)((((int32_t)L_24) < ((int32_t)4))? 1 : 0);
		bool L_25 = V_3;
		if (L_25)
		{
			goto IL_006e;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_26, /*hidden argument*/NULL);
	}

IL_00ca:
	{
		// }
		return;
	}
}
// System.Void PlayerProjectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProjectile__ctor_m39C725020080257D269E3AF3758BA73F8F89FE35 (PlayerProjectile_tA265B9898046575C87E4C08C779AC0C872CAA5CB * __this, const RuntimeMethod* method)
{
	{
		// public int damage = 1;
		__this->set_damage_6(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: EnemyScript/ObjectOddsPair
IL2CPP_EXTERN_C void ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543_marshal_pinvoke(const ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543& unmarshaled, ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543_marshaled_pinvoke& marshaled)
{
	Exception_t* ___drop_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'drop' of type 'ObjectOddsPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___drop_0Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543_marshal_pinvoke_back(const ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543_marshaled_pinvoke& marshaled, ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543& unmarshaled)
{
	Exception_t* ___drop_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'drop' of type 'ObjectOddsPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___drop_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: EnemyScript/ObjectOddsPair
IL2CPP_EXTERN_C void ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543_marshal_pinvoke_cleanup(ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: EnemyScript/ObjectOddsPair
IL2CPP_EXTERN_C void ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543_marshal_com(const ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543& unmarshaled, ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543_marshaled_com& marshaled)
{
	Exception_t* ___drop_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'drop' of type 'ObjectOddsPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___drop_0Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543_marshal_com_back(const ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543_marshaled_com& marshaled, ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543& unmarshaled)
{
	Exception_t* ___drop_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'drop' of type 'ObjectOddsPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___drop_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: EnemyScript/ObjectOddsPair
IL2CPP_EXTERN_C void ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543_marshal_com_cleanup(ObjectOddsPair_t70CA7639EA7330889BCFF144A1515E8C08AFA543_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_2, (int32_t)L_3);
		return (int32_t)L_4;
	}
}
