#include <hxcpp.h>

#ifndef INCLUDED_ChickenState
#include <ChickenState.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
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

Void ChickenState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("ChickenState","new",0x257adbae,"ChickenState.new","ChickenState.hx",12,0xb466b382)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(12)
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
	HX_STACK_FRAME("ChickenState","justPressed",0xbbdf1724,"ChickenState.justPressed","ChickenState.hx",27,0xb466b382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(27)
	return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(ChickenState_obj,justPressed,return )

bool ChickenState_obj::pressed( ){
	HX_STACK_FRAME("ChickenState","pressed",0xd0309cf0,"ChickenState.pressed","ChickenState.hx",41,0xb466b382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	return (::flixel::FlxG_obj::mouse->_leftButton->current > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(ChickenState_obj,pressed,return )

bool ChickenState_obj::justReleased( ){
	HX_STACK_FRAME("ChickenState","justReleased",0xae2b35fb,"ChickenState.justReleased","ChickenState.hx",55,0xb466b382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(55)
	return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(ChickenState_obj,justReleased,return )

::flixel::util::FlxPoint ChickenState_obj::clickCoords( ){
	HX_STACK_FRAME("ChickenState","clickCoords",0xc0be03d4,"ChickenState.clickCoords","ChickenState.hx",74,0xb466b382)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	return ::flixel::util::FlxPoint_obj::__new(::flixel::FlxG_obj::mouse->screenX,::flixel::FlxG_obj::mouse->screenY);
}


HX_DEFINE_DYNAMIC_FUNC0(ChickenState_obj,clickCoords,return )

Void ChickenState_obj::create( ){
{
		HX_STACK_FRAME("ChickenState","create",0x422fe06e,"ChickenState.create","ChickenState.hx",80,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (int)32),(::flixel::FlxG_obj::height - (int)64),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(81)
		this->chicken = _g;
		HX_STACK_LINE(82)
		this->chicken->loadGraphic(HX_CSTRING("assets/images/ChickenTemp.png"),true,(int)64,(int)64,true,null());
		HX_STACK_LINE(83)
		this->add(this->chicken);
		HX_STACK_LINE(84)
		this->super::create();
		HX_STACK_LINE(87)
		::flixel::ui::FlxButton btnMenu;		HX_STACK_VAR(btnMenu,"btnMenu");
		HX_STACK_LINE(88)
		::flixel::ui::FlxButton _g1 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_CSTRING("Main Menu"),this->clickMenu_dyn());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(88)
		btnMenu = _g1;
		HX_STACK_LINE(89)
		this->add(btnMenu);
	}
return null();
}


Void ChickenState_obj::destroy( ){
{
		HX_STACK_FRAME("ChickenState","destroy",0xbacff748,"ChickenState.destroy","ChickenState.hx",94,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(95)
		this->chicken->destroy();
		HX_STACK_LINE(96)
		this->super::destroy();
	}
return null();
}


Void ChickenState_obj::update( ){
{
		HX_STACK_FRAME("ChickenState","update",0x4d25ff7b,"ChickenState.update","ChickenState.hx",100,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		this->super::update();
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(103)
			if (((  ((this->justPressed())) ? bool((bool((this->clickCoords()->y < this->clickCoords()->x)) && bool((this->clickCoords()->y > (-(this->clickCoords()->x) + ::flixel::FlxG_obj::width))))) : bool(false) ))){
				HX_STACK_LINE(105)
				::flixel::FlxSprite _g = this->chicken;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(105)
				_g->set_x((_g->x + (int)32));
			}
			HX_STACK_LINE(108)
			if (((  ((this->justPressed())) ? bool((bool((this->clickCoords()->y > this->clickCoords()->x)) && bool((this->clickCoords()->y < (-(this->clickCoords()->x) + ::flixel::FlxG_obj::width))))) : bool(false) ))){
				HX_STACK_LINE(110)
				::flixel::FlxSprite _g = this->chicken;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(110)
				_g->set_x((_g->x - (int)32));
			}
			HX_STACK_LINE(113)
			if (((  ((this->justPressed())) ? bool((bool((this->clickCoords()->y > this->clickCoords()->x)) && bool((this->clickCoords()->y > (-(this->clickCoords()->x) + ::flixel::FlxG_obj::width))))) : bool(false) ))){
				HX_STACK_LINE(115)
				::flixel::FlxSprite _g = this->chicken;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(115)
				_g->set_y((_g->y + (int)32));
			}
			HX_STACK_LINE(118)
			if (((  ((this->justPressed())) ? bool((bool((this->clickCoords()->y < this->clickCoords()->x)) && bool((this->clickCoords()->y < (-(this->clickCoords()->x) + ::flixel::FlxG_obj::width))))) : bool(false) ))){
				HX_STACK_LINE(120)
				::flixel::FlxSprite _g = this->chicken;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(120)
				_g->set_y((_g->y - (int)32));
			}
		}
	}
return null();
}


Void ChickenState_obj::clickMenu( ){
{
		HX_STACK_FRAME("ChickenState","clickMenu",0x3b642bd5,"ChickenState.clickMenu","ChickenState.hx",127,0xb466b382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(127)
		::flixel::FlxState State = ::MenuState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(127)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ChickenState_obj,clickMenu,(void))


ChickenState_obj::ChickenState_obj()
{
}

void ChickenState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChickenState);
	HX_MARK_MEMBER_NAME(chicken,"chicken");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ChickenState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(chicken,"chicken");
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
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickMenu") ) { return clickMenu_dyn(); }
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

Dynamic ChickenState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"chicken") ) { chicken=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChickenState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("chicken"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ChickenState_obj,chicken),HX_CSTRING("chicken")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("chicken"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("pressed"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("clickCoords"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("clickMenu"),
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

