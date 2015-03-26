#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_SixtyNineState
#include <SixtyNineState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
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

Void SixtyNineState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("SixtyNineState","new",0xbe660e6a,"SixtyNineState.new","SixtyNineState.hx",14,0x22252c46)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(14)
	super::__construct(MaxSize);
}
;
	return null();
}

//SixtyNineState_obj::~SixtyNineState_obj() { }

Dynamic SixtyNineState_obj::__CreateEmpty() { return  new SixtyNineState_obj; }
hx::ObjectPtr< SixtyNineState_obj > SixtyNineState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< SixtyNineState_obj > result = new SixtyNineState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic SixtyNineState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SixtyNineState_obj > result = new SixtyNineState_obj();
	result->__construct(inArgs[0]);
	return result;}

bool SixtyNineState_obj::justPressed( ){
	HX_STACK_FRAME("SixtyNineState","justPressed",0xc79565e0,"SixtyNineState.justPressed","SixtyNineState.hx",36,0x22252c46)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(36)
	return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(SixtyNineState_obj,justPressed,return )

bool SixtyNineState_obj::pressed( ){
	HX_STACK_FRAME("SixtyNineState","pressed",0x02f1ddac,"SixtyNineState.pressed","SixtyNineState.hx",50,0x22252c46)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	return (::flixel::FlxG_obj::mouse->_leftButton->current > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(SixtyNineState_obj,pressed,return )

bool SixtyNineState_obj::justReleased( ){
	HX_STACK_FRAME("SixtyNineState","justReleased",0xe1f9cbbf,"SixtyNineState.justReleased","SixtyNineState.hx",64,0x22252c46)
	HX_STACK_THIS(this)
	HX_STACK_LINE(64)
	::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(64)
	return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(SixtyNineState_obj,justReleased,return )

::flixel::util::FlxPoint SixtyNineState_obj::clickCoords( ){
	HX_STACK_FRAME("SixtyNineState","clickCoords",0xcc745290,"SixtyNineState.clickCoords","SixtyNineState.hx",83,0x22252c46)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	return ::flixel::util::FlxPoint_obj::__new(::flixel::FlxG_obj::mouse->screenX,::flixel::FlxG_obj::mouse->screenY);
}


HX_DEFINE_DYNAMIC_FUNC0(SixtyNineState_obj,clickCoords,return )

Void SixtyNineState_obj::create( ){
{
		HX_STACK_FRAME("SixtyNineState","create",0x57140b32,"SixtyNineState.create","SixtyNineState.hx",89,0x22252c46)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		this->canMove = true;
		HX_STACK_LINE(91)
		this->speedleft = (int)4;
		HX_STACK_LINE(92)
		this->speedright = (int)8;
		HX_STACK_LINE(93)
		this->speedLSD = (int)4;
		HX_STACK_LINE(96)
		::flixel::addons::display::FlxBackdrop _g = ::flixel::addons::display::FlxBackdrop_obj::__new(HX_CSTRING("assets/images/Stage4/bg.png"),(int)0,(int)0,true,false);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(96)
		this->LSD = _g;
		HX_STACK_LINE(97)
		this->add(this->LSD);
		HX_STACK_LINE(100)
		::flixel::FlxSprite _g1 = ::flixel::FlxSprite_obj::__new((Float(::flixel::FlxG_obj::width) / Float((int)3)),((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (int)192),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(100)
		this->sixnine = _g1;
		HX_STACK_LINE(101)
		this->sixnine->loadGraphic(HX_CSTRING("assets/images/Stage4/69.png"),true,(int)192,(int)192,true,null());
		HX_STACK_LINE(102)
		this->add(this->sixnine);
		HX_STACK_LINE(103)
		this->sixnine->animation->add(HX_CSTRING("six"),Array_obj< int >::__new().Add((int)0),(int)30,false);
		HX_STACK_LINE(104)
		this->sixnine->animation->add(HX_CSTRING("nine"),Array_obj< int >::__new().Add((int)1),(int)30,false);
		HX_STACK_LINE(107)
		::flixel::FlxSprite _g2 = ::flixel::FlxSprite_obj::__new((::flixel::FlxG_obj::width + (int)200),((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (int)192),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(107)
		this->sevenright = _g2;
		HX_STACK_LINE(108)
		this->sevenright->loadGraphic(HX_CSTRING("assets/images/Stage4/7left.png"),true,(int)192,(int)192,true,null());
		HX_STACK_LINE(109)
		this->sevenright->animation->add(HX_CSTRING("up"),Array_obj< int >::__new().Add((int)0),(int)30,false);
		HX_STACK_LINE(110)
		this->sevenright->animation->add(HX_CSTRING("down"),Array_obj< int >::__new().Add((int)1),(int)30,false);
		HX_STACK_LINE(111)
		Float _g3 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(111)
		bool _g4 = (_g3 < (int)50);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(111)
		if (((_g4 == true))){
			HX_STACK_LINE(113)
			this->sevenright->set_y(((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (int)192));
			HX_STACK_LINE(114)
			this->sevenright->animation->play(HX_CSTRING("up"),false,(int)0);
		}
		else{
			HX_STACK_LINE(118)
			this->sevenright->set_y((Float(::flixel::FlxG_obj::height) / Float((int)2)));
			HX_STACK_LINE(119)
			this->sevenright->animation->play(HX_CSTRING("down"),false,(int)0);
		}
		HX_STACK_LINE(121)
		this->add(this->sevenright);
		HX_STACK_LINE(123)
		::flixel::FlxSprite _g5 = ::flixel::FlxSprite_obj::__new((int)-192,(Float(::flixel::FlxG_obj::height) / Float((int)2)),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(123)
		this->sevenleft = _g5;
		HX_STACK_LINE(124)
		this->sevenleft->loadGraphic(HX_CSTRING("assets/images/Stage4/7right.png"),true,(int)192,(int)192,true,null());
		HX_STACK_LINE(125)
		this->sevenleft->animation->add(HX_CSTRING("up"),Array_obj< int >::__new().Add((int)0),(int)30,false);
		HX_STACK_LINE(126)
		this->sevenleft->animation->add(HX_CSTRING("down"),Array_obj< int >::__new().Add((int)1),(int)30,false);
		HX_STACK_LINE(127)
		Float _g6 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(127)
		if (((_g6 < (int)50))){
			HX_STACK_LINE(129)
			this->sevenleft->set_y(((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (int)192));
			HX_STACK_LINE(130)
			this->sevenleft->animation->play(HX_CSTRING("up"),false,(int)0);
		}
		else{
			HX_STACK_LINE(134)
			this->sevenleft->set_y((Float(::flixel::FlxG_obj::height) / Float((int)2)));
			HX_STACK_LINE(135)
			this->sevenleft->animation->play(HX_CSTRING("down"),false,(int)0);
		}
		HX_STACK_LINE(137)
		this->add(this->sevenleft);
	}
return null();
}


Void SixtyNineState_obj::update( ){
{
		HX_STACK_FRAME("SixtyNineState","update",0x620a2a3f,"SixtyNineState.update","SixtyNineState.hx",141,0x22252c46)
		HX_STACK_THIS(this)
		HX_STACK_LINE(142)
		this->super::update();
		HX_STACK_LINE(144)
		{
			HX_STACK_LINE(144)
			::flixel::addons::display::FlxBackdrop _g = this->LSD;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(144)
			_g->set_x((_g->x - this->speedLSD));
		}
		HX_STACK_LINE(147)
		if ((this->canMove)){
			HX_STACK_LINE(149)
			if (((  ((this->justPressed())) ? bool((this->clickCoords()->y < (Float(::flixel::FlxG_obj::height) / Float((int)2)))) : bool(false) ))){
				HX_STACK_LINE(151)
				this->sixnine->set_y(((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (int)192));
				HX_STACK_LINE(152)
				this->sixnine->animation->play(HX_CSTRING("six"),false,(int)0);
			}
			HX_STACK_LINE(154)
			if (((  ((this->justPressed())) ? bool((this->clickCoords()->y > (Float(::flixel::FlxG_obj::height) / Float((int)2)))) : bool(false) ))){
				HX_STACK_LINE(156)
				this->sixnine->set_y((Float(::flixel::FlxG_obj::height) / Float((int)2)));
				HX_STACK_LINE(157)
				this->sixnine->animation->play(HX_CSTRING("nine"),false,(int)0);
			}
		}
		HX_STACK_LINE(162)
		{
			HX_STACK_LINE(163)
			{
				HX_STACK_LINE(163)
				::flixel::FlxSprite _g = this->sevenleft;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(163)
				_g->set_x((_g->x + this->speedleft));
			}
			HX_STACK_LINE(164)
			{
				HX_STACK_LINE(164)
				::flixel::FlxSprite _g = this->sevenright;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(164)
				_g->set_x((_g->x - this->speedright));
			}
			HX_STACK_LINE(166)
			if (((this->sevenleft->x > ::flixel::FlxG_obj::width))){
				HX_STACK_LINE(168)
				this->sevenleft->set_x((int)-192);
				HX_STACK_LINE(169)
				Float _g = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(169)
				if (((_g < (int)50))){
					HX_STACK_LINE(171)
					this->sevenleft->set_y(((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (int)192));
					HX_STACK_LINE(172)
					this->sevenleft->animation->play(HX_CSTRING("up"),false,(int)0);
				}
				else{
					HX_STACK_LINE(176)
					this->sevenleft->set_y((Float(::flixel::FlxG_obj::height) / Float((int)2)));
					HX_STACK_LINE(177)
					this->sevenleft->animation->play(HX_CSTRING("down"),false,(int)0);
				}
				HX_STACK_LINE(179)
				if (((this->speedleft < (int)16))){
					HX_STACK_LINE(181)
					(this->speedleft)++;
				}
			}
			HX_STACK_LINE(185)
			if (((this->sevenright->x < (int)-192))){
				HX_STACK_LINE(187)
				this->sevenright->set_x((::flixel::FlxG_obj::width + (int)200));
				HX_STACK_LINE(188)
				Float _g1 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(188)
				if (((_g1 < (int)50))){
					HX_STACK_LINE(190)
					this->sevenright->set_y(((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (int)192));
					HX_STACK_LINE(191)
					this->sevenright->animation->play(HX_CSTRING("up"),false,(int)0);
				}
				else{
					HX_STACK_LINE(195)
					this->sevenright->set_y((Float(::flixel::FlxG_obj::height) / Float((int)2)));
					HX_STACK_LINE(196)
					this->sevenright->animation->play(HX_CSTRING("down"),false,(int)0);
				}
				HX_STACK_LINE(198)
				if (((this->speedright < (int)20))){
					HX_STACK_LINE(200)
					(this->speedright)++;
				}
			}
		}
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(206)
			if ((::flixel::FlxG_obj::overlap(this->sixnine,this->sevenleft,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::SixtyNineState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","SixtyNineState.hx",208,0x22252c46)
						{
							HX_STACK_LINE(208)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(208)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->sixnine,__this->sevenleft,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(208)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(210)
					this->hitbyseven();
				}
			}
			HX_STACK_LINE(214)
			if ((::flixel::FlxG_obj::overlap(this->sixnine,this->sevenright,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::SixtyNineState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","SixtyNineState.hx",216,0x22252c46)
						{
							HX_STACK_LINE(216)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(216)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->sixnine,__this->sevenright,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(216)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(218)
					this->hitbyseven();
				}
			}
		}
	}
return null();
}


Void SixtyNineState_obj::destroy( ){
{
		HX_STACK_FRAME("SixtyNineState","destroy",0xed913804,"SixtyNineState.destroy","SixtyNineState.hx",225,0x22252c46)
		HX_STACK_THIS(this)
		HX_STACK_LINE(226)
		this->sixnine->destroy();
		HX_STACK_LINE(227)
		this->sevenleft->destroy();
		HX_STACK_LINE(228)
		this->sevenright->destroy();
	}
return null();
}


Void SixtyNineState_obj::hitbyseven( ){
{
		HX_STACK_FRAME("SixtyNineState","hitbyseven",0xd081b519,"SixtyNineState.hitbyseven","SixtyNineState.hx",232,0x22252c46)
		HX_STACK_THIS(this)
		HX_STACK_LINE(233)
		this->canMove = false;
		HX_STACK_LINE(234)
		this->speedleft = (int)0;
		HX_STACK_LINE(235)
		this->speedright = (int)0;
		HX_STACK_LINE(236)
		this->speedLSD = (int)0;
		HX_STACK_LINE(237)
		::flixel::util::FlxTimer backtotitlescreen = ::flixel::util::FlxTimer_obj::__new(1.5,this->goback_dyn(),(int)1);		HX_STACK_VAR(backtotitlescreen,"backtotitlescreen");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SixtyNineState_obj,hitbyseven,(void))

Void SixtyNineState_obj::goback( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("SixtyNineState","goback",0x34520c85,"SixtyNineState.goback","SixtyNineState.hx",242,0x22252c46)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(242)
		::flixel::FlxState State = ::MenuState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(242)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SixtyNineState_obj,goback,(void))


SixtyNineState_obj::SixtyNineState_obj()
{
}

void SixtyNineState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SixtyNineState);
	HX_MARK_MEMBER_NAME(LSD,"LSD");
	HX_MARK_MEMBER_NAME(sixnine,"sixnine");
	HX_MARK_MEMBER_NAME(sevenright,"sevenright");
	HX_MARK_MEMBER_NAME(sevenleft,"sevenleft");
	HX_MARK_MEMBER_NAME(speedleft,"speedleft");
	HX_MARK_MEMBER_NAME(speedright,"speedright");
	HX_MARK_MEMBER_NAME(speedLSD,"speedLSD");
	HX_MARK_MEMBER_NAME(canMove,"canMove");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SixtyNineState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(LSD,"LSD");
	HX_VISIT_MEMBER_NAME(sixnine,"sixnine");
	HX_VISIT_MEMBER_NAME(sevenright,"sevenright");
	HX_VISIT_MEMBER_NAME(sevenleft,"sevenleft");
	HX_VISIT_MEMBER_NAME(speedleft,"speedleft");
	HX_VISIT_MEMBER_NAME(speedright,"speedright");
	HX_VISIT_MEMBER_NAME(speedLSD,"speedLSD");
	HX_VISIT_MEMBER_NAME(canMove,"canMove");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SixtyNineState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"LSD") ) { return LSD; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"goback") ) { return goback_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sixnine") ) { return sixnine; }
		if (HX_FIELD_EQ(inName,"canMove") ) { return canMove; }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"speedLSD") ) { return speedLSD; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sevenleft") ) { return sevenleft; }
		if (HX_FIELD_EQ(inName,"speedleft") ) { return speedleft; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sevenright") ) { return sevenright; }
		if (HX_FIELD_EQ(inName,"speedright") ) { return speedright; }
		if (HX_FIELD_EQ(inName,"hitbyseven") ) { return hitbyseven_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"clickCoords") ) { return clickCoords_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SixtyNineState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"LSD") ) { LSD=inValue.Cast< ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sixnine") ) { sixnine=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canMove") ) { canMove=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"speedLSD") ) { speedLSD=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sevenleft") ) { sevenleft=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speedleft") ) { speedleft=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sevenright") ) { sevenright=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speedright") ) { speedright=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SixtyNineState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("LSD"));
	outFields->push(HX_CSTRING("sixnine"));
	outFields->push(HX_CSTRING("sevenright"));
	outFields->push(HX_CSTRING("sevenleft"));
	outFields->push(HX_CSTRING("speedleft"));
	outFields->push(HX_CSTRING("speedright"));
	outFields->push(HX_CSTRING("speedLSD"));
	outFields->push(HX_CSTRING("canMove"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::addons::display::FlxBackdrop*/ ,(int)offsetof(SixtyNineState_obj,LSD),HX_CSTRING("LSD")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(SixtyNineState_obj,sixnine),HX_CSTRING("sixnine")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(SixtyNineState_obj,sevenright),HX_CSTRING("sevenright")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(SixtyNineState_obj,sevenleft),HX_CSTRING("sevenleft")},
	{hx::fsFloat,(int)offsetof(SixtyNineState_obj,speedleft),HX_CSTRING("speedleft")},
	{hx::fsFloat,(int)offsetof(SixtyNineState_obj,speedright),HX_CSTRING("speedright")},
	{hx::fsFloat,(int)offsetof(SixtyNineState_obj,speedLSD),HX_CSTRING("speedLSD")},
	{hx::fsBool,(int)offsetof(SixtyNineState_obj,canMove),HX_CSTRING("canMove")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("LSD"),
	HX_CSTRING("sixnine"),
	HX_CSTRING("sevenright"),
	HX_CSTRING("sevenleft"),
	HX_CSTRING("speedleft"),
	HX_CSTRING("speedright"),
	HX_CSTRING("speedLSD"),
	HX_CSTRING("canMove"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("pressed"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("clickCoords"),
	HX_CSTRING("create"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("hitbyseven"),
	HX_CSTRING("goback"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SixtyNineState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SixtyNineState_obj::__mClass,"__mClass");
};

#endif

Class SixtyNineState_obj::__mClass;

void SixtyNineState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("SixtyNineState"), hx::TCanCast< SixtyNineState_obj> ,sStaticFields,sMemberFields,
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

void SixtyNineState_obj::__boot()
{
}

