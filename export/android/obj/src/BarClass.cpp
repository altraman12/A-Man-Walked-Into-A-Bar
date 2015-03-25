#include <hxcpp.h>

#ifndef INCLUDED_BarClass
#include <BarClass.h>
#endif
#ifndef INCLUDED_ChickenState
#include <ChickenState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
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
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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

Void BarClass_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::PlayState level,Dynamic SimpleGraphic)
{
HX_STACK_FRAME("BarClass","new",0xd1bdbcf7,"BarClass.new","BarClass.hx",27,0xd42b4e59)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(level,"level")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(28)
	super::__construct(X,Y,SimpleGraphic);
	HX_STACK_LINE(29)
	this->loadGraphic(HX_CSTRING("assets/images/Stage1/bar.png"),null(),null(),null(),null(),null());
	HX_STACK_LINE(30)
	Float _g = level->player->get_height();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(30)
	Float _g1 = (Float(((int)2 * ::flixel::FlxG_obj::height)) / Float(_g));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(30)
	this->barRange = _g1;
	HX_STACK_LINE(31)
	Float _g2 = ::Math_obj::random();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(31)
	Float _g3 = (_g2 * ::flixel::FlxG_obj::height);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(31)
	Float _g4 = (Float(_g3) / Float(this->barRange));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(31)
	Float _g5 = (_g4 + (((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (Float(::flixel::FlxG_obj::height) / Float(this->barRange)))));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(31)
	this->set_y(_g5);
	HX_STACK_LINE(32)
	this->state = level;
	HX_STACK_LINE(33)
	this->firstPass = true;
	HX_STACK_LINE(34)
	level->bars->add(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(35)
	if (((this->x > this->state->alcoholBar->x))){
		HX_STACK_LINE(37)
		this->destroy();
	}
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
		HX_STACK_FRAME("BarClass","update",0x1f6651d2,"BarClass.update","BarClass.hx",42,0xd42b4e59)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		if ((this->firstPass)){
			HX_STACK_LINE(45)
			if (((this->x <= (Float(::flixel::FlxG_obj::width) / Float((int)2))))){
				HX_STACK_LINE(47)
				int _g = this->state->roundToNearest(::flixel::FlxG_obj::width,(int)160);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(47)
				::BarClass _g1 = ::BarClass_obj::__new(_g,(int)0,this->state,null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(47)
				this->state->add(_g1);
				HX_STACK_LINE(48)
				this->firstPass = false;
			}
		}
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			::BarClass _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			_g->set_x((_g->x - this->state->speed));
		}
		HX_STACK_LINE(53)
		Float _g2 = this->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(53)
		Float _g3 = ((int)0 - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(53)
		if (((this->x <= _g3))){
			HX_STACK_LINE(55)
			this->destroy();
		}
		HX_STACK_LINE(58)
		if ((::flixel::FlxG_obj::overlap(hx::ObjectPtr<OBJ_>(this),this->state->player,null(),null()))){
			HX_STACK_LINE(60)
			this->collide();
		}
	}
return null();
}


Void BarClass_obj::gameOver( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("BarClass","gameOver",0xc0e0a26f,"BarClass.gameOver","BarClass.hx",66,0xd42b4e59)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(66)
		::flixel::FlxState State = ::ChickenState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(66)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BarClass_obj,gameOver,(void))

Void BarClass_obj::collide( ){
{
		HX_STACK_FRAME("BarClass","collide",0xa9b53395,"BarClass.collide","BarClass.hx",72,0xd42b4e59)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		if ((::flixel::util::FlxCollision_obj::pixelPerfectCheck(hx::ObjectPtr<OBJ_>(this),this->state->player,(int)255,null()))){
			HX_STACK_LINE(74)
			::flixel::util::FlxTimer t = ::flixel::util::FlxTimer_obj::__new((int)1,this->gameOver_dyn(),(int)1);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(75)
			this->state->player->animation->play(HX_CSTRING("die"),true,(int)0);
			HX_STACK_LINE(76)
			this->state->dead = true;
			HX_STACK_LINE(77)
			this->state->player->set_x(this->x);
			HX_STACK_LINE(78)
			this->state->speed = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BarClass_obj,collide,(void))


BarClass_obj::BarClass_obj()
{
}

void BarClass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BarClass);
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(barRange,"barRange");
	HX_MARK_MEMBER_NAME(firstPass,"firstPass");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BarClass_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(barRange,"barRange");
	HX_VISIT_MEMBER_NAME(firstPass,"firstPass");
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
	case 7:
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barRange") ) { return barRange; }
		if (HX_FIELD_EQ(inName,"gameOver") ) { return gameOver_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstPass") ) { return firstPass; }
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
		if (HX_FIELD_EQ(inName,"barRange") ) { barRange=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstPass") ) { firstPass=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BarClass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("barRange"));
	outFields->push(HX_CSTRING("firstPass"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::PlayState*/ ,(int)offsetof(BarClass_obj,state),HX_CSTRING("state")},
	{hx::fsFloat,(int)offsetof(BarClass_obj,barRange),HX_CSTRING("barRange")},
	{hx::fsBool,(int)offsetof(BarClass_obj,firstPass),HX_CSTRING("firstPass")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("state"),
	HX_CSTRING("barRange"),
	HX_CSTRING("firstPass"),
	HX_CSTRING("update"),
	HX_CSTRING("gameOver"),
	HX_CSTRING("collide"),
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

