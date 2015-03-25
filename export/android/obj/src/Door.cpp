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
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void Door_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::GhostState level,Dynamic SimpleGraphic)
{
HX_STACK_FRAME("Door","new",0x5d3b9d80,"Door.new","Door.hx",11,0xa24891f0)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(level,"level")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(14)
	this->firstPass = true;
	HX_STACK_LINE(18)
	super::__construct(X,Y,SimpleGraphic);
	HX_STACK_LINE(19)
	this->loadGraphic(HX_CSTRING("assets/images/Stage3/door.png"),true,(int)175,(int)250,false,null());
	HX_STACK_LINE(20)
	this->animation->add(HX_CSTRING("open"),Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5),(int)30,false);
	HX_STACK_LINE(21)
	this->animation->add(HX_CSTRING("close"),Array_obj< int >::__new().Add((int)4).Add((int)3).Add((int)2).Add((int)1).Add((int)0),(int)30,false);
	HX_STACK_LINE(22)
	this->state = level;
}
;
	return null();
}

//Door_obj::~Door_obj() { }

Dynamic Door_obj::__CreateEmpty() { return  new Door_obj; }
hx::ObjectPtr< Door_obj > Door_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::GhostState level,Dynamic SimpleGraphic)
{  hx::ObjectPtr< Door_obj > result = new Door_obj();
	result->__construct(__o_X,__o_Y,level,SimpleGraphic);
	return result;}

Dynamic Door_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Door_obj > result = new Door_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Door_obj::update( ){
{
		HX_STACK_FRAME("Door","update",0x8a62ace9,"Door.update","Door.hx",28,0xa24891f0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		if ((this->firstPass)){
			HX_STACK_LINE(31)
			if ((this->isOnScreen(null()))){
				HX_STACK_LINE(33)
				::Door _g = ::Door_obj::__new(((this->x + (int)465) + (int)175),(Float(((::flixel::FlxG_obj::height - (int)280))) / Float((int)2)),this->state,null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(33)
				this->state->doors->add(_g);
				HX_STACK_LINE(35)
				this->firstPass = false;
			}
		}
		HX_STACK_LINE(39)
		{
			HX_STACK_LINE(39)
			::Door _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(39)
			_g->set_x((_g->x - this->state->speed));
		}
		HX_STACK_LINE(40)
		Float _g1 = this->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(40)
		Float _g2 = ((int)0 - _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(40)
		if (((this->x <= _g2))){
			HX_STACK_LINE(42)
			this->destroy();
		}
	}
return null();
}


Void Door_obj::open( ){
{
		HX_STACK_FRAME("Door","open",0x379fb2aa,"Door.open","Door.hx",47,0xa24891f0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		::haxe::Log_obj::trace(HX_CSTRING("open"),hx::SourceInfo(HX_CSTRING("Door.hx"),48,HX_CSTRING("Door"),HX_CSTRING("open")));
		HX_STACK_LINE(49)
		this->animation->play(HX_CSTRING("open"),true,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Door_obj,open,(void))

Void Door_obj::close( ){
{
		HX_STACK_FRAME("Door","close",0x88b06cd8,"Door.close","Door.hx",54,0xa24891f0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		this->animation->play(HX_CSTRING("close"),true,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Door_obj,close,(void))


Door_obj::Door_obj()
{
}

void Door_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Door);
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(firstPass,"firstPass");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Door_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(firstPass,"firstPass");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Door_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"open") ) { return open_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstPass") ) { return firstPass; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Door_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::GhostState >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstPass") ) { firstPass=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Door_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("firstPass"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::GhostState*/ ,(int)offsetof(Door_obj,state),HX_CSTRING("state")},
	{hx::fsBool,(int)offsetof(Door_obj,firstPass),HX_CSTRING("firstPass")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("state"),
	HX_CSTRING("firstPass"),
	HX_CSTRING("update"),
	HX_CSTRING("open"),
	HX_CSTRING("close"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Door_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Door_obj::__mClass,"__mClass");
};

#endif

Class Door_obj::__mClass;

void Door_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Door"), hx::TCanCast< Door_obj> ,sStaticFields,sMemberFields,
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

void Door_obj::__boot()
{
}

