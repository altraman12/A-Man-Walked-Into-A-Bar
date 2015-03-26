#include <hxcpp.h>

#ifndef INCLUDED_CutScene2
#include <CutScene2.h>
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

Void CutScene2_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("CutScene2","new",0x5817255a,"CutScene2.new","CutScene2.hx",14,0x6b284356)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(14)
	super::__construct(MaxSize);
}
;
	return null();
}

//CutScene2_obj::~CutScene2_obj() { }

Dynamic CutScene2_obj::__CreateEmpty() { return  new CutScene2_obj; }
hx::ObjectPtr< CutScene2_obj > CutScene2_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< CutScene2_obj > result = new CutScene2_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic CutScene2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CutScene2_obj > result = new CutScene2_obj();
	result->__construct(inArgs[0]);
	return result;}

bool CutScene2_obj::justPressed( ){
	HX_STACK_FRAME("CutScene2","justPressed",0x7b9eecd0,"CutScene2.justPressed","CutScene2.hx",26,0x6b284356)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(26)
	return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(CutScene2_obj,justPressed,return )

Void CutScene2_obj::create( ){
{
		HX_STACK_FRAME("CutScene2","create",0x4b57ea42,"CutScene2.create","CutScene2.hx",33,0x6b284356)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		this->frame = (int)0;
		HX_STACK_LINE(35)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		this->f = _g;
		HX_STACK_LINE(36)
		::flixel::FlxSprite f5 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_CSTRING("assets/images/Cutscene2/cg5(1).jpg"));		HX_STACK_VAR(f5,"f5");
		HX_STACK_LINE(37)
		this->f->push(f5);
		HX_STACK_LINE(38)
		this->add(f5);
		HX_STACK_LINE(39)
		this->super::create();
	}
return null();
}


Void CutScene2_obj::update( ){
{
		HX_STACK_FRAME("CutScene2","update",0x564e094f,"CutScene2.update","CutScene2.hx",43,0x6b284356)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		if ((this->justPressed())){
			HX_STACK_LINE(46)
			::flixel::FlxState State = ::GhostState_obj::__new(null());		HX_STACK_VAR(State,"State");
			HX_STACK_LINE(46)
			::flixel::FlxG_obj::game->_requestedState = State;
		}
		HX_STACK_LINE(49)
		this->super::update();
	}
return null();
}



CutScene2_obj::CutScene2_obj()
{
}

void CutScene2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CutScene2);
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(f,"f");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CutScene2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(f,"f");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CutScene2_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { return f; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CutScene2_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CutScene2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("frame"));
	outFields->push(HX_CSTRING("f"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(CutScene2_obj,frame),HX_CSTRING("frame")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CutScene2_obj,f),HX_CSTRING("f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("justPressed"),
	HX_CSTRING("frame"),
	HX_CSTRING("f"),
	HX_CSTRING("create"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CutScene2_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CutScene2_obj::__mClass,"__mClass");
};

#endif

Class CutScene2_obj::__mClass;

void CutScene2_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("CutScene2"), hx::TCanCast< CutScene2_obj> ,sStaticFields,sMemberFields,
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

void CutScene2_obj::__boot()
{
}

