#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_OptnState
#include <OptnState.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
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
#ifndef INCLUDED_openfl__v2_display_MovieClip
#include <openfl/_v2/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_display_StageDisplayState
#include <openfl/display/StageDisplayState.h>
#endif

Void OptnState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("OptnState","new",0x074b9f08,"OptnState.new","OptnState.hx",14,0xa9ef1968)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(14)
	super::__construct(MaxSize);
}
;
	return null();
}

//OptnState_obj::~OptnState_obj() { }

Dynamic OptnState_obj::__CreateEmpty() { return  new OptnState_obj; }
hx::ObjectPtr< OptnState_obj > OptnState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< OptnState_obj > result = new OptnState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic OptnState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OptnState_obj > result = new OptnState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void OptnState_obj::create( ){
{
		HX_STACK_FRAME("OptnState","create",0x82783154,"OptnState.create","OptnState.hx",17,0xa9ef1968)
		HX_STACK_THIS(this)
		HX_STACK_LINE(18)
		::flixel::ui::FlxButton btnFullscreen;		HX_STACK_VAR(btnFullscreen,"btnFullscreen");
		HX_STACK_LINE(19)
		::flixel::ui::FlxButton _g = ::flixel::ui::FlxButton_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (int)40),(Float(::flixel::FlxG_obj::height) / Float((int)2)),HX_CSTRING("Fullscreen"),this->clickFullscreen_dyn());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(19)
		btnFullscreen = _g;
		HX_STACK_LINE(20)
		this->add(btnFullscreen);
		HX_STACK_LINE(22)
		::flixel::ui::FlxButton btnBack;		HX_STACK_VAR(btnBack,"btnBack");
		HX_STACK_LINE(23)
		::flixel::ui::FlxButton _g1 = ::flixel::ui::FlxButton_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (int)40),(::flixel::FlxG_obj::height - (int)100),HX_CSTRING("Back"),this->clickBack_dyn());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(23)
		btnBack = _g1;
		HX_STACK_LINE(24)
		this->add(btnBack);
	}
return null();
}


Void OptnState_obj::destroy( ){
{
		HX_STACK_FRAME("OptnState","destroy",0xb9ce6fa2,"OptnState.destroy","OptnState.hx",29,0xa9ef1968)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		this->super::destroy();
	}
return null();
}


Void OptnState_obj::update( ){
{
		HX_STACK_FRAME("OptnState","update",0x8d6e5061,"OptnState.update","OptnState.hx",34,0xa9ef1968)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		this->super::update();
	}
return null();
}


Void OptnState_obj::clickFullscreen( ){
{
		HX_STACK_FRAME("OptnState","clickFullscreen",0x5d8c0f4b,"OptnState.clickFullscreen","OptnState.hx",38,0xa9ef1968)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		::openfl::display::StageDisplayState _g = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_displayState();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		if (((_g == ::openfl::display::StageDisplayState_obj::NORMAL))){
			HX_STACK_LINE(41)
			::openfl::_v2::Lib_obj::get_current()->get_stage()->set_displayState(::openfl::display::StageDisplayState_obj::FULL_SCREEN);
		}
		else{
			HX_STACK_LINE(45)
			::openfl::_v2::Lib_obj::get_current()->get_stage()->set_displayState(::openfl::display::StageDisplayState_obj::NORMAL);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OptnState_obj,clickFullscreen,(void))

Void OptnState_obj::clickBack( ){
{
		HX_STACK_FRAME("OptnState","clickBack",0xc9ec8337,"OptnState.clickBack","OptnState.hx",51,0xa9ef1968)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		::flixel::FlxState State = ::MenuState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(51)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OptnState_obj,clickBack,(void))


OptnState_obj::OptnState_obj()
{
}

Dynamic OptnState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickBack") ) { return clickBack_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clickFullscreen") ) { return clickFullscreen_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OptnState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void OptnState_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("clickFullscreen"),
	HX_CSTRING("clickBack"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptnState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptnState_obj::__mClass,"__mClass");
};

#endif

Class OptnState_obj::__mClass;

void OptnState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("OptnState"), hx::TCanCast< OptnState_obj> ,sStaticFields,sMemberFields,
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

void OptnState_obj::__boot()
{
}

