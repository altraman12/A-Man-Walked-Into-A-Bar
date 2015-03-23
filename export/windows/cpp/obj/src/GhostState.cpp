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
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
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
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void GhostState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("GhostState","new",0x944af654,"GhostState.new","GhostState.hx",14,0x1e832f9c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(20)
	this->speed = (int)10;
	HX_STACK_LINE(14)
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
	HX_STACK_FRAME("GhostState","justPressed",0xc7e347ca,"GhostState.justPressed","GhostState.hx",32,0x1e832f9c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(32)
	return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(GhostState_obj,justPressed,return )

bool GhostState_obj::pressed( ){
	HX_STACK_FRAME("GhostState","pressed",0xe69a0296,"GhostState.pressed","GhostState.hx",46,0x1e832f9c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	return (::flixel::FlxG_obj::mouse->_leftButton->current > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(GhostState_obj,pressed,return )

bool GhostState_obj::justReleased( ){
	HX_STACK_FRAME("GhostState","justReleased",0x25d19695,"GhostState.justReleased","GhostState.hx",60,0x1e832f9c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(60)
	return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(GhostState_obj,justReleased,return )

::flixel::util::FlxPoint GhostState_obj::clickCoords( ){
	HX_STACK_FRAME("GhostState","clickCoords",0xccc2347a,"GhostState.clickCoords","GhostState.hx",79,0x1e832f9c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	return ::flixel::util::FlxPoint_obj::__new(::flixel::FlxG_obj::mouse->screenX,::flixel::FlxG_obj::mouse->screenY);
}


HX_DEFINE_DYNAMIC_FUNC0(GhostState_obj,clickCoords,return )

Void GhostState_obj::create( ){
{
		HX_STACK_FRAME("GhostState","create",0x92a57188,"GhostState.create","GhostState.hx",84,0x1e832f9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(85)
		::flixel::addons::display::FlxBackdrop _g = ::flixel::addons::display::FlxBackdrop_obj::__new(HX_CSTRING("assets/images/Stage3/hall.png"),(int)0,(int)0,true,false);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(85)
		this->hall = _g;
		HX_STACK_LINE(86)
		this->add(this->hall);
		HX_STACK_LINE(88)
		::flixel::group::FlxTypedGroup _g1 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(88)
		this->doors = _g1;
		HX_STACK_LINE(89)
		int _g2 = ::Math_obj::floor((Float(((::flixel::FlxG_obj::height - (int)250))) / Float((int)2)));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(89)
		::Door _g3 = ::Door_obj::__new(-87.5,_g2,HX_CSTRING("assets/images/Stage3/door.png"),hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(89)
		this->add(_g3);
		HX_STACK_LINE(91)
		::flixel::FlxSprite _g4 = ::flixel::FlxSprite_obj::__new((Float(::flixel::FlxG_obj::width) / Float((int)2)),(Float(::flixel::FlxG_obj::height) / Float((int)2)),HX_CSTRING("assets/images/Stage3/chicken ghost.png"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(91)
		this->ghost = _g4;
		HX_STACK_LINE(92)
		this->ghost->loadGraphic(HX_CSTRING("assets/images/Stage3/chicken ghost.png"),true,(int)75,(int)100,null(),null());
		HX_STACK_LINE(93)
		this->ghost->animation->add(HX_CSTRING("right"),Array_obj< int >::__new().Add((int)1),(int)30,true);
		HX_STACK_LINE(94)
		this->ghost->animation->add(HX_CSTRING("forward"),Array_obj< int >::__new().Add((int)2),(int)30,true);
		HX_STACK_LINE(95)
		this->ghost->animation->add(HX_CSTRING("back"),Array_obj< int >::__new().Add((int)3),(int)30,true);
		HX_STACK_LINE(96)
		this->add(this->ghost);
		HX_STACK_LINE(98)
		this->speed = (int)10;
		HX_STACK_LINE(99)
		this->super::create();
	}
return null();
}


Void GhostState_obj::update( ){
{
		HX_STACK_FRAME("GhostState","update",0x9d9b9095,"GhostState.update","GhostState.hx",103,0x1e832f9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			::flixel::addons::display::FlxBackdrop _g = this->hall;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(104)
			_g->set_x((_g->x - this->speed));
		}
		HX_STACK_LINE(105)
		this->doors->callAll(HX_CSTRING("update()"),null(),null());
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
	HX_MARK_MEMBER_NAME(doorsIterator,"doorsIterator");
	HX_MARK_MEMBER_NAME(doors,"doors");
	HX_MARK_MEMBER_NAME(speed,"speed");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GhostState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ghost,"ghost");
	HX_VISIT_MEMBER_NAME(hall,"hall");
	HX_VISIT_MEMBER_NAME(doorsIterator,"doorsIterator");
	HX_VISIT_MEMBER_NAME(doors,"doors");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GhostState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hall") ) { return hall; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ghost") ) { return ghost; }
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
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"clickCoords") ) { return clickCoords_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"doorsIterator") ) { return doorsIterator; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GhostState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hall") ) { hall=inValue.Cast< ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ghost") ) { ghost=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"doors") ) { doors=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"doorsIterator") ) { doorsIterator=inValue.Cast< ::flixel::group::FlxTypedGroupIterator >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GhostState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ghost"));
	outFields->push(HX_CSTRING("hall"));
	outFields->push(HX_CSTRING("doorsIterator"));
	outFields->push(HX_CSTRING("doors"));
	outFields->push(HX_CSTRING("speed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(GhostState_obj,ghost),HX_CSTRING("ghost")},
	{hx::fsObject /*::flixel::addons::display::FlxBackdrop*/ ,(int)offsetof(GhostState_obj,hall),HX_CSTRING("hall")},
	{hx::fsObject /*::flixel::group::FlxTypedGroupIterator*/ ,(int)offsetof(GhostState_obj,doorsIterator),HX_CSTRING("doorsIterator")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(GhostState_obj,doors),HX_CSTRING("doors")},
	{hx::fsInt,(int)offsetof(GhostState_obj,speed),HX_CSTRING("speed")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("ghost"),
	HX_CSTRING("hall"),
	HX_CSTRING("doorsIterator"),
	HX_CSTRING("doors"),
	HX_CSTRING("speed"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("pressed"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("clickCoords"),
	HX_CSTRING("create"),
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

