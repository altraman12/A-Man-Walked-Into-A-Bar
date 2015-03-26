#include <hxcpp.h>

#ifndef INCLUDED_CutScene3
#include <CutScene3.h>
#endif
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
	HX_STACK_LINE(21)
	super::__construct(X,Y,SimpleGraphic);
	HX_STACK_LINE(22)
	this->state = level;
	HX_STACK_LINE(23)
	if (((this->state->score == (int)1))){
		HX_STACK_LINE(25)
		this->loadGraphic(HX_CSTRING("assets/images/Stage3/789 door.png"),true,(int)175,(int)250,false,null());
	}
	else{
		HX_STACK_LINE(29)
		this->loadGraphic(HX_CSTRING("assets/images/Stage3/door.png"),true,(int)175,(int)250,false,null());
	}
	HX_STACK_LINE(31)
	this->animation->add(HX_CSTRING("open1"),Array_obj< int >::__new().Add((int)1),(int)30,false);
	HX_STACK_LINE(32)
	this->animation->add(HX_CSTRING("open2"),Array_obj< int >::__new().Add((int)2),(int)30,false);
	HX_STACK_LINE(33)
	this->animation->add(HX_CSTRING("open3"),Array_obj< int >::__new().Add((int)3),(int)30,false);
	HX_STACK_LINE(34)
	this->animation->add(HX_CSTRING("open4"),Array_obj< int >::__new().Add((int)4),(int)30,false);
	HX_STACK_LINE(35)
	this->animation->add(HX_CSTRING("open5"),Array_obj< int >::__new().Add((int)5),(int)30,false);
	HX_STACK_LINE(37)
	::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new((this->x + 87.5),(this->y + (int)25),HX_CSTRING("assets/images/Stage3/surprised.png"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(37)
	this->surprised = _g;
	HX_STACK_LINE(38)
	::flixel::FlxSprite _g1 = ::flixel::FlxSprite_obj::__new((this->x + 87.5),(this->y + (int)25),HX_CSTRING("assets/images/Stage3/x.png"));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(38)
	this->ex = _g1;
	HX_STACK_LINE(40)
	this->animation->add(HX_CSTRING("close5"),Array_obj< int >::__new().Add((int)4).Add((int)3).Add((int)2).Add((int)1).Add((int)0),(int)30,false);
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
		HX_STACK_FRAME("Door","update",0x8a62ace9,"Door.update","Door.hx",46,0xa24891f0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->surprised->set_x((this->x + 80.));
		HX_STACK_LINE(48)
		this->ex->set_x(this->x);
		HX_STACK_LINE(50)
		if ((this->firstPass)){
			HX_STACK_LINE(52)
			if ((this->isOnScreen(null()))){
				HX_STACK_LINE(54)
				if (((this->state->doors->members->__Field(HX_CSTRING("length"),true) == (int)150))){
					HX_STACK_LINE(56)
					int _g = ::Math_obj::round(128.);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(56)
					this->state->ghost->loadGraphic(HX_CSTRING("assets/images/Stage3/ascension.jpg"),true,_g,(int)720,false,null());
					HX_STACK_LINE(57)
					this->state->ghost->set_y((int)0);
					HX_STACK_LINE(58)
					this->state->ghost->animation->add(HX_CSTRING("live"),Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)3),(int)30,false);
					HX_STACK_LINE(59)
					this->state->ghost->animation->play(HX_CSTRING("live"),true,(int)3);
					HX_STACK_LINE(60)
					{
						HX_STACK_LINE(60)
						::flixel::FlxState State = ::CutScene3_obj::__new(null());		HX_STACK_VAR(State,"State");
						HX_STACK_LINE(60)
						::flixel::FlxG_obj::game->_requestedState = State;
					}
				}
				else{
					HX_STACK_LINE(64)
					::Door _g1 = ::Door_obj::__new(((this->x + (int)465) + (int)175),(Float(((::flixel::FlxG_obj::height - (int)280))) / Float((int)2)),this->state,null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(64)
					this->subdoor = _g1;
				}
				HX_STACK_LINE(66)
				this->state->doors->add(this->subdoor);
				HX_STACK_LINE(67)
				this->firstPass = false;
			}
		}
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			::Door _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(71)
			_g->set_x((_g->x - this->state->speed));
		}
		HX_STACK_LINE(72)
		Float _g2 = this->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(72)
		Float _g3 = ((int)0 - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(72)
		if (((this->x <= _g3))){
			HX_STACK_LINE(74)
			this->destroy();
			HX_STACK_LINE(75)
			this->surprised->destroy();
			HX_STACK_LINE(76)
			this->ex->destroy();
		}
	}
return null();
}


Void Door_obj::surprise( ){
{
		HX_STACK_FRAME("Door","surprise",0x824fa7c9,"Door.surprise","Door.hx",82,0xa24891f0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		this->state->add(this->surprised);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Door_obj,surprise,(void))

Void Door_obj::xOut( ){
{
		HX_STACK_FRAME("Door","xOut",0x3d79a1d6,"Door.xOut","Door.hx",87,0xa24891f0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		this->state->add(this->ex);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Door_obj,xOut,(void))

Void Door_obj::open( ){
{
		HX_STACK_FRAME("Door","open",0x379fb2aa,"Door.open","Door.hx",91,0xa24891f0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(92)
		::haxe::Log_obj::trace(HX_CSTRING("open"),hx::SourceInfo(HX_CSTRING("Door.hx"),92,HX_CSTRING("Door"),HX_CSTRING("open")));
		HX_STACK_LINE(93)
		this->animation->play(HX_CSTRING("open"),true,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Door_obj,open,(void))

Void Door_obj::close( ){
{
		HX_STACK_FRAME("Door","close",0x88b06cd8,"Door.close","Door.hx",98,0xa24891f0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
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
	HX_MARK_MEMBER_NAME(subdoor,"subdoor");
	HX_MARK_MEMBER_NAME(surprised,"surprised");
	HX_MARK_MEMBER_NAME(ex,"ex");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Door_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(firstPass,"firstPass");
	HX_VISIT_MEMBER_NAME(subdoor,"subdoor");
	HX_VISIT_MEMBER_NAME(surprised,"surprised");
	HX_VISIT_MEMBER_NAME(ex,"ex");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Door_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ex") ) { return ex; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xOut") ) { return xOut_dyn(); }
		if (HX_FIELD_EQ(inName,"open") ) { return open_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"subdoor") ) { return subdoor; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"surprise") ) { return surprise_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstPass") ) { return firstPass; }
		if (HX_FIELD_EQ(inName,"surprised") ) { return surprised; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Door_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ex") ) { ex=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::GhostState >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"subdoor") ) { subdoor=inValue.Cast< ::Door >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstPass") ) { firstPass=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"surprised") ) { surprised=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Door_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("firstPass"));
	outFields->push(HX_CSTRING("subdoor"));
	outFields->push(HX_CSTRING("surprised"));
	outFields->push(HX_CSTRING("ex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::GhostState*/ ,(int)offsetof(Door_obj,state),HX_CSTRING("state")},
	{hx::fsBool,(int)offsetof(Door_obj,firstPass),HX_CSTRING("firstPass")},
	{hx::fsObject /*::Door*/ ,(int)offsetof(Door_obj,subdoor),HX_CSTRING("subdoor")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Door_obj,surprised),HX_CSTRING("surprised")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Door_obj,ex),HX_CSTRING("ex")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("state"),
	HX_CSTRING("firstPass"),
	HX_CSTRING("subdoor"),
	HX_CSTRING("surprised"),
	HX_CSTRING("ex"),
	HX_CSTRING("update"),
	HX_CSTRING("surprise"),
	HX_CSTRING("xOut"),
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

