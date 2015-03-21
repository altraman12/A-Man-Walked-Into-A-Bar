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
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",15,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(15)
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
	HX_STACK_FRAME("PlayState","justPressed",0xfbf55b45,"PlayState.justPressed","PlayState.hx",26,0xb30d7781)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	bool returnVal = false;		HX_STACK_VAR(returnVal,"returnVal");
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		while((true)){
			HX_STACK_LINE(29)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(29)
				break;
			}
			HX_STACK_LINE(29)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(29)
			++(_g);
			HX_STACK_LINE(31)
			returnVal = (touch->_current == (int)2);
		}
	}
	HX_STACK_LINE(33)
	return returnVal;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,justPressed,return )

bool PlayState_obj::pressed( ){
	HX_STACK_FRAME("PlayState","pressed",0x8427fc91,"PlayState.pressed","PlayState.hx",40,0xb30d7781)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	bool returnVal = false;		HX_STACK_VAR(returnVal,"returnVal");
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(43)
		while((true)){
			HX_STACK_LINE(43)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(43)
				break;
			}
			HX_STACK_LINE(43)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(43)
			++(_g);
			HX_STACK_LINE(45)
			returnVal = (touch->_current > (int)0);
		}
	}
	HX_STACK_LINE(47)
	return returnVal;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,pressed,return )

bool PlayState_obj::justReleased( ){
	HX_STACK_FRAME("PlayState","justReleased",0x81908eba,"PlayState.justReleased","PlayState.hx",54,0xb30d7781)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	bool returnVal = false;		HX_STACK_VAR(returnVal,"returnVal");
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(57)
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(57)
		while((true)){
			HX_STACK_LINE(57)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(57)
				break;
			}
			HX_STACK_LINE(57)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(57)
			++(_g);
			HX_STACK_LINE(59)
			returnVal = (touch->_current == (int)-1);
		}
	}
	HX_STACK_LINE(61)
	return returnVal;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,justReleased,return )

::flixel::util::FlxPoint PlayState_obj::clickCoords( ){
	HX_STACK_FRAME("PlayState","clickCoords",0x00d447f5,"PlayState.clickCoords","PlayState.hx",68,0xb30d7781)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	::flixel::util::FlxPoint returnVal = ::flixel::util::FlxPoint_obj::__new(null(),null());		HX_STACK_VAR(returnVal,"returnVal");
	HX_STACK_LINE(71)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(72)
	{
		HX_STACK_LINE(72)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(72)
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(72)
		while((true)){
			HX_STACK_LINE(72)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(72)
				break;
			}
			HX_STACK_LINE(72)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(72)
			++(_g);
			HX_STACK_LINE(74)
			(i)++;
			HX_STACK_LINE(75)
			{
				HX_STACK_LINE(75)
				::flixel::util::FlxPoint _g2 = returnVal;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(75)
				_g2->set_x((_g2->x + touch->screenX));
			}
			HX_STACK_LINE(76)
			{
				HX_STACK_LINE(76)
				::flixel::util::FlxPoint _g2 = returnVal;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(76)
				_g2->set_y((_g2->y + touch->screenY));
			}
		}
	}
	HX_STACK_LINE(78)
	{
		HX_STACK_LINE(78)
		::flixel::util::FlxPoint _g = returnVal;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(78)
		_g->set_x((Float(_g->x) / Float(i)));
	}
	HX_STACK_LINE(79)
	{
		HX_STACK_LINE(79)
		::flixel::util::FlxPoint _g = returnVal;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(79)
		_g->set_y((Float(_g->y) / Float(i)));
	}
	HX_STACK_LINE(80)
	return returnVal;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clickCoords,return )

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",87,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(89)
			::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new((Float(::flixel::FlxG_obj::width) / Float((int)5)),(Float(::flixel::FlxG_obj::height) / Float((int)2)),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(89)
			this->player = _g;
			HX_STACK_LINE(90)
			this->player->loadGraphic(HX_CSTRING("assets/images/barwalker.png"),true,(int)64,(int)64,true,null());
			HX_STACK_LINE(91)
			this->add(this->player);
			HX_STACK_LINE(92)
			this->player->animation->add(HX_CSTRING("run"),Array_obj< int >::__new().Add((int)7).Add((int)8).Add((int)9).Add((int)10).Add((int)11).Add((int)12).Add((int)13),(int)30,true);
			HX_STACK_LINE(93)
			this->player->animation->add(HX_CSTRING("jump"),Array_obj< int >::__new().Add((int)14).Add((int)15).Add((int)16).Add((int)16).Add((int)17),(int)6,false);
			HX_STACK_LINE(94)
			this->player->animation->add(HX_CSTRING("slide"),Array_obj< int >::__new().Add((int)21),(int)30,false);
			HX_STACK_LINE(95)
			this->vel = (int)0;
			HX_STACK_LINE(96)
			this->acc = (int)0;
			HX_STACK_LINE(97)
			this->super::create();
			HX_STACK_LINE(98)
			this->run(null());
		}
		HX_STACK_LINE(101)
		{
		}
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",111,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		this->player->destroy();
		HX_STACK_LINE(113)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::run( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("PlayState","run",0xf8c2adba,"PlayState.run","PlayState.hx",118,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(118)
		this->player->animation->play(HX_CSTRING("run"),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,run,(void))

Void PlayState_obj::jump( ){
{
		HX_STACK_FRAME("PlayState","jump",0xac4b9f9f,"PlayState.jump","PlayState.hx",122,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(123)
		::flixel::util::FlxTimer t = ::flixel::util::FlxTimer_obj::__new((int)1,this->run_dyn(),(int)1);		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(124)
		this->player->animation->play(HX_CSTRING("jump"),null(),null());
		HX_STACK_LINE(125)
		this->vel = -373.33333333333331;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,jump,(void))

Void PlayState_obj::slide( ){
{
		HX_STACK_FRAME("PlayState","slide",0x3e854560,"PlayState.slide","PlayState.hx",129,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		::flixel::util::FlxTimer t = ::flixel::util::FlxTimer_obj::__new((int)1,this->run_dyn(),(int)1);		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(131)
		this->player->animation->play(HX_CSTRING("slide"),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,slide,(void))

Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",138,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(139)
		this->super::update();
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(141)
			::haxe::Log_obj::trace(this->player->y,hx::SourceInfo(HX_CSTRING("PlayState.hx"),141,HX_CSTRING("PlayState"),HX_CSTRING("update")));
			HX_STACK_LINE(142)
			if (((this->player->y > (Float(::flixel::FlxG_obj::height) / Float((int)2))))){
				HX_STACK_LINE(144)
				this->acc = 11.333333333333334;
				HX_STACK_LINE(145)
				::haxe::Log_obj::trace(HX_CSTRING("grav"),hx::SourceInfo(HX_CSTRING("PlayState.hx"),145,HX_CSTRING("PlayState"),HX_CSTRING("update")));
			}
			else{
				HX_STACK_LINE(147)
				if (((this->player->y < (Float(::flixel::FlxG_obj::height) / Float((int)2))))){
					HX_STACK_LINE(149)
					this->acc = (int)0;
					HX_STACK_LINE(150)
					this->vel = (int)0;
					HX_STACK_LINE(151)
					this->player->set_y((Float(::flixel::FlxG_obj::height) / Float((int)2)));
				}
			}
			HX_STACK_LINE(153)
			hx::AddEq(this->vel,this->acc);
			HX_STACK_LINE(154)
			{
				HX_STACK_LINE(154)
				::flixel::FlxSprite _g = this->player;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(154)
				_g->set_y((_g->y + this->vel));
			}
		}
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(157)
			if (((  ((this->justPressed())) ? bool((this->clickCoords()->y <= (Float(::flixel::FlxG_obj::height) / Float((int)2)))) : bool(false) ))){
				HX_STACK_LINE(159)
				this->jump();
			}
			HX_STACK_LINE(162)
			if (((  ((this->justPressed())) ? bool((this->clickCoords()->y > (Float(::flixel::FlxG_obj::height) / Float((int)2)))) : bool(false) ))){
				HX_STACK_LINE(164)
				this->slide();
			}
		}
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(acc,"acc");
	HX_MARK_MEMBER_NAME(vel,"vel");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(acc,"acc");
	HX_VISIT_MEMBER_NAME(vel,"vel");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"acc") ) { return acc; }
		if (HX_FIELD_EQ(inName,"vel") ) { return vel; }
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jump") ) { return jump_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"slide") ) { return slide_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
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

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"acc") ) { acc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vel") ) { vel=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("player"));
	outFields->push(HX_CSTRING("acc"));
	outFields->push(HX_CSTRING("vel"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,player),HX_CSTRING("player")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,acc),HX_CSTRING("acc")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,vel),HX_CSTRING("vel")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("player"),
	HX_CSTRING("acc"),
	HX_CSTRING("vel"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("pressed"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("clickCoords"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("run"),
	HX_CSTRING("jump"),
	HX_CSTRING("slide"),
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

