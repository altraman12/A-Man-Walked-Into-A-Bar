#include <hxcpp.h>

#ifndef INCLUDED_ChickenState
#include <ChickenState.h>
#endif
#ifndef INCLUDED_CutScene2
#include <CutScene2.h>
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
	HX_STACK_FRAME("ChickenState","justPressed",0xbbdf1724,"ChickenState.justPressed","ChickenState.hx",51,0xb466b382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(51)
	return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(ChickenState_obj,justPressed,return )

bool ChickenState_obj::pressed( ){
	HX_STACK_FRAME("ChickenState","pressed",0xd0309cf0,"ChickenState.pressed","ChickenState.hx",65,0xb466b382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	return (::flixel::FlxG_obj::mouse->_leftButton->current > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(ChickenState_obj,pressed,return )

bool ChickenState_obj::justReleased( ){
	HX_STACK_FRAME("ChickenState","justReleased",0xae2b35fb,"ChickenState.justReleased","ChickenState.hx",79,0xb466b382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(79)
	return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(ChickenState_obj,justReleased,return )

::flixel::util::FlxPoint ChickenState_obj::clickCoords( ){
	HX_STACK_FRAME("ChickenState","clickCoords",0xc0be03d4,"ChickenState.clickCoords","ChickenState.hx",98,0xb466b382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(98)
	return ::flixel::util::FlxPoint_obj::__new(::flixel::FlxG_obj::mouse->screenX,::flixel::FlxG_obj::mouse->screenY);
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
		HX_STACK_LINE(118)
		this->startwait();
		HX_STACK_LINE(121)
		::flixel::ui::FlxButton btnMenu;		HX_STACK_VAR(btnMenu,"btnMenu");
		HX_STACK_LINE(122)
		::flixel::ui::FlxButton _g2 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_CSTRING("Main Menu"),this->clickMenu_dyn());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(122)
		btnMenu = _g2;
		HX_STACK_LINE(125)
		this->firstpass = true;
		HX_STACK_LINE(126)
		this->canMove = true;
		HX_STACK_LINE(129)
		::flixel::ui::FlxButton btnSkip;		HX_STACK_VAR(btnSkip,"btnSkip");
		HX_STACK_LINE(130)
		::flixel::ui::FlxButton _g3 = ::flixel::ui::FlxButton_obj::__new((::flixel::FlxG_obj::width - (int)200),(int)0,HX_CSTRING("Next Level"),this->clickSkip_dyn());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(130)
		btnSkip = _g3;
		HX_STACK_LINE(133)
		::flixel::FlxSprite _g4 = ::flixel::FlxSprite_obj::__new((int)-128,(int)32,null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(133)
		this->killcar = _g4;
		HX_STACK_LINE(134)
		this->killcar->loadGraphic(HX_CSTRING("assets/images/Stage2/car2right.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(137)
		::flixel::FlxSprite _g5 = ::flixel::FlxSprite_obj::__new(::flixel::FlxG_obj::width,(int)590,null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(137)
		this->cargoingleft1 = _g5;
		HX_STACK_LINE(138)
		this->cargoingleft1->loadGraphic(HX_CSTRING("assets/images/Stage2/car1left.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(139)
		this->add(this->cargoingleft1);
		HX_STACK_LINE(141)
		::flixel::FlxSprite _g6 = ::flixel::FlxSprite_obj::__new(((1.33 * ::flixel::FlxG_obj::width) + (int)64),(int)590,null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(141)
		this->cargoingleft1copy = _g6;
		HX_STACK_LINE(142)
		this->cargoingleft1copy->loadGraphic(HX_CSTRING("assets/images/Stage2/car1left1.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(143)
		this->add(this->cargoingleft1copy);
		HX_STACK_LINE(145)
		::flixel::FlxSprite _g7 = ::flixel::FlxSprite_obj::__new(((1.66 * ::flixel::FlxG_obj::width) + (int)128),(int)590,null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(145)
		this->cargoingleft1copy2 = _g7;
		HX_STACK_LINE(146)
		this->cargoingleft1copy2->loadGraphic(HX_CSTRING("assets/images/Stage2/car1left2.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(147)
		this->add(this->cargoingleft1copy2);
		HX_STACK_LINE(150)
		::flixel::FlxSprite _g8 = ::flixel::FlxSprite_obj::__new((int)-128,(int)520,null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(150)
		this->cargoingright1 = _g8;
		HX_STACK_LINE(151)
		this->cargoingright1->loadGraphic(HX_CSTRING("assets/images/Stage2/car2right.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(152)
		this->add(this->cargoingright1);
		HX_STACK_LINE(154)
		::flixel::FlxSprite _g9 = ::flixel::FlxSprite_obj::__new(((Float(-(::flixel::FlxG_obj::width)) / Float((int)3)) - (int)192),(int)520,null());		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(154)
		this->cargoingright1copy = _g9;
		HX_STACK_LINE(155)
		this->cargoingright1copy->loadGraphic(HX_CSTRING("assets/images/Stage2/car2right1.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(156)
		this->add(this->cargoingright1copy);
		HX_STACK_LINE(158)
		::flixel::FlxSprite _g10 = ::flixel::FlxSprite_obj::__new(((Float(((int)-2 * ::flixel::FlxG_obj::width)) / Float((int)3)) - (int)256),(int)520,null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(158)
		this->cargoingright1copy2 = _g10;
		HX_STACK_LINE(159)
		this->cargoingright1copy2->loadGraphic(HX_CSTRING("assets/images/Stage2/car2right2.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(160)
		this->add(this->cargoingright1copy2);
		HX_STACK_LINE(163)
		::flixel::FlxSprite _g11 = ::flixel::FlxSprite_obj::__new(::flixel::FlxG_obj::width,(int)390,null());		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(163)
		this->cargoingleft2 = _g11;
		HX_STACK_LINE(164)
		this->cargoingleft2->loadGraphic(HX_CSTRING("assets/images/Stage2/car5left.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(165)
		this->add(this->cargoingleft2);
		HX_STACK_LINE(167)
		::flixel::FlxSprite _g12 = ::flixel::FlxSprite_obj::__new(((1.33 * ::flixel::FlxG_obj::width) + (int)64),(int)390,null());		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(167)
		this->cargoingleft2copy = _g12;
		HX_STACK_LINE(168)
		this->cargoingleft2copy->loadGraphic(HX_CSTRING("assets/images/Stage2/car5left1.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(169)
		this->add(this->cargoingleft2copy);
		HX_STACK_LINE(171)
		::flixel::FlxSprite _g13 = ::flixel::FlxSprite_obj::__new(((1.66 * ::flixel::FlxG_obj::width) + (int)128),(int)390,null());		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(171)
		this->cargoingleft2copy2 = _g13;
		HX_STACK_LINE(172)
		this->cargoingleft2copy2->loadGraphic(HX_CSTRING("assets/images/Stage2/car5left2.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(173)
		this->add(this->cargoingleft2copy2);
		HX_STACK_LINE(176)
		::flixel::FlxSprite _g14 = ::flixel::FlxSprite_obj::__new((int)-128,(int)320,null());		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(176)
		this->cargoingright2 = _g14;
		HX_STACK_LINE(177)
		this->cargoingright2->loadGraphic(HX_CSTRING("assets/images/Stage2/car3right.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(178)
		this->add(this->cargoingright2);
		HX_STACK_LINE(180)
		::flixel::FlxSprite _g15 = ::flixel::FlxSprite_obj::__new(((Float(-(::flixel::FlxG_obj::width)) / Float((int)3)) - (int)192),(int)320,null());		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(180)
		this->cargoingright2copy = _g15;
		HX_STACK_LINE(181)
		this->cargoingright2copy->loadGraphic(HX_CSTRING("assets/images/Stage2/car3right1.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(182)
		this->add(this->cargoingright2copy);
		HX_STACK_LINE(184)
		::flixel::FlxSprite _g16 = ::flixel::FlxSprite_obj::__new(((Float(((int)-2 * ::flixel::FlxG_obj::width)) / Float((int)3)) - (int)256),(int)320,null());		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(184)
		this->cargoingright2copy2 = _g16;
		HX_STACK_LINE(185)
		this->cargoingright2copy2->loadGraphic(HX_CSTRING("assets/images/Stage2/car3right2.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(186)
		this->add(this->cargoingright2copy2);
		HX_STACK_LINE(189)
		::flixel::FlxSprite _g17 = ::flixel::FlxSprite_obj::__new(::flixel::FlxG_obj::width,(int)190,null());		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(189)
		this->cargoingleft3 = _g17;
		HX_STACK_LINE(190)
		this->cargoingleft3->loadGraphic(HX_CSTRING("assets/images/Stage2/car4left.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(191)
		this->add(this->cargoingleft3);
		HX_STACK_LINE(193)
		::flixel::FlxSprite _g18 = ::flixel::FlxSprite_obj::__new(((1.33 * ::flixel::FlxG_obj::width) + (int)64),(int)190,null());		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(193)
		this->cargoingleft3copy = _g18;
		HX_STACK_LINE(194)
		this->cargoingleft3copy->loadGraphic(HX_CSTRING("assets/images/Stage2/car4left1.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(195)
		this->add(this->cargoingleft3copy);
		HX_STACK_LINE(197)
		::flixel::FlxSprite _g19 = ::flixel::FlxSprite_obj::__new(((1.66 * ::flixel::FlxG_obj::width) + (int)128),(int)190,null());		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(197)
		this->cargoingleft3copy2 = _g19;
		HX_STACK_LINE(198)
		this->cargoingleft3copy2->loadGraphic(HX_CSTRING("assets/images/Stage2/car4left2.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(199)
		this->add(this->cargoingleft3copy2);
		HX_STACK_LINE(202)
		::flixel::FlxSprite _g20 = ::flixel::FlxSprite_obj::__new((int)-128,(int)120,null());		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(202)
		this->cargoingright3 = _g20;
		HX_STACK_LINE(203)
		this->cargoingright3->loadGraphic(HX_CSTRING("assets/images/Stage2/car6right.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(204)
		this->add(this->cargoingright3);
		HX_STACK_LINE(206)
		::flixel::FlxSprite _g21 = ::flixel::FlxSprite_obj::__new(((Float(-(::flixel::FlxG_obj::width)) / Float((int)3)) - (int)192),(int)120,null());		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(206)
		this->cargoingright3copy = _g21;
		HX_STACK_LINE(207)
		this->cargoingright3copy->loadGraphic(HX_CSTRING("assets/images/Stage2/car6right1.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(208)
		this->add(this->cargoingright3copy);
		HX_STACK_LINE(210)
		::flixel::FlxSprite _g22 = ::flixel::FlxSprite_obj::__new(((Float(((int)-2 * ::flixel::FlxG_obj::width)) / Float((int)3)) - (int)256),(int)120,null());		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(210)
		this->cargoingright3copy2 = _g22;
		HX_STACK_LINE(211)
		this->cargoingright3copy2->loadGraphic(HX_CSTRING("assets/images/Stage2/car6right2.png"),false,(int)128,(int)64,true,null());
		HX_STACK_LINE(212)
		this->add(this->cargoingright3copy2);
	}
return null();
}


Void ChickenState_obj::update( ){
{
		HX_STACK_FRAME("ChickenState","update",0x4d25ff7b,"ChickenState.update","ChickenState.hx",217,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(218)
		this->super::update();
		HX_STACK_LINE(220)
		if ((this->canMove)){
			HX_STACK_LINE(222)
			if (((  ((this->justPressed())) ? bool((bool((this->clickCoords()->y < (this->clickCoords()->x - (int)280))) && bool((this->clickCoords()->y > (-(this->clickCoords()->x) + (int)1000))))) : bool(false) ))){
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					::flixel::FlxSprite _g = this->chicken;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(224)
					_g->set_x((_g->x + (int)16));
				}
				HX_STACK_LINE(225)
				this->chicken->animation->play(HX_CSTRING("right"),false,(int)0);
			}
			HX_STACK_LINE(228)
			if (((  ((this->justPressed())) ? bool((bool((this->clickCoords()->y > (this->clickCoords()->x - (int)280))) && bool((this->clickCoords()->y < (-(this->clickCoords()->x) + (int)1000))))) : bool(false) ))){
				HX_STACK_LINE(230)
				{
					HX_STACK_LINE(230)
					::flixel::FlxSprite _g = this->chicken;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(230)
					_g->set_x((_g->x - (int)16));
				}
				HX_STACK_LINE(231)
				this->chicken->animation->play(HX_CSTRING("left"),false,(int)0);
			}
			HX_STACK_LINE(234)
			if (((  ((this->justPressed())) ? bool((bool((this->clickCoords()->y > (this->clickCoords()->x - (int)280))) && bool((this->clickCoords()->y > (-(this->clickCoords()->x) + (int)1000))))) : bool(false) ))){
				HX_STACK_LINE(236)
				{
					HX_STACK_LINE(236)
					::flixel::FlxSprite _g = this->chicken;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(236)
					_g->set_y((_g->y + (int)16));
				}
				HX_STACK_LINE(237)
				this->chicken->animation->play(HX_CSTRING("down"),false,(int)0);
			}
			HX_STACK_LINE(240)
			if (((  ((this->justPressed())) ? bool((bool((this->clickCoords()->y < (this->clickCoords()->x - (int)280))) && bool((this->clickCoords()->y < (-(this->clickCoords()->x) + (int)1000))))) : bool(false) ))){
				HX_STACK_LINE(242)
				{
					HX_STACK_LINE(242)
					::flixel::FlxSprite _g = this->chicken;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(242)
					_g->set_y((_g->y - (int)16));
				}
				HX_STACK_LINE(243)
				this->chicken->animation->play(HX_CSTRING("up"),false,(int)0);
			}
		}
		HX_STACK_LINE(248)
		this->firstpass = true;
		HX_STACK_LINE(250)
		if (((this->chicken->y < (int)64))){
			HX_STACK_LINE(252)
			this->add(this->killcar);
			HX_STACK_LINE(253)
			{
				HX_STACK_LINE(253)
				::flixel::FlxSprite _g = this->killcar;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(253)
				_g->set_x((_g->x + ((int)10 * this->velocidad)));
			}
			HX_STACK_LINE(254)
			this->canMove = false;
			HX_STACK_LINE(256)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->killcar,null(),null()))){
				HX_STACK_LINE(258)
				if ((::flixel::util::FlxCollision_obj::pixelPerfectCheck(this->chicken,this->killcar,(int)255,null()))){
					HX_STACK_LINE(260)
					::flixel::util::FlxTimer z = ::flixel::util::FlxTimer_obj::__new(0.5,this->endgame_dyn(),(int)1);		HX_STACK_VAR(z,"z");
				}
			}
		}
		HX_STACK_LINE(266)
		{
			HX_STACK_LINE(267)
			{
				HX_STACK_LINE(267)
				::flixel::FlxSprite _g = this->cargoingleft1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(267)
				_g->set_x((_g->x - (1.3 * this->velocidad)));
			}
			HX_STACK_LINE(268)
			{
				HX_STACK_LINE(268)
				::flixel::FlxSprite _g = this->cargoingleft1copy;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(268)
				_g->set_x((_g->x - (1.3 * this->velocidad)));
			}
			HX_STACK_LINE(269)
			{
				HX_STACK_LINE(269)
				::flixel::FlxSprite _g = this->cargoingleft1copy2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(269)
				_g->set_x((_g->x - (1.3 * this->velocidad)));
			}
			HX_STACK_LINE(271)
			if (((this->cargoingleft1->x < (int)-128))){
				HX_STACK_LINE(273)
				this->cargoingleft1->set_x(::flixel::FlxG_obj::width);
			}
			HX_STACK_LINE(275)
			if (((this->cargoingleft1copy->x < (int)-128))){
				HX_STACK_LINE(277)
				this->cargoingleft1copy->set_x(::flixel::FlxG_obj::width);
			}
			HX_STACK_LINE(279)
			if (((this->cargoingleft1copy2->x < (int)-128))){
				HX_STACK_LINE(281)
				this->cargoingleft1copy2->set_x(::flixel::FlxG_obj::width);
			}
			HX_STACK_LINE(284)
			{
				HX_STACK_LINE(284)
				::flixel::FlxSprite _g = this->cargoingright1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(284)
				_g->set_x((_g->x + (1.6 * this->velocidad)));
			}
			HX_STACK_LINE(285)
			{
				HX_STACK_LINE(285)
				::flixel::FlxSprite _g = this->cargoingright1copy;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(285)
				_g->set_x((_g->x + (1.6 * this->velocidad)));
			}
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				::flixel::FlxSprite _g = this->cargoingright1copy2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(286)
				_g->set_x((_g->x + (1.6 * this->velocidad)));
			}
			HX_STACK_LINE(288)
			if (((this->cargoingright1->x > (::flixel::FlxG_obj::width + (int)128)))){
				HX_STACK_LINE(290)
				this->cargoingright1->set_x((int)-128);
			}
			HX_STACK_LINE(292)
			if (((this->cargoingright1copy->x > (::flixel::FlxG_obj::width + (int)128)))){
				HX_STACK_LINE(294)
				this->cargoingright1copy->set_x((int)-128);
			}
			HX_STACK_LINE(296)
			if (((this->cargoingright1copy2->x > (::flixel::FlxG_obj::width + (int)128)))){
				HX_STACK_LINE(298)
				this->cargoingright1copy2->set_x((int)-128);
			}
			HX_STACK_LINE(301)
			{
				HX_STACK_LINE(301)
				::flixel::FlxSprite _g = this->cargoingleft2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(301)
				_g->set_x((_g->x - ((int)2 * this->velocidad)));
			}
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				::flixel::FlxSprite _g = this->cargoingleft2copy;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(302)
				_g->set_x((_g->x - ((int)2 * this->velocidad)));
			}
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(303)
				::flixel::FlxSprite _g = this->cargoingleft2copy2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(303)
				_g->set_x((_g->x - ((int)2 * this->velocidad)));
			}
			HX_STACK_LINE(305)
			if (((this->cargoingleft2->x < (int)-128))){
				HX_STACK_LINE(307)
				this->cargoingleft2->set_x(::flixel::FlxG_obj::width);
			}
			HX_STACK_LINE(309)
			if (((this->cargoingleft2copy->x < (int)-128))){
				HX_STACK_LINE(311)
				this->cargoingleft2copy->set_x(::flixel::FlxG_obj::width);
			}
			HX_STACK_LINE(313)
			if (((this->cargoingleft2copy2->x < (int)-128))){
				HX_STACK_LINE(315)
				this->cargoingleft2copy2->set_x(::flixel::FlxG_obj::width);
			}
			HX_STACK_LINE(318)
			{
				HX_STACK_LINE(318)
				::flixel::FlxSprite _g = this->cargoingright2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(318)
				_g->set_x((_g->x + (2.5 * this->velocidad)));
			}
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				::flixel::FlxSprite _g = this->cargoingright2copy;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(319)
				_g->set_x((_g->x + (2.5 * this->velocidad)));
			}
			HX_STACK_LINE(320)
			{
				HX_STACK_LINE(320)
				::flixel::FlxSprite _g = this->cargoingright2copy2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(320)
				_g->set_x((_g->x + (2.5 * this->velocidad)));
			}
			HX_STACK_LINE(322)
			if (((this->cargoingright2->x > (::flixel::FlxG_obj::width + (int)128)))){
				HX_STACK_LINE(324)
				this->cargoingright2->set_x((int)-128);
			}
			HX_STACK_LINE(326)
			if (((this->cargoingright2copy->x > (::flixel::FlxG_obj::width + (int)128)))){
				HX_STACK_LINE(328)
				this->cargoingright2copy->set_x((int)-128);
			}
			HX_STACK_LINE(330)
			if (((this->cargoingright2copy2->x > (::flixel::FlxG_obj::width + (int)128)))){
				HX_STACK_LINE(332)
				this->cargoingright2copy2->set_x((int)-128);
			}
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				::flixel::FlxSprite _g = this->cargoingleft3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(335)
				_g->set_x((_g->x - ((int)3 * this->velocidad)));
			}
			HX_STACK_LINE(336)
			{
				HX_STACK_LINE(336)
				::flixel::FlxSprite _g = this->cargoingleft3copy;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(336)
				_g->set_x((_g->x - ((int)3 * this->velocidad)));
			}
			HX_STACK_LINE(337)
			{
				HX_STACK_LINE(337)
				::flixel::FlxSprite _g = this->cargoingleft3copy2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(337)
				_g->set_x((_g->x - ((int)3 * this->velocidad)));
			}
			HX_STACK_LINE(339)
			if (((this->cargoingleft3->x < (int)-128))){
				HX_STACK_LINE(341)
				this->cargoingleft3->set_x(::flixel::FlxG_obj::width);
			}
			HX_STACK_LINE(343)
			if (((this->cargoingleft3copy->x < (int)-128))){
				HX_STACK_LINE(345)
				this->cargoingleft3copy->set_x(::flixel::FlxG_obj::width);
			}
			HX_STACK_LINE(347)
			if (((this->cargoingleft3copy2->x < (int)-128))){
				HX_STACK_LINE(349)
				this->cargoingleft3copy2->set_x(::flixel::FlxG_obj::width);
			}
			HX_STACK_LINE(352)
			{
				HX_STACK_LINE(352)
				::flixel::FlxSprite _g = this->cargoingright3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(352)
				_g->set_x((_g->x + ((int)4 * this->velocidad)));
			}
			HX_STACK_LINE(353)
			{
				HX_STACK_LINE(353)
				::flixel::FlxSprite _g = this->cargoingright3copy;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(353)
				_g->set_x((_g->x + ((int)4 * this->velocidad)));
			}
			HX_STACK_LINE(354)
			{
				HX_STACK_LINE(354)
				::flixel::FlxSprite _g = this->cargoingright3copy2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(354)
				_g->set_x((_g->x + ((int)4 * this->velocidad)));
			}
			HX_STACK_LINE(356)
			if (((this->cargoingright3->x > (::flixel::FlxG_obj::width + (int)128)))){
				HX_STACK_LINE(358)
				this->cargoingright3->set_x((int)-128);
			}
			HX_STACK_LINE(360)
			if (((this->cargoingright3copy->x > (::flixel::FlxG_obj::width + (int)128)))){
				HX_STACK_LINE(362)
				this->cargoingright3copy->set_x((int)-128);
			}
			HX_STACK_LINE(364)
			if (((this->cargoingright3copy2->x > (::flixel::FlxG_obj::width + (int)128)))){
				HX_STACK_LINE(366)
				this->cargoingright3copy2->set_x((int)-128);
			}
		}
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(372)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingleft1,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",374,0xb466b382)
						{
							HX_STACK_LINE(374)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(374)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingleft1,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(374)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(376)
					this->runover();
				}
			}
			HX_STACK_LINE(379)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingleft1copy,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",381,0xb466b382)
						{
							HX_STACK_LINE(381)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(381)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingleft1copy,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(381)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(383)
					this->runover();
				}
			}
			HX_STACK_LINE(386)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingleft1copy2,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",388,0xb466b382)
						{
							HX_STACK_LINE(388)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(388)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingleft1copy2,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(388)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(390)
					this->runover();
				}
			}
			HX_STACK_LINE(394)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingleft2,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",396,0xb466b382)
						{
							HX_STACK_LINE(396)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(396)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingleft2,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(396)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(398)
					this->runover();
				}
			}
			HX_STACK_LINE(401)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingleft2copy,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",403,0xb466b382)
						{
							HX_STACK_LINE(403)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(403)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingleft2copy,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(403)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(405)
					this->runover();
				}
			}
			HX_STACK_LINE(408)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingleft2copy2,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",410,0xb466b382)
						{
							HX_STACK_LINE(410)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(410)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingleft2copy2,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(410)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(412)
					this->runover();
				}
			}
			HX_STACK_LINE(416)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingright1,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",418,0xb466b382)
						{
							HX_STACK_LINE(418)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(418)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingright1,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(418)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(420)
					this->runover();
				}
			}
			HX_STACK_LINE(423)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingright1copy,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",425,0xb466b382)
						{
							HX_STACK_LINE(425)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(425)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingright1copy,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(425)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(427)
					this->runover();
				}
			}
			HX_STACK_LINE(430)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingright1copy2,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",432,0xb466b382)
						{
							HX_STACK_LINE(432)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(432)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingright1copy2,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(432)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(434)
					this->runover();
				}
			}
			HX_STACK_LINE(438)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingright2,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",440,0xb466b382)
						{
							HX_STACK_LINE(440)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(440)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingright2,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(440)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(442)
					this->runover();
				}
			}
			HX_STACK_LINE(445)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingright2copy,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",447,0xb466b382)
						{
							HX_STACK_LINE(447)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(447)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingright2copy,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(447)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(449)
					this->runover();
				}
			}
			HX_STACK_LINE(452)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingright2copy2,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",454,0xb466b382)
						{
							HX_STACK_LINE(454)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(454)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingright2copy2,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(454)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(456)
					this->runover();
				}
			}
			HX_STACK_LINE(460)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingleft3,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",462,0xb466b382)
						{
							HX_STACK_LINE(462)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(462)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingleft3,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(462)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(464)
					this->runover();
				}
			}
			HX_STACK_LINE(467)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingleft3copy,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",469,0xb466b382)
						{
							HX_STACK_LINE(469)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(469)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingleft3copy,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(469)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(471)
					this->runover();
				}
			}
			HX_STACK_LINE(474)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingleft3copy2,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",476,0xb466b382)
						{
							HX_STACK_LINE(476)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(476)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingleft3copy2,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(476)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(478)
					this->runover();
				}
			}
			HX_STACK_LINE(482)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingright3,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",484,0xb466b382)
						{
							HX_STACK_LINE(484)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(484)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingright3,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(484)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(486)
					this->runover();
				}
			}
			HX_STACK_LINE(489)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingright3copy,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",491,0xb466b382)
						{
							HX_STACK_LINE(491)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(491)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingright3copy,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(491)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(493)
					this->runover();
				}
			}
			HX_STACK_LINE(496)
			if ((::flixel::FlxG_obj::overlap(this->chicken,this->cargoingright3copy2,null(),null()))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::ChickenState_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ChickenState.hx",498,0xb466b382)
						{
							HX_STACK_LINE(498)
							int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
							HX_STACK_LINE(498)
							return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(__this->chicken,__this->cargoingright3copy2,AlphaTolerance,null());
						}
						return null();
					}
				};
				HX_STACK_LINE(498)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(500)
					this->runover();
				}
			}
		}
	}
return null();
}


Void ChickenState_obj::destroy( ){
{
		HX_STACK_FRAME("ChickenState","destroy",0xbacff748,"ChickenState.destroy","ChickenState.hx",507,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(508)
		this->chicken->destroy();
		HX_STACK_LINE(509)
		this->cargoingleft1->destroy();
		HX_STACK_LINE(510)
		this->cargoingleft1copy->destroy();
		HX_STACK_LINE(511)
		this->cargoingleft1copy2->destroy();
		HX_STACK_LINE(512)
		this->cargoingleft2->destroy();
		HX_STACK_LINE(513)
		this->cargoingleft2copy->destroy();
		HX_STACK_LINE(514)
		this->cargoingleft2copy2->destroy();
		HX_STACK_LINE(515)
		this->cargoingright1->destroy();
		HX_STACK_LINE(516)
		this->cargoingright1copy->destroy();
		HX_STACK_LINE(517)
		this->cargoingright1copy2->destroy();
		HX_STACK_LINE(518)
		this->cargoingright2->destroy();
		HX_STACK_LINE(519)
		this->cargoingright2copy->destroy();
		HX_STACK_LINE(520)
		this->cargoingright2copy2->destroy();
		HX_STACK_LINE(521)
		this->cargoingleft3->destroy();
		HX_STACK_LINE(522)
		this->cargoingleft3copy->destroy();
		HX_STACK_LINE(523)
		this->cargoingleft3copy2->destroy();
		HX_STACK_LINE(524)
		this->cargoingright3->destroy();
		HX_STACK_LINE(525)
		this->cargoingright3copy->destroy();
		HX_STACK_LINE(526)
		this->cargoingright3copy2->destroy();
	}
return null();
}


Void ChickenState_obj::runover( ){
{
		HX_STACK_FRAME("ChickenState","runover",0x8266446d,"ChickenState.runover","ChickenState.hx",530,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(531)
		this->chicken->animation->play(HX_CSTRING("dead"),false,(int)0);
		HX_STACK_LINE(532)
		this->canMove = false;
		HX_STACK_LINE(533)
		::flixel::util::FlxTimer z = ::flixel::util::FlxTimer_obj::__new((int)1,this->endgame_dyn(),(int)1);		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(534)
		::flixel::util::FlxTimer n = ::flixel::util::FlxTimer_obj::__new(0.5,this->ressurect_dyn(),(int)1);		HX_STACK_VAR(n,"n");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ChickenState_obj,runover,(void))

Void ChickenState_obj::ressurect( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("ChickenState","ressurect",0xe72b45f4,"ChickenState.ressurect","ChickenState.hx",538,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(539)
		this->chicken->animation->play(HX_CSTRING("up"),false,(int)0);
		HX_STACK_LINE(540)
		this->chicken->set_alpha(0.75);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ChickenState_obj,ressurect,(void))

Void ChickenState_obj::startwait( ){
{
		HX_STACK_FRAME("ChickenState","startwait",0x311821a5,"ChickenState.startwait","ChickenState.hx",544,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(545)
		this->canMove = false;
		HX_STACK_LINE(546)
		::flixel::util::FlxTimer s = ::flixel::util::FlxTimer_obj::__new((int)2,this->startstart_dyn(),(int)1);		HX_STACK_VAR(s,"s");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ChickenState_obj,startwait,(void))

Void ChickenState_obj::startstart( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("ChickenState","startstart",0x82f3f732,"ChickenState.startstart","ChickenState.hx",551,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(551)
		this->canMove = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ChickenState_obj,startstart,(void))

Void ChickenState_obj::endgame( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("ChickenState","endgame",0xd1f44b9b,"ChickenState.endgame","ChickenState.hx",555,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(556)
		this->velocidad = (int)0;
		HX_STACK_LINE(557)
		::flixel::util::FlxTimer n = ::flixel::util::FlxTimer_obj::__new((int)1,this->gameOver_dyn(),(int)1);		HX_STACK_VAR(n,"n");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ChickenState_obj,endgame,(void))

Void ChickenState_obj::gameOver( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("ChickenState","gameOver",0xa025cc58,"ChickenState.gameOver","ChickenState.hx",562,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(562)
		::flixel::FlxState State = ::CutScene2_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(562)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ChickenState_obj,gameOver,(void))

Void ChickenState_obj::clickMenu( ){
{
		HX_STACK_FRAME("ChickenState","clickMenu",0x3b642bd5,"ChickenState.clickMenu","ChickenState.hx",567,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(567)
		::flixel::FlxState State = ::MenuState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(567)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ChickenState_obj,clickMenu,(void))

Void ChickenState_obj::clickSkip( ){
{
		HX_STACK_FRAME("ChickenState","clickSkip",0x3f5ffcb5,"ChickenState.clickSkip","ChickenState.hx",572,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(572)
		::flixel::FlxState State = ::CutScene2_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(572)
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
		if (HX_FIELD_EQ(inName,"ressurect") ) { return ressurect_dyn(); }
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
	HX_CSTRING("ressurect"),
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

