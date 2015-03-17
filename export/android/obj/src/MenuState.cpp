#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_OptnState
#include <OptnState.h>
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
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
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

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",12,0xdfbcb22c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(12)
	super::__construct(MaxSize);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",15,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16)
		::flixel::text::FlxText titleTxt;		HX_STACK_VAR(titleTxt,"titleTxt");
		HX_STACK_LINE(17)
		::flixel::text::FlxText _g = ::flixel::text::FlxText_obj::__new((int)30,(int)30,(int)0,null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(17)
		titleTxt = _g;
		HX_STACK_LINE(18)
		titleTxt->set_wordWrap(false);
		HX_STACK_LINE(19)
		titleTxt->set_autoSize(true);
		HX_STACK_LINE(20)
		titleTxt->set_text(HX_CSTRING("A Man Walks Into A Bar"));
		HX_STACK_LINE(21)
		titleTxt->setFormat(null(),(int)42,(int)-1,null(),null(),null(),null());
		HX_STACK_LINE(22)
		Float _g1 = titleTxt->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(22)
		Float _g2 = (Float(_g1) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(22)
		Float _g3 = ((Float(::flixel::FlxG_obj::width) / Float((int)2)) - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(22)
		titleTxt->set_x(_g3);
		HX_STACK_LINE(23)
		this->add(titleTxt);
		HX_STACK_LINE(25)
		::flixel::ui::FlxButton btnPlay;		HX_STACK_VAR(btnPlay,"btnPlay");
		HX_STACK_LINE(26)
		::flixel::ui::FlxButton _g4 = ::flixel::ui::FlxButton_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (int)40),(Float(::flixel::FlxG_obj::height) / Float((int)2)),HX_CSTRING("Play"),this->clickPlay_dyn());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(26)
		btnPlay = _g4;
		HX_STACK_LINE(27)
		this->add(btnPlay);
		HX_STACK_LINE(29)
		::flixel::ui::FlxButton btnOptions;		HX_STACK_VAR(btnOptions,"btnOptions");
		HX_STACK_LINE(30)
		::flixel::ui::FlxButton _g5 = ::flixel::ui::FlxButton_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (int)40),((Float(::flixel::FlxG_obj::height) / Float((int)2)) + (int)60),HX_CSTRING("Options"),this->clickOptions_dyn());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(30)
		btnOptions = _g5;
		HX_STACK_LINE(31)
		this->add(btnOptions);
	}
return null();
}


Void MenuState_obj::destroy( ){
{
		HX_STACK_FRAME("MenuState","destroy",0xf9ac905e,"MenuState.destroy","MenuState.hx",36,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		this->super::destroy();
	}
return null();
}


Void MenuState_obj::update( ){
{
		HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",41,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		this->super::update();
	}
return null();
}


Void MenuState_obj::clickPlay( ){
{
		HX_STACK_FRAME("MenuState","clickPlay",0x5f6a9ec0,"MenuState.clickPlay","MenuState.hx",46,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		::flixel::FlxState State = ::PlayState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(46)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickPlay,(void))

Void MenuState_obj::clickOptions( ){
{
		HX_STACK_FRAME("MenuState","clickOptions",0xe3ab4a12,"MenuState.clickOptions","MenuState.hx",51,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		::flixel::FlxState State = ::OptnState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(51)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickOptions,(void))


MenuState_obj::MenuState_obj()
{
}

Dynamic MenuState_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"clickPlay") ) { return clickPlay_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clickOptions") ) { return clickOptions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("clickPlay"),
	HX_CSTRING("clickOptions"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MenuState"), hx::TCanCast< MenuState_obj> ,sStaticFields,sMemberFields,
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

void MenuState_obj::__boot()
{
}

