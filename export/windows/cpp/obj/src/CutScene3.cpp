#include <hxcpp.h>

#ifndef INCLUDED_CutScene3
#include <CutScene3.h>
#endif
#ifndef INCLUDED_SixtyNineState
#include <SixtyNineState.h>
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

Void CutScene3_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("CutScene3","new",0xeb7db9db,"CutScene3.new","CutScene3.hx",14,0x6bd179f5)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(14)
	super::__construct(MaxSize);
}
;
	return null();
}

//CutScene3_obj::~CutScene3_obj() { }

Dynamic CutScene3_obj::__CreateEmpty() { return  new CutScene3_obj; }
hx::ObjectPtr< CutScene3_obj > CutScene3_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< CutScene3_obj > result = new CutScene3_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic CutScene3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CutScene3_obj > result = new CutScene3_obj();
	result->__construct(inArgs[0]);
	return result;}

bool CutScene3_obj::justPressed( ){
	HX_STACK_FRAME("CutScene3","justPressed",0xc15f6a51,"CutScene3.justPressed","CutScene3.hx",26,0x6bd179f5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(26)
	return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(CutScene3_obj,justPressed,return )

Void CutScene3_obj::create( ){
{
		HX_STACK_FRAME("CutScene3","create",0x848a5c61,"CutScene3.create","CutScene3.hx",33,0x6bd179f5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		this->frame = (int)0;
		HX_STACK_LINE(35)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		this->f = _g;
		HX_STACK_LINE(36)
		::flixel::FlxSprite f1 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_CSTRING("assets/images/Cutscene3/cg1(1).png"));		HX_STACK_VAR(f1,"f1");
		HX_STACK_LINE(37)
		this->f->push(f1);
		HX_STACK_LINE(38)
		::flixel::FlxSprite f2 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_CSTRING("assets/images/Cutscene3/cg2(1).png"));		HX_STACK_VAR(f2,"f2");
		HX_STACK_LINE(39)
		this->f->push(f2);
		HX_STACK_LINE(40)
		::flixel::FlxSprite f3 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_CSTRING("assets/images/Cutscene3/cg3(1).png"));		HX_STACK_VAR(f3,"f3");
		HX_STACK_LINE(41)
		this->f->push(f3);
		HX_STACK_LINE(42)
		::flixel::FlxSprite f4 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_CSTRING("assets/images/Cutscene3/cg4(1).png"));		HX_STACK_VAR(f4,"f4");
		HX_STACK_LINE(43)
		this->f->push(f4);
		HX_STACK_LINE(44)
		::flixel::FlxSprite f5 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_CSTRING("assets/images/Cutscene3/cg5.png"));		HX_STACK_VAR(f5,"f5");
		HX_STACK_LINE(45)
		this->f->push(f5);
		HX_STACK_LINE(46)
		this->add(f1);
		HX_STACK_LINE(47)
		this->super::create();
	}
return null();
}


Void CutScene3_obj::update( ){
{
		HX_STACK_FRAME("CutScene3","update",0x8f807b6e,"CutScene3.update","CutScene3.hx",51,0x6bd179f5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		if ((this->justPressed())){
			HX_STACK_LINE(54)
			hx::AddEq(this->frame,(int)1);
			HX_STACK_LINE(55)
			if (((this->frame == (int)5))){
				HX_STACK_LINE(57)
				::flixel::FlxState State = ::SixtyNineState_obj::__new(null());		HX_STACK_VAR(State,"State");
				HX_STACK_LINE(57)
				::flixel::FlxG_obj::game->_requestedState = State;
			}
			else{
				HX_STACK_LINE(61)
				this->add(this->f->__get(this->frame).StaticCast< ::flixel::FlxSprite >());
			}
		}
		HX_STACK_LINE(65)
		this->super::update();
	}
return null();
}



CutScene3_obj::CutScene3_obj()
{
}

void CutScene3_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CutScene3);
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(f,"f");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CutScene3_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(f,"f");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CutScene3_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic CutScene3_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void CutScene3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("frame"));
	outFields->push(HX_CSTRING("f"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(CutScene3_obj,frame),HX_CSTRING("frame")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CutScene3_obj,f),HX_CSTRING("f")},
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
	HX_MARK_MEMBER_NAME(CutScene3_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CutScene3_obj::__mClass,"__mClass");
};

#endif

Class CutScene3_obj::__mClass;

void CutScene3_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("CutScene3"), hx::TCanCast< CutScene3_obj> ,sStaticFields,sMemberFields,
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

void CutScene3_obj::__boot()
{
}

