#include <hxcpp.h>

#ifndef INCLUDED_ChickenState
#include <ChickenState.h>
#endif
#ifndef INCLUDED_GhostState
#include <GhostState.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
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
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
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
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
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

Void ChickenState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("ChickenState","new",0x257adbae,"ChickenState.new","ChickenState.hx",13,0xb466b382)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(36)
	this->velocidad = (int)3;
	HX_STACK_LINE(13)
	super::__construct(MaxSize);
}
;
	return null();
}

//ChickenState_obj::~ChickenState_obj() { }

Dynamic ChickenState_obj::__CreateEmpty() { return  new ChickenState_obj; }
hx::ObjectPtr< ChickenState_obj > ChickenState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< ChickenState_obj > result = new ChickenState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic ChickenState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ChickenState_obj > result = new ChickenState_obj();
	result->__construct(inArgs[0]);
	return result;}

bool ChickenState_obj::justPressed( ){
	HX_STACK_FRAME("ChickenState","justPressed",0xbbdf1724,"ChickenState.justPressed","ChickenState.hx",42,0xb466b382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	bool returnVal = false;		HX_STACK_VAR(returnVal,"returnVal");
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(45)
		while((true)){
			HX_STACK_LINE(45)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(45)
				break;
			}
			HX_STACK_LINE(45)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(45)
			++(_g);
			HX_STACK_LINE(47)
			returnVal = (touch->_current == (int)2);
		}
	}
	HX_STACK_LINE(49)
	return returnVal;
}


HX_DEFINE_DYNAMIC_FUNC0(ChickenState_obj,justPressed,return )

bool ChickenState_obj::pressed( ){
	HX_STACK_FRAME("ChickenState","pressed",0xd0309cf0,"ChickenState.pressed","ChickenState.hx",56,0xb466b382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	bool returnVal = false;		HX_STACK_VAR(returnVal,"returnVal");
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(59)
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(59)
		while((true)){
			HX_STACK_LINE(59)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(59)
				break;
			}
			HX_STACK_LINE(59)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(59)
			++(_g);
			HX_STACK_LINE(61)
			returnVal = (touch->_current > (int)0);
		}
	}
	HX_STACK_LINE(63)
	return returnVal;
}


HX_DEFINE_DYNAMIC_FUNC0(ChickenState_obj,pressed,return )

bool ChickenState_obj::justReleased( ){
	HX_STACK_FRAME("ChickenState","justReleased",0xae2b35fb,"ChickenState.justReleased","ChickenState.hx",70,0xb466b382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	bool returnVal = false;		HX_STACK_VAR(returnVal,"returnVal");
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(73)
		while((true)){
			HX_STACK_LINE(73)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(73)
				break;
			}
			HX_STACK_LINE(73)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(73)
			++(_g);
			HX_STACK_LINE(75)
			returnVal = (touch->_current == (int)-1);
		}
	}
	HX_STACK_LINE(77)
	return returnVal;
}


HX_DEFINE_DYNAMIC_FUNC0(ChickenState_obj,justReleased,return )

::flixel::util::FlxPoint ChickenState_obj::clickCoords( ){
	HX_STACK_FRAME("ChickenState","clickCoords",0xc0be03d4,"ChickenState.clickCoords","ChickenState.hx",84,0xb466b382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	::flixel::util::FlxPoint returnVal = ::flixel::util::FlxPoint_obj::__new(null(),null());		HX_STACK_VAR(returnVal,"returnVal");
	HX_STACK_LINE(87)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(88)
	{
		HX_STACK_LINE(88)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(88)
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(88)
		while((true)){
			HX_STACK_LINE(88)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(88)
				break;
			}
			HX_STACK_LINE(88)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(88)
			++(_g);
			HX_STACK_LINE(90)
			(i)++;
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				::flixel::util::FlxPoint _g2 = returnVal;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(91)
				_g2->set_x((_g2->x + touch->screenX));
			}
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				::flixel::util::FlxPoint _g2 = returnVal;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(92)
				_g2->set_y((_g2->y + touch->screenY));
			}
		}
	}
	HX_STACK_LINE(94)
	{
		HX_STACK_LINE(94)
		::flixel::util::FlxPoint _g = returnVal;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(94)
		_g->set_x((Float(_g->x) / Float(i)));
	}
	HX_STACK_LINE(95)
	{
		HX_STACK_LINE(95)
		::flixel::util::FlxPoint _g = returnVal;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(95)
		_g->set_y((Float(_g->y) / Float(i)));
	}
	HX_STACK_LINE(96)
	return returnVal;
}


HX_DEFINE_DYNAMIC_FUNC0(ChickenState_obj,clickCoords,return )

Void ChickenState_obj::create( ){
{
		HX_STACK_FRAME("ChickenState","create",0x422fe06e,"ChickenState.create","ChickenState.hx",104,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		::flixel::addons::display::FlxBackdrop _g = ::flixel::addons::display::FlxBackdrop_obj::__new(HX_CSTRING("assets/images/Stage2/road tile.png"),(int)0,(int)0,true,false);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(106)
		this->background = _g;
		HX_STACK_LINE(107)
		this->add(this->background);
		HX_STACK_LINE(110)
		::flixel::FlxSprite _g1 = ::flixel::FlxSprite_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (int)16),(::flixel::FlxG_obj::height - (int)32),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(110)
		this->chicken = _g1;
		HX_STACK_LINE(111)
		this->chicken->loadGraphic(HX_CSTRING("assets/images/Stage2/chickensprite.png"),true,(int)32,(int)32,true,null());
		HX_STACK_LINE(112)
		this->add(this->chicken);
		HX_STACK_LINE(113)
		this->chicken->animation->add(HX_CSTRING("up"),Array_obj< int >::__new().Add((int)0),(int)30,false);
		HX_STACK_LINE(114)
		this->chicken->animation->add(HX_CSTRING("left"),Array_obj< int >::__new().Add((int)1),(int)30,false);
		HX_STACK_LINE(115)
		this->chicken->animation->add(HX_CSTRING("right"),Array_obj< int >::__new().Add((int)2),(int)30,false);
		HX_STACK_LINE(116)
		this->chicken->animation->add(HX_CSTRING("down"),Array_obj< int >::__new().Add((int)3),(int)30,false);
		HX_STACK_LINE(117)
		this->chicken->animation->add(HX_CSTRING("dead"),Array_obj< int >::__new().Add((int)4),(int)30,false);
		HX_STACK_LINE(119)
		::flixel::util::FlxTimer f = ::flixel::util::FlxTimer_obj::__new((int)1,this->startwait_dyn(),(int)1);		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(122)
		::flixel::ui::FlxButton btnMenu;		HX_STACK_VAR(btnMenu,"btnMenu");
		HX_STACK_LINE(123)
		::flixel::ui::FlxButton _g2 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_CSTRING("Main Menu"),this->clickMenu_dyn());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(123)
		btnMenu = _g2;
		HX_STACK_LINE(124)
		this->add(btnMenu);
		HX_STACK_LINE(127)
		this->firstpass = true;
		HX_STACK_LINE(128)
		this->canMove = true;
		HX_STACK_LINE(131)
		::flixel::ui::FlxButton btnSkip;		HX_STACK_VAR(btnSkip,"btnSkip");
		HX_STACK_LINE(132)
		::flixel::ui::FlxButton _g3 = ::flixel::ui::FlxButton_obj::__new((::flixel::FlxG_obj::width - (int)200),(int)0,HX_CSTRING("Next Level"),this->clickSkip_dyn());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(132)
		btnSkip = _g3;
		HX_STACK_LINE(133)
		this->add(btnSkip);
		HX_STACK_LINE(136)
		::flixel::FlxSprite _g4 = ::flixel::FlxSprite_obj::__new((int)-128,(int)32,null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(136)
		this->killcar = _g4;
		HX_STACK_LINE(137)
		this->killcar->loadGraphic(HX_CSTRING("assets/images/Stage2/car2right.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(140)
		::flixel::FlxSprite _g5 = ::flixel::FlxSprite_obj::__new(::flixel::FlxG_obj::width,(int)590,null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(140)
		this->cargoingleft1 = _g5;
		HX_STACK_LINE(141)
		this->cargoingleft1->loadGraphic(HX_CSTRING("assets/images/Stage2/car1left.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(142)
		this->add(this->cargoingleft1);
		HX_STACK_LINE(144)
		::flixel::FlxSprite _g6 = ::flixel::FlxSprite_obj::__new(((1.33 * ::flixel::FlxG_obj::width) + (int)64),(int)590,null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(144)
		this->cargoingleft1copy = _g6;
		HX_STACK_LINE(145)
		this->cargoingleft1copy->loadGraphic(HX_CSTRING("assets/images/Stage2/car1left1.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(146)
		this->add(this->cargoingleft1copy);
		HX_STACK_LINE(148)
		::flixel::FlxSprite _g7 = ::flixel::FlxSprite_obj::__new(((1.66 * ::flixel::FlxG_obj::width) + (int)128),(int)590,null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(148)
		this->cargoingleft1copy2 = _g7;
		HX_STACK_LINE(149)
		this->cargoingleft1copy2->loadGraphic(HX_CSTRING("assets/images/Stage2/car1left2.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(150)
		this->add(this->cargoingleft1copy2);
		HX_STACK_LINE(153)
		::flixel::FlxSprite _g8 = ::flixel::FlxSprite_obj::__new((int)-128,(int)520,null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(153)
		this->cargoingright1 = _g8;
		HX_STACK_LINE(154)
		this->cargoingright1->loadGraphic(HX_CSTRING("assets/images/Stage2/car2right.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(155)
		this->add(this->cargoingright1);
		HX_STACK_LINE(157)
		::flixel::FlxSprite _g9 = ::flixel::FlxSprite_obj::__new(((Float(-(::flixel::FlxG_obj::width)) / Float((int)3)) - (int)192),(int)520,null());		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(157)
		this->cargoingright1copy = _g9;
		HX_STACK_LINE(158)
		this->cargoingright1copy->loadGraphic(HX_CSTRING("assets/images/Stage2/car2right1.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(159)
		this->add(this->cargoingright1copy);
		HX_STACK_LINE(161)
		::flixel::FlxSprite _g10 = ::flixel::FlxSprite_obj::__new(((Float(((int)-2 * ::flixel::FlxG_obj::width)) / Float((int)3)) - (int)256),(int)520,null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(161)
		this->cargoingright1copy2 = _g10;
		HX_STACK_LINE(162)
		this->cargoingright1copy2->loadGraphic(HX_CSTRING("assets/images/Stage2/car2right2.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(163)
		this->add(this->cargoingright1copy2);
		HX_STACK_LINE(166)
		::flixel::FlxSprite _g11 = ::flixel::FlxSprite_obj::__new(::flixel::FlxG_obj::width,(int)390,null());		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(166)
		this->cargoingleft2 = _g11;
		HX_STACK_LINE(167)
		this->cargoingleft2->loadGraphic(HX_CSTRING("assets/images/Stage2/car5left.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(168)
		this->add(this->cargoingleft2);
		HX_STACK_LINE(170)
		::flixel::FlxSprite _g12 = ::flixel::FlxSprite_obj::__new(((1.33 * ::flixel::FlxG_obj::width) + (int)64),(int)390,null());		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(170)
		this->cargoingleft2copy = _g12;
		HX_STACK_LINE(171)
		this->cargoingleft2copy->loadGraphic(HX_CSTRING("assets/images/Stage2/car5left1.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(172)
		this->add(this->cargoingleft2copy);
		HX_STACK_LINE(174)
		::flixel::FlxSprite _g13 = ::flixel::FlxSprite_obj::__new(((1.66 * ::flixel::FlxG_obj::width) + (int)128),(int)390,null());		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(174)
		this->cargoingleft2copy2 = _g13;
		HX_STACK_LINE(175)
		this->cargoingleft2copy2->loadGraphic(HX_CSTRING("assets/images/Stage2/car5left2.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(176)
		this->add(this->cargoingleft2copy2);
		HX_STACK_LINE(179)
		::flixel::FlxSprite _g14 = ::flixel::FlxSprite_obj::__new((int)-128,(int)320,null());		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(179)
		this->cargoingright2 = _g14;
		HX_STACK_LINE(180)
		this->cargoingright2->loadGraphic(HX_CSTRING("assets/images/Stage2/car3right.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(181)
		this->add(this->cargoingright2);
		HX_STACK_LINE(183)
		::flixel::FlxSprite _g15 = ::flixel::FlxSprite_obj::__new(((Float(-(::flixel::FlxG_obj::width)) / Float((int)3)) - (int)192),(int)320,null());		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(183)
		this->cargoingright2copy = _g15;
		HX_STACK_LINE(184)
		this->cargoingright2copy->loadGraphic(HX_CSTRING("assets/images/Stage2/car3right1.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(185)
		this->add(this->cargoingright2copy);
		HX_STACK_LINE(187)
		::flixel::FlxSprite _g16 = ::flixel::FlxSprite_obj::__new(((Float(((int)-2 * ::flixel::FlxG_obj::width)) / Float((int)3)) - (int)256),(int)320,null());		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(187)
		this->cargoingright2copy2 = _g16;
		HX_STACK_LINE(188)
		this->cargoingright2copy2->loadGraphic(HX_CSTRING("assets/images/Stage2/car3right2.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(189)
		this->add(this->cargoingright2copy2);
		HX_STACK_LINE(192)
		::flixel::FlxSprite _g17 = ::flixel::FlxSprite_obj::__new(::flixel::FlxG_obj::width,(int)190,null());		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(192)
		this->cargoingleft3 = _g17;
		HX_STACK_LINE(193)
		this->cargoingleft3->loadGraphic(HX_CSTRING("assets/images/Stage2/car4left.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(194)
		this->add(this->cargoingleft3);
		HX_STACK_LINE(196)
		::flixel::FlxSprite _g18 = ::flixel::FlxSprite_obj::__new(((1.33 * ::flixel::FlxG_obj::width) + (int)64),(int)190,null());		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(196)
		this->cargoingleft3copy = _g18;
		HX_STACK_LINE(197)
		this->cargoingleft3copy->loadGraphic(HX_CSTRING("assets/images/Stage2/car4left1.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(198)
		this->add(this->cargoingleft3copy);
		HX_STACK_LINE(200)
		::flixel::FlxSprite _g19 = ::flixel::FlxSprite_obj::__new(((1.66 * ::flixel::FlxG_obj::width) + (int)128),(int)190,null());		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(200)
		this->cargoingleft3copy2 = _g19;
		HX_STACK_LINE(201)
		this->cargoingleft3copy2->loadGraphic(HX_CSTRING("assets/images/Stage2/car4left2.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(202)
		this->add(this->cargoingleft3copy2);
		HX_STACK_LINE(205)
		::flixel::FlxSprite _g20 = ::flixel::FlxSprite_obj::__new((int)-128,(int)120,null());		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(205)
		this->cargoingright3 = _g20;
		HX_STACK_LINE(206)
		this->cargoingright3->loadGraphic(HX_CSTRING("assets/images/Stage2/car6right.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(207)
		this->add(this->cargoingright3);
		HX_STACK_LINE(209)
		::flixel::FlxSprite _g21 = ::flixel::FlxSprite_obj::__new(((Float(-(::flixel::FlxG_obj::width)) / Float((int)3)) - (int)192),(int)120,null());		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(209)
		this->cargoingright3copy = _g21;
		HX_STACK_LINE(210)
		this->cargoingright3copy->loadGraphic(HX_CSTRING("assets/images/Stage2/car6right1.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(211)
		this->add(this->cargoingright3copy);
		HX_STACK_LINE(213)
		::flixel::FlxSprite _g22 = ::flixel::FlxSprite_obj::__new(((Float(((int)-2 * ::flixel::FlxG_obj::width)) / Float((int)3)) - (int)256),(int)120,null());		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(213)
		this->cargoingright3copy2 = _g22;
		HX_STACK_LINE(214)
		this->cargoingright3copy2->loadGraphic(HX_CSTRING("assets/images/Stage2/car6right2.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(215)
		this->add(this->cargoingright3copy2);
	}
return null();
}


Void ChickenState_obj::update( ){
{
		HX_STACK_FRAME("ChickenState","update",0x4d25ff7b,"ChickenState.update","ChickenState.hx",220,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(221)
		this->super::update();
		HX_STACK_LINE(223)
		if ((this->canMove)){
			HX_STACK_LINE(225)
			if (((  ((this->justPressed())) ? bool((bool((this->clickCoords()->y < (this->clickCoords()->x - (int)280))) && bool((this->clickCoords()->y > (-(this->clickCoords()->x) + (int)1000))))) : bool(false) ))){
				HX_STACK_LINE(227)
				{
					HX_STACK_LINE(227)
					::flixel::FlxSprite _g = this->chicken;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(227)
					_g->set_x((_g->x + (int)16));
				}
				HX_STACK_LINE(228)
				this->chicken->animation->play(HX_CSTRING("right"),false,(int)0);
			}
			HX_STACK_LINE(231)
			if (((  ((this->justPressed())) ? bool((bool((this->clickCoords()->y > (this->clickCoords()->x - (int)280))) && bool((this->clickCoords()->y < (-(this->clickCoords()->x) + (int)1000))))) : bool(false) ))){
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(233)
					::flixel::FlxSprite _g = this->chicken;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(233)
					_g->set_x((_g->x - (int)16));
				}
				HX_STACK_LINE(234)
				this->chicken->animation->play(HX_CSTRING("left"),false,(int)0);
			}
			HX_STACK_LINE(237)
			if (((  ((this->justPressed())) ? bool((bool((this->clickCoords()->y > (this->clickCoords()->x - (int)280))) && bool((this->clickCoords()->y > (-(this->clickCoords()->x) + (int)1000))))) : bool(false) ))){
				HX_STACK_LINE(239)
				{
					HX_STACK_LINE(239)
					::flixel::FlxSprite _g = this->chicken;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(239)
					_g->set_y((_g->y + (int)16));
				}
				HX_STACK_LINE(240)
				this->chicken->animation->play(HX_CSTRING("down"),false,(int)0);
			}
			HX_STACK_LINE(243)
			if (((  ((this->justPressed())) ? bool((bool((this->clickCoords()->y < (this->clickCoords()->x - (int)280))) && bool((this->clickCoords()->y < (-(this->clickCoords()->x) + (int)1000))))) : bool(false) ))){
				HX_STACK_LINE(245)
				{
					HX_STACK_LINE(245)
					::flixel::FlxSprite _g = this->chicken;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(245)
					_g->set_y((_g->y - (int)16));
				}
				HX_STACK_LINE(246)
				this->chicken->animation->play(HX_CSTRING("up"),false,(int)0);
			}
		}
		HX_STACK_LINE(251)
		this->firstpass = true;
		HX_STACK_LINE(253)
		if (((this->chicken->y < (int)64))){
			HX_STACK_LINE(255)
			this->add(this->killcar);
			HX_STACK_LINE(256)
			{
				HX_STACK_LINE(256)
				::flixel::FlxSprite _g = this->killcar;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(256)
				_g->set_x((_g->x + ((int)10 * this->velocidad)));
			}
			HX_STACK_LINE(257)
			this->canMove = false;
			HX_STACK_LINE(259)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->killcar,null(),null()))){
				HX_STACK_LINE(261)
				if ((::flixel::util::FlxCollision_obj::pixelPerfectCheck(this->chicken,this->killcar,(int)255,null()))){
					HX_STACK_LINE(263)
					::flixel::util::FlxTimer z = ::flixel::util::FlxTimer_obj::__new(0.5,this->endgame_dyn(),(int)1);		HX_STACK_VAR(z,"z");
				}
			}
		}
		HX_STACK_LINE(269)
		{
			HX_STACK_LINE(270)
			{
				HX_STACK_LINE(270)
				::flixel::FlxSprite _g = this->cargoingleft1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(270)
				_g->set_x((_g->x - (1.3 * this->velocidad)));
			}
			HX_STACK_LINE(271)
			{
				HX_STACK_LINE(271)
				::flixel::FlxSprite _g = this->cargoingleft1copy;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(271)
				_g->set_x((_g->x - (1.3 * this->velocidad)));
			}
			HX_STACK_LINE(272)
			{
				HX_STACK_LINE(272)
				::flixel::FlxSprite _g = this->cargoingleft1copy2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(272)
				_g->set_x((_g->x - (1.3 * this->velocidad)));
			}
			HX_STACK_LINE(274)
			if (((this->cargoingleft1->x < (int)-128))){
				HX_STACK_LINE(276)
				this->cargoingleft1->set_x(::flixel::FlxG_obj::width);
			}
			HX_STACK_LINE(278)
			if (((this->cargoingleft1copy->x < (int)-128))){
				HX_STACK_LINE(280)
				this->cargoingleft1copy->set_x(::flixel::FlxG_obj::width);
			}
			HX_STACK_LINE(282)
			if (((this->cargoingleft1copy2->x < (int)-128))){
				HX_STACK_LINE(284)
				this->cargoingleft1copy2->set_x(::flixel::FlxG_obj::width);
			}
			HX_STACK_LINE(287)
			{
				HX_STACK_LINE(287)
				::flixel::FlxSprite _g = this->cargoingright1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(287)
				_g->set_x((_g->x + (1.6 * this->velocidad)));
			}
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				::flixel::FlxSprite _g = this->cargoingright1copy;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(288)
				_g->set_x((_g->x + (1.6 * this->velocidad)));
			}
			HX_STACK_LINE(289)
			{
				HX_STACK_LINE(289)
				::flixel::FlxSprite _g = this->cargoingright1copy2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(289)
				_g->set_x((_g->x + (1.6 * this->velocidad)));
			}
			HX_STACK_LINE(291)
			if (((this->cargoingright1->x > (::flixel::FlxG_obj::width + (int)128)))){
				HX_STACK_LINE(293)
				this->cargoingright1->set_x((int)-128);
			}
			HX_STACK_LINE(295)
			if (((this->cargoingright1copy->x > (::flixel::FlxG_obj::width + (int)128)))){
				HX_STACK_LINE(297)
				this->cargoingright1copy->set_x((int)-128);
			}
			HX_STACK_LINE(299)
			if (((this->cargoingright1copy2->x > (::flixel::FlxG_obj::width + (int)128)))){
				HX_STACK_LINE(301)
				this->cargoingright1copy2->set_x((int)-128);
			}
			HX_STACK_LINE(304)
			{
				HX_STACK_LINE(304)
				::flixel::FlxSprite _g = this->cargoingleft2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(304)
				_g->set_x((_g->x - ((int)2 * this->velocidad)));
			}
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				::flixel::FlxSprite _g = this->cargoingleft2copy;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(305)
				_g->set_x((_g->x - ((int)2 * this->velocidad)));
			}
			HX_STACK_LINE(306)
			{
				HX_STACK_LINE(306)
				::flixel::FlxSprite _g = this->cargoingleft2copy2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(306)
				_g->set_x((_g->x - ((int)2 * this->velocidad)));
			}
			HX_STACK_LINE(308)
			if (((this->cargoingleft2->x < (int)-128))){
				HX_STACK_LINE(310)
				this->cargoingleft2->set_x(::flixel::FlxG_obj::width);
			}
			HX_STACK_LINE(312)
			if (((this->cargoingleft2copy->x < (int)-128))){
				HX_STACK_LINE(314)
				this->cargoingleft2copy->set_x(::flixel::FlxG_obj::width);
			}
			HX_STACK_LINE(316)
			if (((this->cargoingleft2copy2->x < (int)-128))){
				HX_STACK_LINE(318)
				this->cargoingleft2copy2->set_x(::flixel::FlxG_obj::width);
			}
			HX_STACK_LINE(321)
			{
				HX_STACK_LINE(321)
				::flixel::FlxSprite _g = this->cargoingright2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(321)
				_g->set_x((_g->x + (2.5 * this->velocidad)));
			}
			HX_STACK_LINE(322)
			{
				HX_STACK_LINE(322)
				::flixel::FlxSprite _g = this->cargoingright2copy;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(322)
				_g->set_x((_g->x + (2.5 * this->velocidad)));
			}
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(323)
				::flixel::FlxSprite _g = this->cargoingright2copy2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(323)
				_g->set_x((_g->x + (2.5 * this->velocidad)));
			}
			HX_STACK_LINE(325)
			if (((this->cargoingright2->x > (::flixel::FlxG_obj::width + (int)128)))){
				HX_STACK_LINE(327)
				this->cargoingright2->set_x((int)-128);
			}
			HX_STACK_LINE(329)
			if (((this->cargoingright2copy->x > (::flixel::FlxG_obj::width + (int)128)))){
				HX_STACK_LINE(331)
				this->cargoingright2copy->set_x((int)-128);
			}
			HX_STACK_LINE(333)
			if (((this->cargoingright2copy2->x > (::flixel::FlxG_obj::width + (int)128)))){
				HX_STACK_LINE(335)
				this->cargoingright2copy2->set_x((int)-128);
			}
			HX_STACK_LINE(338)
			{
				HX_STACK_LINE(338)
				::flixel::FlxSprite _g = this->cargoingleft3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(338)
				_g->set_x((_g->x - ((int)3 * this->velocidad)));
			}
			HX_STACK_LINE(339)
			{
				HX_STACK_LINE(339)
				::flixel::FlxSprite _g = this->cargoingleft3copy;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(339)
				_g->set_x((_g->x - ((int)3 * this->velocidad)));
			}
			HX_STACK_LINE(340)
			{
				HX_STACK_LINE(340)
				::flixel::FlxSprite _g = this->cargoingleft3copy2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(340)
				_g->set_x((_g->x - ((int)3 * this->velocidad)));
			}
			HX_STACK_LINE(342)
			if (((this->cargoingleft3->x < (int)-128))){
				HX_STACK_LINE(344)
				this->cargoingleft3->set_x(::flixel::FlxG_obj::width);
			}
			HX_STACK_LINE(346)
			if (((this->cargoingleft3copy->x < (int)-128))){
				HX_STACK_LINE(348)
				this->cargoingleft3copy->set_x(::flixel::FlxG_obj::width);
			}
			HX_STACK_LINE(350)
			if (((this->cargoingleft3copy2->x < (int)-128))){
				HX_STACK_LINE(352)
				this->cargoingleft3copy2->set_x(::flixel::FlxG_obj::width);
			}
			HX_STACK_LINE(355)
			{
				HX_STACK_LINE(355)
				::flixel::FlxSprite _g = this->cargoingright3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(355)
				_g->set_x((_g->x + ((int)4 * this->velocidad)));
			}
			HX_STACK_LINE(356)
			{
				HX_STACK_LINE(356)
				::flixel::FlxSprite _g = this->cargoingright3copy;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(356)
				_g->set_x((_g->x + ((int)4 * this->velocidad)));
			}
			HX_STACK_LINE(357)
			{
				HX_STACK_LINE(357)
				::flixel::FlxSprite _g = this->cargoingright3copy2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(357)
				_g->set_x((_g->x + ((int)4 * this->velocidad)));
			}
			HX_STACK_LINE(359)
			if (((this->cargoingright3->x > (::flixel::FlxG_obj::width + (int)128)))){
				HX_STACK_LINE(361)
				this->cargoingright3->set_x((int)-128);
			}
			HX_STACK_LINE(363)
			if (((this->cargoingright3copy->x > (::flixel::FlxG_obj::width + (int)128)))){
				HX_STACK_LINE(365)
				this->cargoingright3copy->set_x((int)-128);
			}
			HX_STACK_LINE(367)
			if (((this->cargoingright3copy2->x > (::flixel::FlxG_obj::width + (int)128)))){
				HX_STACK_LINE(369)
				this->cargoingright3copy2->set_x((int)-128);
			}
		}
		HX_STACK_LINE(373)
		{
			HX_STACK_LINE(375)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingleft1,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",377,0xb466b382)
						{
							HX_STACK_LINE(377)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(377)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingleft1,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(377)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(379)
					this->runover();
				}
			}
			HX_STACK_LINE(382)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingleft1copy,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",384,0xb466b382)
						{
							HX_STACK_LINE(384)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(384)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingleft1copy,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(384)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(386)
					this->runover();
				}
			}
			HX_STACK_LINE(389)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingleft1copy2,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",391,0xb466b382)
						{
							HX_STACK_LINE(391)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(391)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingleft1copy2,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(391)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(393)
					this->runover();
				}
			}
			HX_STACK_LINE(397)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingleft2,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",399,0xb466b382)
						{
							HX_STACK_LINE(399)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(399)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingleft2,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(399)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(401)
					this->runover();
				}
			}
			HX_STACK_LINE(404)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingleft2copy,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",406,0xb466b382)
						{
							HX_STACK_LINE(406)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(406)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingleft2copy,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(406)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(408)
					this->runover();
				}
			}
			HX_STACK_LINE(411)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingleft2copy2,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",413,0xb466b382)
						{
							HX_STACK_LINE(413)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(413)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingleft2copy2,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(413)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(415)
					this->runover();
				}
			}
			HX_STACK_LINE(419)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingright1,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",421,0xb466b382)
						{
							HX_STACK_LINE(421)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(421)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingright1,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(421)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(423)
					this->runover();
				}
			}
			HX_STACK_LINE(426)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingright1copy,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",428,0xb466b382)
						{
							HX_STACK_LINE(428)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(428)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingright1copy,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(428)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(430)
					this->runover();
				}
			}
			HX_STACK_LINE(433)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingright1copy2,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",435,0xb466b382)
						{
							HX_STACK_LINE(435)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(435)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingright1copy2,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(435)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(437)
					this->runover();
				}
			}
			HX_STACK_LINE(441)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingright2,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",443,0xb466b382)
						{
							HX_STACK_LINE(443)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(443)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingright2,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(443)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(445)
					this->runover();
				}
			}
			HX_STACK_LINE(448)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingright2copy,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",450,0xb466b382)
						{
							HX_STACK_LINE(450)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(450)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingright2copy,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(450)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(452)
					this->runover();
				}
			}
			HX_STACK_LINE(455)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingright2copy2,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",457,0xb466b382)
						{
							HX_STACK_LINE(457)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(457)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingright2copy2,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(457)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(459)
					this->runover();
				}
			}
			HX_STACK_LINE(463)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingleft3,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",465,0xb466b382)
						{
							HX_STACK_LINE(465)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(465)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingleft3,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(465)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(467)
					this->runover();
				}
			}
			HX_STACK_LINE(470)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingleft3copy,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",472,0xb466b382)
						{
							HX_STACK_LINE(472)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(472)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingleft3copy,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(472)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(474)
					this->runover();
				}
			}
			HX_STACK_LINE(477)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingleft3copy2,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",479,0xb466b382)
						{
							HX_STACK_LINE(479)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(479)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingleft3copy2,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(479)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(481)
					this->runover();
				}
			}
			HX_STACK_LINE(485)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingright3,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",487,0xb466b382)
						{
							HX_STACK_LINE(487)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(487)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingright3,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(487)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(489)
					this->runover();
				}
			}
			HX_STACK_LINE(492)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingright3copy,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",494,0xb466b382)
						{
							HX_STACK_LINE(494)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(494)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingright3copy,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(494)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(496)
					this->runover();
				}
			}
			HX_STACK_LINE(499)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingright3copy2,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",501,0xb466b382)
						{
							HX_STACK_LINE(501)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(501)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingright3copy2,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(501)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(503)
					this->runover();
				}
			}
		}
	}
return null();
}


Void ChickenState_obj::destroy( ){
{
		HX_STACK_FRAME("ChickenState","destroy",0xbacff748,"ChickenState.destroy","ChickenState.hx",510,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(511)
		this->chicken->destroy();
		HX_STACK_LINE(512)
		this->cargoingleft1->destroy();
		HX_STACK_LINE(513)
		this->cargoingleft1copy->destroy();
		HX_STACK_LINE(514)
		this->cargoingleft1copy2->destroy();
		HX_STACK_LINE(515)
		this->cargoingleft2->destroy();
		HX_STACK_LINE(516)
		this->cargoingleft2copy->destroy();
		HX_STACK_LINE(517)
		this->cargoingleft2copy2->destroy();
		HX_STACK_LINE(518)
		this->cargoingright1->destroy();
		HX_STACK_LINE(519)
		this->cargoingright1copy->destroy();
		HX_STACK_LINE(520)
		this->cargoingright1copy2->destroy();
		HX_STACK_LINE(521)
		this->cargoingright2->destroy();
		HX_STACK_LINE(522)
		this->cargoingright2copy->destroy();
		HX_STACK_LINE(523)
		this->cargoingright2copy2->destroy();
		HX_STACK_LINE(524)
		this->cargoingleft3->destroy();
		HX_STACK_LINE(525)
		this->cargoingleft3copy->destroy();
		HX_STACK_LINE(526)
		this->cargoingleft3copy2->destroy();
		HX_STACK_LINE(527)
		this->cargoingright3->destroy();
		HX_STACK_LINE(528)
		this->cargoingright3copy->destroy();
		HX_STACK_LINE(529)
		this->cargoingright3copy2->destroy();
	}
return null();
}


Void ChickenState_obj::runover( ){
{
		HX_STACK_FRAME("ChickenState","runover",0x8266446d,"ChickenState.runover","ChickenState.hx",533,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(534)
		this->chicken->animation->play(HX_CSTRING("dead"),false,(int)0);
		HX_STACK_LINE(535)
		this->canMove = false;
		HX_STACK_LINE(536)
		::flixel::util::FlxTimer z = ::flixel::util::FlxTimer_obj::__new((int)1,this->endgame_dyn(),(int)1);		HX_STACK_VAR(z,"z");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ChickenState_obj,runover,(void))

Void ChickenState_obj::startwait( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("ChickenState","startwait",0x311821a5,"ChickenState.startwait","ChickenState.hx",540,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(541)
		this->canMove = false;
		HX_STACK_LINE(542)
		::flixel::util::FlxTimer s = ::flixel::util::FlxTimer_obj::__new((int)1,this->startstart_dyn(),(int)1);		HX_STACK_VAR(s,"s");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ChickenState_obj,startwait,(void))

Void ChickenState_obj::startstart( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("ChickenState","startstart",0x82f3f732,"ChickenState.startstart","ChickenState.hx",547,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(547)
		this->canMove = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ChickenState_obj,startstart,(void))

Void ChickenState_obj::endgame( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("ChickenState","endgame",0xd1f44b9b,"ChickenState.endgame","ChickenState.hx",551,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(552)
		this->velocidad = (int)0;
		HX_STACK_LINE(553)
		::flixel::util::FlxTimer n = ::flixel::util::FlxTimer_obj::__new((int)1,this->gameOver_dyn(),(int)1);		HX_STACK_VAR(n,"n");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ChickenState_obj,endgame,(void))

Void ChickenState_obj::gameOver( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("ChickenState","gameOver",0xa025cc58,"ChickenState.gameOver","ChickenState.hx",558,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(558)
		::flixel::FlxState State = ::GhostState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(558)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ChickenState_obj,gameOver,(void))

Void ChickenState_obj::clickMenu( ){
{
		HX_STACK_FRAME("ChickenState","clickMenu",0x3b642bd5,"ChickenState.clickMenu","ChickenState.hx",563,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(563)
		::flixel::FlxState State = ::MenuState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(563)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ChickenState_obj,clickMenu,(void))

Void ChickenState_obj::clickSkip( ){
{
		HX_STACK_FRAME("ChickenState","clickSkip",0x3f5ffcb5,"ChickenState.clickSkip","ChickenState.hx",568,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(568)
		::flixel::FlxState State = ::GhostState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(568)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ChickenState_obj,clickSkip,(void))


ChickenState_obj::ChickenState_obj()
{
}

void ChickenState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChickenState);
	HX_MARK_MEMBER_NAME(chicken,"chicken");
	HX_MARK_MEMBER_NAME(cargoingleft1,"cargoingleft1");
	HX_MARK_MEMBER_NAME(cargoingleft1copy,"cargoingleft1copy");
	HX_MARK_MEMBER_NAME(cargoingleft1copy2,"cargoingleft1copy2");
	HX_MARK_MEMBER_NAME(cargoingright1,"cargoingright1");
	HX_MARK_MEMBER_NAME(cargoingright1copy,"cargoingright1copy");
	HX_MARK_MEMBER_NAME(cargoingright1copy2,"cargoingright1copy2");
	HX_MARK_MEMBER_NAME(cargoingleft2,"cargoingleft2");
	HX_MARK_MEMBER_NAME(cargoingleft2copy,"cargoingleft2copy");
	HX_MARK_MEMBER_NAME(cargoingleft2copy2,"cargoingleft2copy2");
	HX_MARK_MEMBER_NAME(cargoingright2,"cargoingright2");
	HX_MARK_MEMBER_NAME(cargoingright2copy,"cargoingright2copy");
	HX_MARK_MEMBER_NAME(cargoingright2copy2,"cargoingright2copy2");
	HX_MARK_MEMBER_NAME(cargoingleft3,"cargoingleft3");
	HX_MARK_MEMBER_NAME(cargoingleft3copy,"cargoingleft3copy");
	HX_MARK_MEMBER_NAME(cargoingleft3copy2,"cargoingleft3copy2");
	HX_MARK_MEMBER_NAME(cargoingright3,"cargoingright3");
	HX_MARK_MEMBER_NAME(cargoingright3copy,"cargoingright3copy");
	HX_MARK_MEMBER_NAME(cargoingright3copy2,"cargoingright3copy2");
	HX_MARK_MEMBER_NAME(killcar,"killcar");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(velocidad,"velocidad");
	HX_MARK_MEMBER_NAME(firstpass,"firstpass");
	HX_MARK_MEMBER_NAME(canMove,"canMove");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ChickenState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(chicken,"chicken");
	HX_VISIT_MEMBER_NAME(cargoingleft1,"cargoingleft1");
	HX_VISIT_MEMBER_NAME(cargoingleft1copy,"cargoingleft1copy");
	HX_VISIT_MEMBER_NAME(cargoingleft1copy2,"cargoingleft1copy2");
	HX_VISIT_MEMBER_NAME(cargoingright1,"cargoingright1");
	HX_VISIT_MEMBER_NAME(cargoingright1copy,"cargoingright1copy");
	HX_VISIT_MEMBER_NAME(cargoingright1copy2,"cargoingright1copy2");
	HX_VISIT_MEMBER_NAME(cargoingleft2,"cargoingleft2");
	HX_VISIT_MEMBER_NAME(cargoingleft2copy,"cargoingleft2copy");
	HX_VISIT_MEMBER_NAME(cargoingleft2copy2,"cargoingleft2copy2");
	HX_VISIT_MEMBER_NAME(cargoingright2,"cargoingright2");
	HX_VISIT_MEMBER_NAME(cargoingright2copy,"cargoingright2copy");
	HX_VISIT_MEMBER_NAME(cargoingright2copy2,"cargoingright2copy2");
	HX_VISIT_MEMBER_NAME(cargoingleft3,"cargoingleft3");
	HX_VISIT_MEMBER_NAME(cargoingleft3copy,"cargoingleft3copy");
	HX_VISIT_MEMBER_NAME(cargoingleft3copy2,"cargoingleft3copy2");
	HX_VISIT_MEMBER_NAME(cargoingright3,"cargoingright3");
	HX_VISIT_MEMBER_NAME(cargoingright3copy,"cargoingright3copy");
	HX_VISIT_MEMBER_NAME(cargoingright3copy2,"cargoingright3copy2");
	HX_VISIT_MEMBER_NAME(killcar,"killcar");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(velocidad,"velocidad");
	HX_VISIT_MEMBER_NAME(firstpass,"firstpass");
	HX_VISIT_MEMBER_NAME(canMove,"canMove");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ChickenState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"chicken") ) { return chicken; }
		if (HX_FIELD_EQ(inName,"killcar") ) { return killcar; }
		if (HX_FIELD_EQ(inName,"canMove") ) { return canMove; }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"runover") ) { return runover_dyn(); }
		if (HX_FIELD_EQ(inName,"endgame") ) { return endgame_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameOver") ) { return gameOver_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"velocidad") ) { return velocidad; }
		if (HX_FIELD_EQ(inName,"firstpass") ) { return firstpass; }
		if (HX_FIELD_EQ(inName,"startwait") ) { return startwait_dyn(); }
		if (HX_FIELD_EQ(inName,"clickMenu") ) { return clickMenu_dyn(); }
		if (HX_FIELD_EQ(inName,"clickSkip") ) { return clickSkip_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"startstart") ) { return startstart_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"clickCoords") ) { return clickCoords_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cargoingleft1") ) { return cargoingleft1; }
		if (HX_FIELD_EQ(inName,"cargoingleft2") ) { return cargoingleft2; }
		if (HX_FIELD_EQ(inName,"cargoingleft3") ) { return cargoingleft3; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cargoingright1") ) { return cargoingright1; }
		if (HX_FIELD_EQ(inName,"cargoingright2") ) { return cargoingright2; }
		if (HX_FIELD_EQ(inName,"cargoingright3") ) { return cargoingright3; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cargoingleft1copy") ) { return cargoingleft1copy; }
		if (HX_FIELD_EQ(inName,"cargoingleft2copy") ) { return cargoingleft2copy; }
		if (HX_FIELD_EQ(inName,"cargoingleft3copy") ) { return cargoingleft3copy; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"cargoingleft1copy2") ) { return cargoingleft1copy2; }
		if (HX_FIELD_EQ(inName,"cargoingright1copy") ) { return cargoingright1copy; }
		if (HX_FIELD_EQ(inName,"cargoingleft2copy2") ) { return cargoingleft2copy2; }
		if (HX_FIELD_EQ(inName,"cargoingright2copy") ) { return cargoingright2copy; }
		if (HX_FIELD_EQ(inName,"cargoingleft3copy2") ) { return cargoingleft3copy2; }
		if (HX_FIELD_EQ(inName,"cargoingright3copy") ) { return cargoingright3copy; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"cargoingright1copy2") ) { return cargoingright1copy2; }
		if (HX_FIELD_EQ(inName,"cargoingright2copy2") ) { return cargoingright2copy2; }
		if (HX_FIELD_EQ(inName,"cargoingright3copy2") ) { return cargoingright3copy2; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ChickenState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"chicken") ) { chicken=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"killcar") ) { killcar=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canMove") ) { canMove=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"velocidad") ) { velocidad=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"firstpass") ) { firstpass=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cargoingleft1") ) { cargoingleft1=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cargoingleft2") ) { cargoingleft2=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cargoingleft3") ) { cargoingleft3=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cargoingright1") ) { cargoingright1=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cargoingright2") ) { cargoingright2=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cargoingright3") ) { cargoingright3=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cargoingleft1copy") ) { cargoingleft1copy=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cargoingleft2copy") ) { cargoingleft2copy=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cargoingleft3copy") ) { cargoingleft3copy=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"cargoingleft1copy2") ) { cargoingleft1copy2=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cargoingright1copy") ) { cargoingright1copy=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cargoingleft2copy2") ) { cargoingleft2copy2=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cargoingright2copy") ) { cargoingright2copy=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cargoingleft3copy2") ) { cargoingleft3copy2=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cargoingright3copy") ) { cargoingright3copy=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"cargoingright1copy2") ) { cargoingright1copy2=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cargoingright2copy2") ) { cargoingright2copy2=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cargoingright3copy2") ) { cargoingright3copy2=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChickenState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("chicken"));
	outFields->push(HX_CSTRING("cargoingleft1"));
	outFields->push(HX_CSTRING("cargoingleft1copy"));
	outFields->push(HX_CSTRING("cargoingleft1copy2"));
	outFields->push(HX_CSTRING("cargoingright1"));
	outFields->push(HX_CSTRING("cargoingright1copy"));
	outFields->push(HX_CSTRING("cargoingright1copy2"));
	outFields->push(HX_CSTRING("cargoingleft2"));
	outFields->push(HX_CSTRING("cargoingleft2copy"));
	outFields->push(HX_CSTRING("cargoingleft2copy2"));
	outFields->push(HX_CSTRING("cargoingright2"));
	outFields->push(HX_CSTRING("cargoingright2copy"));
	outFields->push(HX_CSTRING("cargoingright2copy2"));
	outFields->push(HX_CSTRING("cargoingleft3"));
	outFields->push(HX_CSTRING("cargoingleft3copy"));
	outFields->push(HX_CSTRING("cargoingleft3copy2"));
	outFields->push(HX_CSTRING("cargoingright3"));
	outFields->push(HX_CSTRING("cargoingright3copy"));
	outFields->push(HX_CSTRING("cargoingright3copy2"));
	outFields->push(HX_CSTRING("killcar"));
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("velocidad"));
	outFields->push(HX_CSTRING("firstpass"));
	outFields->push(HX_CSTRING("canMove"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ChickenState_obj,chicken),HX_CSTRING("chicken")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ChickenState_obj,cargoingleft1),HX_CSTRING("cargoingleft1")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ChickenState_obj,cargoingleft1copy),HX_CSTRING("cargoingleft1copy")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ChickenState_obj,cargoingleft1copy2),HX_CSTRING("cargoingleft1copy2")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ChickenState_obj,cargoingright1),HX_CSTRING("cargoingright1")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ChickenState_obj,cargoingright1copy),HX_CSTRING("cargoingright1copy")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ChickenState_obj,cargoingright1copy2),HX_CSTRING("cargoingright1copy2")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ChickenState_obj,cargoingleft2),HX_CSTRING("cargoingleft2")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ChickenState_obj,cargoingleft2copy),HX_CSTRING("cargoingleft2copy")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ChickenState_obj,cargoingleft2copy2),HX_CSTRING("cargoingleft2copy2")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ChickenState_obj,cargoingright2),HX_CSTRING("cargoingright2")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ChickenState_obj,cargoingright2copy),HX_CSTRING("cargoingright2copy")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ChickenState_obj,cargoingright2copy2),HX_CSTRING("cargoingright2copy2")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ChickenState_obj,cargoingleft3),HX_CSTRING("cargoingleft3")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ChickenState_obj,cargoingleft3copy),HX_CSTRING("cargoingleft3copy")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ChickenState_obj,cargoingleft3copy2),HX_CSTRING("cargoingleft3copy2")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ChickenState_obj,cargoingright3),HX_CSTRING("cargoingright3")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ChickenState_obj,cargoingright3copy),HX_CSTRING("cargoingright3copy")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ChickenState_obj,cargoingright3copy2),HX_CSTRING("cargoingright3copy2")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ChickenState_obj,killcar),HX_CSTRING("killcar")},
	{hx::fsObject /*::flixel::addons::display::FlxBackdrop*/ ,(int)offsetof(ChickenState_obj,background),HX_CSTRING("background")},
	{hx::fsInt,(int)offsetof(ChickenState_obj,velocidad),HX_CSTRING("velocidad")},
	{hx::fsBool,(int)offsetof(ChickenState_obj,firstpass),HX_CSTRING("firstpass")},
	{hx::fsBool,(int)offsetof(ChickenState_obj,canMove),HX_CSTRING("canMove")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("chicken"),
	HX_CSTRING("cargoingleft1"),
	HX_CSTRING("cargoingleft1copy"),
	HX_CSTRING("cargoingleft1copy2"),
	HX_CSTRING("cargoingright1"),
	HX_CSTRING("cargoingright1copy"),
	HX_CSTRING("cargoingright1copy2"),
	HX_CSTRING("cargoingleft2"),
	HX_CSTRING("cargoingleft2copy"),
	HX_CSTRING("cargoingleft2copy2"),
	HX_CSTRING("cargoingright2"),
	HX_CSTRING("cargoingright2copy"),
	HX_CSTRING("cargoingright2copy2"),
	HX_CSTRING("cargoingleft3"),
	HX_CSTRING("cargoingleft3copy"),
	HX_CSTRING("cargoingleft3copy2"),
	HX_CSTRING("cargoingright3"),
	HX_CSTRING("cargoingright3copy"),
	HX_CSTRING("cargoingright3copy2"),
	HX_CSTRING("killcar"),
	HX_CSTRING("background"),
	HX_CSTRING("velocidad"),
	HX_CSTRING("firstpass"),
	HX_CSTRING("canMove"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("pressed"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("clickCoords"),
	HX_CSTRING("create"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("runover"),
	HX_CSTRING("startwait"),
	HX_CSTRING("startstart"),
	HX_CSTRING("endgame"),
	HX_CSTRING("gameOver"),
	HX_CSTRING("clickMenu"),
	HX_CSTRING("clickSkip"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ChickenState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ChickenState_obj::__mClass,"__mClass");
};

#endif

Class ChickenState_obj::__mClass;

void ChickenState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ChickenState"), hx::TCanCast< ChickenState_obj> ,sStaticFields,sMemberFields,
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

void ChickenState_obj::__boot()
{
}

