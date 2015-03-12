#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",13,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(13)
	super::__construct(MaxSize);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

bool PlayState_obj::justPressed( ){
	HX_STACK_FRAME("PlayState","justPressed",0xfbf55b45,"PlayState.justPressed","PlayState.hx",20,0xb30d7781)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	bool returnVal = false;		HX_STACK_VAR(returnVal,"returnVal");
	HX_STACK_LINE(23)
	{
		HX_STACK_LINE(23)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(23)
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(23)
		while((true)){
			HX_STACK_LINE(23)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(23)
				break;
			}
			HX_STACK_LINE(23)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(23)
			++(_g);
			HX_STACK_LINE(25)
			returnVal = (touch->_current == (int)2);
		}
	}
	HX_STACK_LINE(27)
	return returnVal;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,justPressed,return )

bool PlayState_obj::pressed( ){
	HX_STACK_FRAME("PlayState","pressed",0x8427fc91,"PlayState.pressed","PlayState.hx",34,0xb30d7781)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	bool returnVal = false;		HX_STACK_VAR(returnVal,"returnVal");
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(37)
		while((true)){
			HX_STACK_LINE(37)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(37)
				break;
			}
			HX_STACK_LINE(37)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(37)
			++(_g);
			HX_STACK_LINE(39)
			returnVal = (touch->_current > (int)0);
		}
	}
	HX_STACK_LINE(41)
	return returnVal;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,pressed,return )

bool PlayState_obj::justReleased( ){
	HX_STACK_FRAME("PlayState","justReleased",0x81908eba,"PlayState.justReleased","PlayState.hx",48,0xb30d7781)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	bool returnVal = false;		HX_STACK_VAR(returnVal,"returnVal");
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(51)
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(51)
		while((true)){
			HX_STACK_LINE(51)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(51)
				break;
			}
			HX_STACK_LINE(51)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(51)
			++(_g);
			HX_STACK_LINE(53)
			returnVal = (touch->_current == (int)-1);
		}
	}
	HX_STACK_LINE(55)
	return returnVal;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,justReleased,return )

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",63,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(63)
		this->super::create();
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",72,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",80,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		this->super::update();
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("justPressed"),
	HX_CSTRING("pressed"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
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

void PlayState_obj::__boot()
{
}

