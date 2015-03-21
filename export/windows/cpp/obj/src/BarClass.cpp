#include <hxcpp.h>

#ifndef INCLUDED_BarClass
#include <BarClass.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void BarClass_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::PlayState level,Dynamic SimpleGraphic)
{
HX_STACK_FRAME("BarClass","new",0xd1bdbcf7,"BarClass.new","BarClass.hx",20,0xd42b4e59)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(level,"level")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(23)
	this->barRange = (int)12;
	HX_STACK_LINE(27)
	super::__construct(X,Y,SimpleGraphic);
	HX_STACK_LINE(28)
	this->loadGraphic(HX_CSTRING("assets/images/bar.png"),null(),null(),null(),null(),null());
	HX_STACK_LINE(29)
	Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(29)
	Float _g1 = (_g * ::flixel::FlxG_obj::height);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(29)
	Float _g2 = (Float(_g1) / Float(this->barRange));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(29)
	Float _g3 = (_g2 + (((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (Float(::flixel::FlxG_obj::height) / Float(this->barRange)))));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(29)
	this->set_y(_g3);
	HX_STACK_LINE(30)
	this->state = level;
}
;
	return null();
}

//BarClass_obj::~BarClass_obj() { }

Dynamic BarClass_obj::__CreateEmpty() { return  new BarClass_obj; }
hx::ObjectPtr< BarClass_obj > BarClass_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::PlayState level,Dynamic SimpleGraphic)
{  hx::ObjectPtr< BarClass_obj > result = new BarClass_obj();
	result->__construct(__o_X,__o_Y,level,SimpleGraphic);
	return result;}

Dynamic BarClass_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BarClass_obj > result = new BarClass_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void BarClass_obj::update( ){
{
		HX_STACK_FRAME("BarClass","update",0x1f6651d2,"BarClass.update","BarClass.hx",34,0xd42b4e59)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			::BarClass _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(35)
			_g->set_x((_g->x - this->state->speed));
		}
		HX_STACK_LINE(36)
		if (((this->x <= (int)0))){
			HX_STACK_LINE(38)
			this->set_x(::flixel::FlxG_obj::width);
			HX_STACK_LINE(39)
			Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(39)
			Float _g1 = (_g * ::flixel::FlxG_obj::height);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(39)
			Float _g2 = (Float(_g1) / Float((int)4));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(39)
			Float _g3 = (_g2 + (Float(::flixel::FlxG_obj::height) / Float((int)4)));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(39)
			this->set_y(_g3);
		}
	}
return null();
}



BarClass_obj::BarClass_obj()
{
}

void BarClass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BarClass);
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(barRange,"barRange");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BarClass_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(barRange,"barRange");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BarClass_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barRange") ) { return barRange; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BarClass_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::PlayState >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barRange") ) { barRange=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BarClass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("barRange"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::PlayState*/ ,(int)offsetof(BarClass_obj,state),HX_CSTRING("state")},
	{hx::fsInt,(int)offsetof(BarClass_obj,barRange),HX_CSTRING("barRange")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("state"),
	HX_CSTRING("barRange"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BarClass_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BarClass_obj::__mClass,"__mClass");
};

#endif

Class BarClass_obj::__mClass;

void BarClass_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("BarClass"), hx::TCanCast< BarClass_obj> ,sStaticFields,sMemberFields,
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

void BarClass_obj::__boot()
{
}

