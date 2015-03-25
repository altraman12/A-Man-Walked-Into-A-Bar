#include <hxcpp.h>

#ifndef INCLUDED_Door
#include <Door.h>
#endif
#ifndef INCLUDED_GhostState
#include <GhostState.h>
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
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Watch
#include <flixel/system/debug/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
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

Void GhostState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("GhostState","new",0x944af654,"GhostState.new","GhostState.hx",15,0x1e832f9c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(26)
	this->doorIndex = (int)0;
	HX_STACK_LINE(25)
	this->doneWithThisDoor = false;
	HX_STACK_LINE(24)
	this->knockCount = (int)0;
	HX_STACK_LINE(22)
	this->speed = (int)0;
	HX_STACK_LINE(15)
	super::__construct(MaxSize);
}
;
	return null();
}

//GhostState_obj::~GhostState_obj() { }

Dynamic GhostState_obj::__CreateEmpty() { return  new GhostState_obj; }
hx::ObjectPtr< GhostState_obj > GhostState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< GhostState_obj > result = new GhostState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic GhostState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GhostState_obj > result = new GhostState_obj();
	result->__construct(inArgs[0]);
	return result;}

bool GhostState_obj::justPressed( ){
	HX_STACK_FRAME("GhostState","justPressed",0xc7e347ca,"GhostState.justPressed","GhostState.hx",29,0x1e832f9c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	bool returnVal = false;		HX_STACK_VAR(returnVal,"returnVal");
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(32)
		while((true)){
			HX_STACK_LINE(32)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(32)
				break;
			}
			HX_STACK_LINE(32)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(32)
			++(_g);
			HX_STACK_LINE(34)
			returnVal = (touch->_current == (int)2);
		}
	}
	HX_STACK_LINE(36)
	return returnVal;
}


HX_DEFINE_DYNAMIC_FUNC0(GhostState_obj,justPressed,return )

bool GhostState_obj::pressed( ){
	HX_STACK_FRAME("GhostState","pressed",0xe69a0296,"GhostState.pressed","GhostState.hx",43,0x1e832f9c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	bool returnVal = false;		HX_STACK_VAR(returnVal,"returnVal");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(46)
		while((true)){
			HX_STACK_LINE(46)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(46)
				break;
			}
			HX_STACK_LINE(46)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(46)
			++(_g);
			HX_STACK_LINE(48)
			returnVal = (touch->_current > (int)0);
		}
	}
	HX_STACK_LINE(50)
	return returnVal;
}


HX_DEFINE_DYNAMIC_FUNC0(GhostState_obj,pressed,return )

bool GhostState_obj::justReleased( ){
	HX_STACK_FRAME("GhostState","justReleased",0x25d19695,"GhostState.justReleased","GhostState.hx",57,0x1e832f9c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	bool returnVal = false;		HX_STACK_VAR(returnVal,"returnVal");
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(60)
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(60)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(60)
			++(_g);
			HX_STACK_LINE(62)
			returnVal = (touch->_current == (int)-1);
		}
	}
	HX_STACK_LINE(64)
	return returnVal;
}


HX_DEFINE_DYNAMIC_FUNC0(GhostState_obj,justReleased,return )

::flixel::util::FlxPoint GhostState_obj::clickCoords( ){
	HX_STACK_FRAME("GhostState","clickCoords",0xccc2347a,"GhostState.clickCoords","GhostState.hx",71,0x1e832f9c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	::flixel::util::FlxPoint returnVal = ::flixel::util::FlxPoint_obj::__new(null(),null());		HX_STACK_VAR(returnVal,"returnVal");
	HX_STACK_LINE(74)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(75)
	{
		HX_STACK_LINE(75)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(75)
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(75)
		while((true)){
			HX_STACK_LINE(75)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(75)
				break;
			}
			HX_STACK_LINE(75)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(75)
			++(_g);
			HX_STACK_LINE(77)
			(i)++;
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				::flixel::util::FlxPoint _g2 = returnVal;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(78)
				_g2->set_x((_g2->x + touch->screenX));
			}
			HX_STACK_LINE(79)
			{
				HX_STACK_LINE(79)
				::flixel::util::FlxPoint _g2 = returnVal;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(79)
				_g2->set_y((_g2->y + touch->screenY));
			}
		}
	}
	HX_STACK_LINE(81)
	{
		HX_STACK_LINE(81)
		::flixel::util::FlxPoint _g = returnVal;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(81)
		_g->set_x((Float(_g->x) / Float(i)));
	}
	HX_STACK_LINE(82)
	{
		HX_STACK_LINE(82)
		::flixel::util::FlxPoint _g = returnVal;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(82)
		_g->set_y((Float(_g->y) / Float(i)));
	}
	HX_STACK_LINE(83)
	return returnVal;
}


HX_DEFINE_DYNAMIC_FUNC0(GhostState_obj,clickCoords,return )

Void GhostState_obj::create( ){
{
		HX_STACK_FRAME("GhostState","create",0x92a57188,"GhostState.create","GhostState.hx",90,0x1e832f9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(91)
		::flixel::addons::display::FlxBackdrop _g = ::flixel::addons::display::FlxBackdrop_obj::__new(HX_CSTRING("assets/images/Stage3/hall wall.png"),(int)0,(int)0,true,false);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(91)
		this->hall = _g;
		HX_STACK_LINE(92)
		this->add(this->hall);
		HX_STACK_LINE(94)
		::flixel::group::FlxTypedGroup _g1 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(94)
		this->doors = _g1;
		HX_STACK_LINE(95)
		this->add(this->doors);
		HX_STACK_LINE(100)
		::Door _g2 = ::Door_obj::__new((((Float(((((::flixel::FlxG_obj::width - (int)250) - 87.5) - (int)10))) / Float((int)2)) + (int)465) + (int)175),(Float(((::flixel::FlxG_obj::height - (int)280))) / Float((int)2)),hx::ObjectPtr<OBJ_>(this),HX_CSTRING("assets/images/Stage3/door.png"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(100)
		this->doors->add(_g2);
		HX_STACK_LINE(103)
		::flixel::FlxSprite _g3 = ::flixel::FlxSprite_obj::__new((Float(::flixel::FlxG_obj::width) / Float((int)2)),(Float(::flixel::FlxG_obj::height) / Float((int)2)),HX_CSTRING("assets/images/Stage3/chicken ghost.png"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(103)
		this->ghost = _g3;
		HX_STACK_LINE(104)
		this->ghost->loadGraphic(HX_CSTRING("assets/images/Stage3/chicken ghost.png"),true,(int)75,(int)100,null(),null());
		HX_STACK_LINE(105)
		this->ghost->animation->add(HX_CSTRING("right"),Array_obj< int >::__new().Add((int)0),(int)30,true);
		HX_STACK_LINE(106)
		this->ghost->animation->add(HX_CSTRING("forward"),Array_obj< int >::__new().Add((int)1),(int)30,true);
		HX_STACK_LINE(107)
		this->ghost->animation->add(HX_CSTRING("back"),Array_obj< int >::__new().Add((int)2),(int)30,true);
		HX_STACK_LINE(108)
		this->add(this->ghost);
		HX_STACK_LINE(110)
		this->speed = (int)0;
		HX_STACK_LINE(111)
		this->super::create();
		HX_STACK_LINE(113)
		Array< ::Dynamic > _g4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(113)
		this->knock = _g4;
		HX_STACK_LINE(114)
		::flixel::text::FlxText _g5 = ::flixel::text::FlxText_obj::__new((this->ghost->x + (int)25),(this->ghost->y - (int)35),(int)-1,HX_CSTRING("*knock*"),(int)20,null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(114)
		this->knock->push(_g5);
		HX_STACK_LINE(115)
		::flixel::text::FlxText _g6 = ::flixel::text::FlxText_obj::__new((this->ghost->x + (int)25),(this->ghost->y - (int)85),(int)-1,HX_CSTRING("*knock*"),(int)20,null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(115)
		this->knock->push(_g6);
		HX_STACK_LINE(116)
		{
			HX_STACK_LINE(116)
			int _g7 = (int)0;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(116)
			Array< ::Dynamic > _g11 = this->knock;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(116)
			while((true)){
				HX_STACK_LINE(116)
				if ((!(((_g7 < _g11->length))))){
					HX_STACK_LINE(116)
					break;
				}
				HX_STACK_LINE(116)
				::flixel::text::FlxText member = _g11->__get(_g7).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(member,"member");
				HX_STACK_LINE(116)
				++(_g7);
				HX_STACK_LINE(118)
				member->set_color((int)0);
				HX_STACK_LINE(119)
				this->add(member);
				HX_STACK_LINE(120)
				member->kill();
			}
		}
		HX_STACK_LINE(123)
		this->nextDoor();
	}
return null();
}


Void GhostState_obj::nextDoor( ){
{
		HX_STACK_FRAME("GhostState","nextDoor",0x5e515d8d,"GhostState.nextDoor","GhostState.hx",127,0x1e832f9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(128)
		this->inTransit = true;
		HX_STACK_LINE(129)
		if (((this->ghost->x <= this->doors->members->__GetItem(this->doorIndex)->__Field(HX_CSTRING("x"),true)))){
			HX_STACK_LINE(131)
			this->speed = (int)10;
			HX_STACK_LINE(132)
			this->ghost->animation->play(HX_CSTRING("right"),null(),null());
		}
		else{
			HX_STACK_LINE(136)
			this->speed = (int)0;
			HX_STACK_LINE(137)
			this->inTransit = false;
			HX_STACK_LINE(138)
			(this->doorIndex)++;
			HX_STACK_LINE(139)
			this->ghost->animation->play(HX_CSTRING("forward"),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GhostState_obj,nextDoor,(void))

Void GhostState_obj::update( ){
{
		HX_STACK_FRAME("GhostState","update",0x9d9b9095,"GhostState.update","GhostState.hx",144,0x1e832f9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(145)
		{
			HX_STACK_LINE(145)
			::flixel::addons::display::FlxBackdrop _g = this->hall;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(145)
			_g->set_x((_g->x - this->speed));
		}
		HX_STACK_LINE(158)
		if ((this->inTransit)){
			HX_STACK_LINE(160)
			this->nextDoor();
		}
		HX_STACK_LINE(163)
		this->super::update();
		HX_STACK_LINE(165)
		if (((  ((this->justPressed())) ? bool(!(this->inTransit)) : bool(false) ))){
			HX_STACK_LINE(168)
			if (((this->knockCount == (int)2))){
				HX_STACK_LINE(170)
				this->knockCount = (int)0;
				HX_STACK_LINE(171)
				{
					HX_STACK_LINE(171)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(171)
					Array< ::Dynamic > _g1 = this->knock;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(171)
					while((true)){
						HX_STACK_LINE(171)
						if ((!(((_g < _g1->length))))){
							HX_STACK_LINE(171)
							break;
						}
						HX_STACK_LINE(171)
						::flixel::text::FlxText member = _g1->__get(_g).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(member,"member");
						HX_STACK_LINE(171)
						++(_g);
						HX_STACK_LINE(173)
						member->kill();
					}
				}
				HX_STACK_LINE(175)
				this->doors->members->__GetItem((this->doorIndex - (int)1))->__Field(HX_CSTRING("open"),true)();
				HX_STACK_LINE(176)
				::flixel::FlxG_obj::game->debugger->watch->add(hx::ObjectPtr<OBJ_>(this),HX_CSTRING("doorIndex"),null());
				HX_STACK_LINE(177)
				this->nextDoor();
			}
			else{
				HX_STACK_LINE(181)
				this->knock->__get(this->knockCount).StaticCast< ::flixel::text::FlxText >()->revive();
				HX_STACK_LINE(182)
				(this->knockCount)++;
			}
		}
	}
return null();
}



GhostState_obj::GhostState_obj()
{
}

void GhostState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GhostState);
	HX_MARK_MEMBER_NAME(ghost,"ghost");
	HX_MARK_MEMBER_NAME(hall,"hall");
	HX_MARK_MEMBER_NAME(wall,"wall");
	HX_MARK_MEMBER_NAME(knock,"knock");
	HX_MARK_MEMBER_NAME(doors,"doors");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(inTransit,"inTransit");
	HX_MARK_MEMBER_NAME(knockCount,"knockCount");
	HX_MARK_MEMBER_NAME(doneWithThisDoor,"doneWithThisDoor");
	HX_MARK_MEMBER_NAME(doorIndex,"doorIndex");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GhostState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ghost,"ghost");
	HX_VISIT_MEMBER_NAME(hall,"hall");
	HX_VISIT_MEMBER_NAME(wall,"wall");
	HX_VISIT_MEMBER_NAME(knock,"knock");
	HX_VISIT_MEMBER_NAME(doors,"doors");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(inTransit,"inTransit");
	HX_VISIT_MEMBER_NAME(knockCount,"knockCount");
	HX_VISIT_MEMBER_NAME(doneWithThisDoor,"doneWithThisDoor");
	HX_VISIT_MEMBER_NAME(doorIndex,"doorIndex");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GhostState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hall") ) { return hall; }
		if (HX_FIELD_EQ(inName,"wall") ) { return wall; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ghost") ) { return ghost; }
		if (HX_FIELD_EQ(inName,"knock") ) { return knock; }
		if (HX_FIELD_EQ(inName,"doors") ) { return doors; }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nextDoor") ) { return nextDoor_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inTransit") ) { return inTransit; }
		if (HX_FIELD_EQ(inName,"doorIndex") ) { return doorIndex; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"knockCount") ) { return knockCount; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"clickCoords") ) { return clickCoords_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"doneWithThisDoor") ) { return doneWithThisDoor; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GhostState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hall") ) { hall=inValue.Cast< ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wall") ) { wall=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ghost") ) { ghost=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"knock") ) { knock=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"doors") ) { doors=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inTransit") ) { inTransit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"doorIndex") ) { doorIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"knockCount") ) { knockCount=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"doneWithThisDoor") ) { doneWithThisDoor=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GhostState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ghost"));
	outFields->push(HX_CSTRING("hall"));
	outFields->push(HX_CSTRING("wall"));
	outFields->push(HX_CSTRING("knock"));
	outFields->push(HX_CSTRING("doors"));
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("inTransit"));
	outFields->push(HX_CSTRING("knockCount"));
	outFields->push(HX_CSTRING("doneWithThisDoor"));
	outFields->push(HX_CSTRING("doorIndex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(GhostState_obj,ghost),HX_CSTRING("ghost")},
	{hx::fsObject /*::flixel::addons::display::FlxBackdrop*/ ,(int)offsetof(GhostState_obj,hall),HX_CSTRING("hall")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(GhostState_obj,wall),HX_CSTRING("wall")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GhostState_obj,knock),HX_CSTRING("knock")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(GhostState_obj,doors),HX_CSTRING("doors")},
	{hx::fsInt,(int)offsetof(GhostState_obj,speed),HX_CSTRING("speed")},
	{hx::fsBool,(int)offsetof(GhostState_obj,inTransit),HX_CSTRING("inTransit")},
	{hx::fsInt,(int)offsetof(GhostState_obj,knockCount),HX_CSTRING("knockCount")},
	{hx::fsBool,(int)offsetof(GhostState_obj,doneWithThisDoor),HX_CSTRING("doneWithThisDoor")},
	{hx::fsInt,(int)offsetof(GhostState_obj,doorIndex),HX_CSTRING("doorIndex")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("ghost"),
	HX_CSTRING("hall"),
	HX_CSTRING("wall"),
	HX_CSTRING("knock"),
	HX_CSTRING("doors"),
	HX_CSTRING("speed"),
	HX_CSTRING("inTransit"),
	HX_CSTRING("knockCount"),
	HX_CSTRING("doneWithThisDoor"),
	HX_CSTRING("doorIndex"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("pressed"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("clickCoords"),
	HX_CSTRING("create"),
	HX_CSTRING("nextDoor"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GhostState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GhostState_obj::__mClass,"__mClass");
};

#endif

Class GhostState_obj::__mClass;

void GhostState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("GhostState"), hx::TCanCast< GhostState_obj> ,sStaticFields,sMemberFields,
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

void GhostState_obj::__boot()
{
}

