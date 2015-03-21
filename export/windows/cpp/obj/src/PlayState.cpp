#include <hxcpp.h>

#ifndef INCLUDED_BarClass
#include <BarClass.h>
#endif
#ifndef INCLUDED_ChickenState
#include <ChickenState.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#include <flixel/addons/display/FlxBackdrop.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",23,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(185)
	this->slideBool = false;
	HX_STACK_LINE(34)
	this->speed = (int)10;
	HX_STACK_LINE(30)
	this->maxBars = (int)5;
	HX_STACK_LINE(29)
	this->jumpDuration = 0.75;
	HX_STACK_LINE(23)
	super::__construct(MaxSize);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

bool PlayState_obj::justPressed( ){
	HX_STACK_FRAME("PlayState","justPressed",0xfbf55b45,"PlayState.justPressed","PlayState.hx",50,0xb30d7781)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(50)
	return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,justPressed,return )

bool PlayState_obj::pressed( ){
	HX_STACK_FRAME("PlayState","pressed",0x8427fc91,"PlayState.pressed","PlayState.hx",64,0xb30d7781)
	HX_STACK_THIS(this)
	HX_STACK_LINE(64)
	return (::flixel::FlxG_obj::mouse->_leftButton->current > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,pressed,return )

bool PlayState_obj::justReleased( ){
	HX_STACK_FRAME("PlayState","justReleased",0x81908eba,"PlayState.justReleased","PlayState.hx",78,0xb30d7781)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(78)
	return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,justReleased,return )

::flixel::util::FlxPoint PlayState_obj::clickCoords( ){
	HX_STACK_FRAME("PlayState","clickCoords",0x00d447f5,"PlayState.clickCoords","PlayState.hx",97,0xb30d7781)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	return ::flixel::util::FlxPoint_obj::__new(::flixel::FlxG_obj::mouse->screenX,::flixel::FlxG_obj::mouse->screenY);
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickCoords,return )

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",102,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		::flixel::ui::FlxButton btnChicken;		HX_STACK_VAR(btnChicken,"btnChicken");
		HX_STACK_LINE(105)
		::flixel::ui::FlxButton _g = ::flixel::ui::FlxButton_obj::__new((::flixel::FlxG_obj::width - (int)80),(int)0,HX_CSTRING("Level 2"),this->clickChicken_dyn());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(105)
		btnChicken = _g;
		HX_STACK_LINE(106)
		this->add(btnChicken);
		HX_STACK_LINE(109)
		::flixel::ui::FlxButton btnMenu;		HX_STACK_VAR(btnMenu,"btnMenu");
		HX_STACK_LINE(110)
		::flixel::ui::FlxButton _g1 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_CSTRING("Main Menu"),this->clickMenu_dyn());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(110)
		btnMenu = _g1;
		HX_STACK_LINE(111)
		this->add(btnMenu);
		HX_STACK_LINE(113)
		::flixel::addons::display::FlxBackdrop _g2 = ::flixel::addons::display::FlxBackdrop_obj::__new(HX_CSTRING("assets/images/bg.png"),(int)1,(int)0,true,false);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(113)
		this->bg = _g2;
		HX_STACK_LINE(114)
		this->add(this->bg);
		HX_STACK_LINE(116)
		::flixel::group::FlxTypedGroup _g3 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(116)
		this->bars = _g3;
		HX_STACK_LINE(118)
		{
			HX_STACK_LINE(119)
			::flixel::FlxSprite _g4 = ::flixel::FlxSprite_obj::__new((Float(::flixel::FlxG_obj::width) / Float((int)5)),(Float(::flixel::FlxG_obj::height) / Float((int)2)),null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(119)
			this->player = _g4;
			HX_STACK_LINE(120)
			this->player->loadGraphic(HX_CSTRING("assets/images/barwalker.png"),true,(int)64,(int)64,true,null());
			HX_STACK_LINE(121)
			this->add(this->player);
			HX_STACK_LINE(122)
			this->player->animation->add(HX_CSTRING("run"),Array_obj< int >::__new().Add((int)7).Add((int)8).Add((int)9).Add((int)10).Add((int)11).Add((int)12).Add((int)13),(int)30,true);
			HX_STACK_LINE(123)
			int _g5 = ::Math_obj::ceil((Float((int)7) / Float(this->jumpDuration)));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(123)
			this->player->animation->add(HX_CSTRING("jump"),Array_obj< int >::__new().Add((int)14).Add((int)15).Add((int)16).Add((int)17).Add((int)18).Add((int)19).Add((int)20),_g5,false);
			HX_STACK_LINE(124)
			this->player->animation->add(HX_CSTRING("slide"),Array_obj< int >::__new().Add((int)21),(int)30,false);
			HX_STACK_LINE(125)
			this->player->animation->add(HX_CSTRING("die"),Array_obj< int >::__new().Add((int)23),(int)30,false);
			HX_STACK_LINE(126)
			this->super::create();
			HX_STACK_LINE(127)
			this->run();
		}
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(131)
			::BarClass _g6 = ::BarClass_obj::__new(::flixel::FlxG_obj::width,(int)0,hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(131)
			this->bar = _g6;
			HX_STACK_LINE(132)
			this->add(this->bar);
		}
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",141,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(142)
		this->player->destroy();
		HX_STACK_LINE(143)
		this->bar->destroy();
		HX_STACK_LINE(144)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::run( ){
{
		HX_STACK_FRAME("PlayState","run",0xf8c2adba,"PlayState.run","PlayState.hx",149,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(149)
		this->player->animation->play(HX_CSTRING("run"),false,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,run,(void))

Void PlayState_obj::runTime( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("PlayState","runTime",0x247b0ae7,"PlayState.runTime","PlayState.hx",154,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(154)
		this->player->animation->play(HX_CSTRING("run"),false,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,runTime,(void))

Void PlayState_obj::runTween( ::flixel::tweens::FlxTween Tween){
{
		HX_STACK_FRAME("PlayState","runTween",0xd0696a51,"PlayState.runTween","PlayState.hx",159,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Tween,"Tween")
		HX_STACK_LINE(159)
		this->player->animation->play(HX_CSTRING("run"),false,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,runTween,(void))

Void PlayState_obj::jump( ){
{
		HX_STACK_FRAME("PlayState","jump",0xac4b9f9f,"PlayState.jump","PlayState.hx",164,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(165)
		this->player->animation->play(HX_CSTRING("jump"),false,(int)0);
		HX_STACK_LINE(166)
		Float _g = this->player->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(166)
		Float _g1 = (_g * 1.5);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(166)
		Float _g2 = ((Float(::flixel::FlxG_obj::height) / Float((int)2)) - _g1);		HX_STACK_VAR(_g2,"_g2");
		struct _Function_1_1{
			inline static Dynamic Block( Float &_g2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",166,0xb30d7781)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , (Float(::flixel::FlxG_obj::width) / Float((int)5)),false);
					__result->Add(HX_CSTRING("y") , _g2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(166)
		Dynamic _g3 = _Function_1_1::Block(_g2);		HX_STACK_VAR(_g3,"_g3");
		struct _Function_1_2{
			inline static Dynamic Block( hx::ObjectPtr< ::PlayState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",166,0xb30d7781)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("ease") , ::flixel::tweens::FlxEase_obj::quadOut_dyn(),false);
					__result->Add(HX_CSTRING("complete") , __this->fall_dyn(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(166)
		::flixel::tweens::FlxTween_obj::tween(this->player,_g3,(Float(this->jumpDuration) / Float((int)2)),_Function_1_2::Block(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,jump,(void))

Void PlayState_obj::fall( ::flixel::tweens::FlxTween Tween){
{
		HX_STACK_FRAME("PlayState","fall",0xa997972c,"PlayState.fall","PlayState.hx",171,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Tween,"Tween")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",171,0xb30d7781)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , (Float(::flixel::FlxG_obj::width) / Float((int)5)),false);
					__result->Add(HX_CSTRING("y") , (Float(::flixel::FlxG_obj::height) / Float((int)2)),false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Dynamic Block( hx::ObjectPtr< ::PlayState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",171,0xb30d7781)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("ease") , ::flixel::tweens::FlxEase_obj::quadIn_dyn(),false);
					__result->Add(HX_CSTRING("complete") , __this->runTween_dyn(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(171)
		::flixel::tweens::FlxTween_obj::tween(this->player,_Function_1_1::Block(),(Float(this->jumpDuration) / Float((int)2)),_Function_1_2::Block(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,fall,(void))

Void PlayState_obj::slide( ){
{
		HX_STACK_FRAME("PlayState","slide",0x3e854560,"PlayState.slide","PlayState.hx",175,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(176)
		this->player->animation->play(HX_CSTRING("slide"),false,(int)0);
		HX_STACK_LINE(177)
		if ((this->justReleased())){
			HX_STACK_LINE(179)
			this->slideBool = false;
			HX_STACK_LINE(180)
			this->run();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,slide,(void))

Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",191,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(192)
		this->super::update();
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			::flixel::addons::display::FlxBackdrop _g = this->bg;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(194)
			_g->set_x((_g->x - this->speed));
		}
		HX_STACK_LINE(212)
		{
			HX_STACK_LINE(213)
			if ((this->slideBool)){
				HX_STACK_LINE(215)
				this->slide();
			}
			HX_STACK_LINE(218)
			::flixel::animation::FlxAnimation _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(218)
			{
				HX_STACK_LINE(218)
				::flixel::animation::FlxAnimationController _this = this->player->animation;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(218)
				::flixel::animation::FlxAnimation anim = null();		HX_STACK_VAR(anim,"anim");
				HX_STACK_LINE(218)
				if (((bool((bool((_this->_curAnim != null())) && bool((_this->_curAnim->delay > (int)0)))) && bool(((bool(_this->_curAnim->looped) || bool(!(_this->_curAnim->finished)))))))){
					HX_STACK_LINE(218)
					anim = _this->_curAnim;
				}
				HX_STACK_LINE(218)
				_g = anim;
			}
			HX_STACK_LINE(218)
			::flixel::animation::FlxAnimation _g1 = this->player->animation->_animations->get(HX_CSTRING("run"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(218)
			if (((_g == _g1))){
				HX_STACK_LINE(220)
				if (((  ((this->justPressed())) ? bool((this->clickCoords()->y <= (Float(::flixel::FlxG_obj::height) / Float((int)2)))) : bool(false) ))){
					HX_STACK_LINE(222)
					this->jump();
				}
				HX_STACK_LINE(225)
				if (((  ((this->justPressed())) ? bool((this->clickCoords()->y > (Float(::flixel::FlxG_obj::height) / Float((int)2)))) : bool(false) ))){
					HX_STACK_LINE(227)
					this->slideBool = true;
					HX_STACK_LINE(228)
					this->slide();
				}
			}
		}
	}
return null();
}


Void PlayState_obj::clickChicken( ){
{
		HX_STACK_FRAME("PlayState","clickChicken",0x6e1ebd7e,"PlayState.clickChicken","PlayState.hx",237,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(237)
		::flixel::FlxState State = ::ChickenState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(237)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickChicken,(void))

Void PlayState_obj::clickMenu( ){
{
		HX_STACK_FRAME("PlayState","clickMenu",0x63ab75b6,"PlayState.clickMenu","PlayState.hx",242,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(242)
		::flixel::FlxState State = ::MenuState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(242)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickMenu,(void))


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(runAnim,"runAnim");
	HX_MARK_MEMBER_NAME(jumpAnim,"jumpAnim");
	HX_MARK_MEMBER_NAME(slideAnim,"slideAnim");
	HX_MARK_MEMBER_NAME(jumpDuration,"jumpDuration");
	HX_MARK_MEMBER_NAME(maxBars,"maxBars");
	HX_MARK_MEMBER_NAME(bars,"bars");
	HX_MARK_MEMBER_NAME(bar,"bar");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(slideBool,"slideBool");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(runAnim,"runAnim");
	HX_VISIT_MEMBER_NAME(jumpAnim,"jumpAnim");
	HX_VISIT_MEMBER_NAME(slideAnim,"slideAnim");
	HX_VISIT_MEMBER_NAME(jumpDuration,"jumpDuration");
	HX_VISIT_MEMBER_NAME(maxBars,"maxBars");
	HX_VISIT_MEMBER_NAME(bars,"bars");
	HX_VISIT_MEMBER_NAME(bar,"bar");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(slideBool,"slideBool");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return bg; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"bar") ) { return bar; }
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bars") ) { return bars; }
		if (HX_FIELD_EQ(inName,"jump") ) { return jump_dyn(); }
		if (HX_FIELD_EQ(inName,"fall") ) { return fall_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"slide") ) { return slide_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"runAnim") ) { return runAnim; }
		if (HX_FIELD_EQ(inName,"maxBars") ) { return maxBars; }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"runTime") ) { return runTime_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"jumpAnim") ) { return jumpAnim; }
		if (HX_FIELD_EQ(inName,"runTween") ) { return runTween_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"slideAnim") ) { return slideAnim; }
		if (HX_FIELD_EQ(inName,"slideBool") ) { return slideBool; }
		if (HX_FIELD_EQ(inName,"clickMenu") ) { return clickMenu_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"clickCoords") ) { return clickCoords_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"jumpDuration") ) { return jumpDuration; }
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"clickChicken") ) { return clickChicken_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast< ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"bar") ) { bar=inValue.Cast< ::BarClass >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bars") ) { bars=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"runAnim") ) { runAnim=inValue.Cast< ::flixel::animation::FlxAnimation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxBars") ) { maxBars=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"jumpAnim") ) { jumpAnim=inValue.Cast< ::flixel::animation::FlxAnimation >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"slideAnim") ) { slideAnim=inValue.Cast< ::flixel::animation::FlxAnimation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slideBool") ) { slideBool=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"jumpDuration") ) { jumpDuration=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("player"));
	outFields->push(HX_CSTRING("runAnim"));
	outFields->push(HX_CSTRING("jumpAnim"));
	outFields->push(HX_CSTRING("slideAnim"));
	outFields->push(HX_CSTRING("jumpDuration"));
	outFields->push(HX_CSTRING("maxBars"));
	outFields->push(HX_CSTRING("bars"));
	outFields->push(HX_CSTRING("bar"));
	outFields->push(HX_CSTRING("bg"));
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("slideBool"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,player),HX_CSTRING("player")},
	{hx::fsObject /*::flixel::animation::FlxAnimation*/ ,(int)offsetof(PlayState_obj,runAnim),HX_CSTRING("runAnim")},
	{hx::fsObject /*::flixel::animation::FlxAnimation*/ ,(int)offsetof(PlayState_obj,jumpAnim),HX_CSTRING("jumpAnim")},
	{hx::fsObject /*::flixel::animation::FlxAnimation*/ ,(int)offsetof(PlayState_obj,slideAnim),HX_CSTRING("slideAnim")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,jumpDuration),HX_CSTRING("jumpDuration")},
	{hx::fsInt,(int)offsetof(PlayState_obj,maxBars),HX_CSTRING("maxBars")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,bars),HX_CSTRING("bars")},
	{hx::fsObject /*::BarClass*/ ,(int)offsetof(PlayState_obj,bar),HX_CSTRING("bar")},
	{hx::fsObject /*::flixel::addons::display::FlxBackdrop*/ ,(int)offsetof(PlayState_obj,bg),HX_CSTRING("bg")},
	{hx::fsInt,(int)offsetof(PlayState_obj,speed),HX_CSTRING("speed")},
	{hx::fsBool,(int)offsetof(PlayState_obj,slideBool),HX_CSTRING("slideBool")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("player"),
	HX_CSTRING("runAnim"),
	HX_CSTRING("jumpAnim"),
	HX_CSTRING("slideAnim"),
	HX_CSTRING("jumpDuration"),
	HX_CSTRING("maxBars"),
	HX_CSTRING("bars"),
	HX_CSTRING("bar"),
	HX_CSTRING("bg"),
	HX_CSTRING("speed"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("pressed"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("clickCoords"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("run"),
	HX_CSTRING("runTime"),
	HX_CSTRING("runTween"),
	HX_CSTRING("jump"),
	HX_CSTRING("fall"),
	HX_CSTRING("slide"),
	HX_CSTRING("slideBool"),
	HX_CSTRING("update"),
	HX_CSTRING("clickChicken"),
	HX_CSTRING("clickMenu"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void PlayState_obj::__boot()
{
}

