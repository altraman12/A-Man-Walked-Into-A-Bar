#include <hxcpp.h>

#ifndef INCLUDED_CutScene3Lose
#include <CutScene3Lose.h>
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
#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#include <flixel/addons/display/FlxBackdrop.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
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

Void GhostState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("GhostState","new",0x944af654,"GhostState.new","GhostState.hx",15,0x1e832f9c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(32)
	this->time = (int)1800;
	HX_STACK_LINE(30)
	this->score = (int)150;
	HX_STACK_LINE(29)
	this->doorOpen = false;
	HX_STACK_LINE(28)
	this->playDoor = false;
	HX_STACK_LINE(27)
	this->doorAnimIndex = (int)0;
	HX_STACK_LINE(26)
	this->doorIndex = (int)0;
	HX_STACK_LINE(25)
	this->doneWithThisDoor = false;
	HX_STACK_LINE(24)
	this->knockCount = (int)0;
	HX_STACK_LINE(22)
	this->speed = (int)0;
	HX_STACK_LINE(15)
	super::__construct(MaxSize);
}
;
	return null();
}

//GhostState_obj::~GhostState_obj() { }

Dynamic GhostState_obj::__CreateEmpty() { return  new GhostState_obj; }
hx::ObjectPtr< GhostState_obj > GhostState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< GhostState_obj > result = new GhostState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic GhostState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GhostState_obj > result = new GhostState_obj();
	result->__construct(inArgs[0]);
	return result;}

bool GhostState_obj::justPressed( ){
	HX_STACK_FRAME("GhostState","justPressed",0xc7e347ca,"GhostState.justPressed","GhostState.hx",45,0x1e832f9c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(45)
	return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(GhostState_obj,justPressed,return )

bool GhostState_obj::pressed( ){
	HX_STACK_FRAME("GhostState","pressed",0xe69a0296,"GhostState.pressed","GhostState.hx",59,0x1e832f9c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	return (::flixel::FlxG_obj::mouse->_leftButton->current > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(GhostState_obj,pressed,return )

bool GhostState_obj::justReleased( ){
	HX_STACK_FRAME("GhostState","justReleased",0x25d19695,"GhostState.justReleased","GhostState.hx",73,0x1e832f9c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(73)
	return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
}


HX_DEFINE_DYNAMIC_FUNC0(GhostState_obj,justReleased,return )

::flixel::util::FlxPoint GhostState_obj::clickCoords( ){
	HX_STACK_FRAME("GhostState","clickCoords",0xccc2347a,"GhostState.clickCoords","GhostState.hx",92,0x1e832f9c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	return ::flixel::util::FlxPoint_obj::__new(::flixel::FlxG_obj::mouse->screenX,::flixel::FlxG_obj::mouse->screenY);
}


HX_DEFINE_DYNAMIC_FUNC0(GhostState_obj,clickCoords,return )

Void GhostState_obj::create( ){
{
		HX_STACK_FRAME("GhostState","create",0x92a57188,"GhostState.create","GhostState.hx",97,0x1e832f9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		::flixel::addons::display::FlxBackdrop _g = ::flixel::addons::display::FlxBackdrop_obj::__new(HX_CSTRING("assets/images/Stage3/hall wall.png"),(int)0,(int)0,true,false);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(98)
		this->hall = _g;
		HX_STACK_LINE(99)
		this->add(this->hall);
		HX_STACK_LINE(101)
		::flixel::group::FlxTypedGroup _g1 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(101)
		this->doors = _g1;
		HX_STACK_LINE(102)
		this->add(this->doors);
		HX_STACK_LINE(104)
		::flixel::text::FlxText _g2 = ::flixel::text::FlxText_obj::__new((Float(::flixel::FlxG_obj::width) / Float((int)2)),(int)0,(int)0,HX_CSTRING("150"),(int)20,true);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(104)
		this->scoreText = _g2;
		HX_STACK_LINE(105)
		this->add(this->scoreText);
		HX_STACK_LINE(107)
		::flixel::text::FlxText _g3 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)0,(HX_CSTRING("") + (int)1800),(int)20,true);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(107)
		this->timeText = _g3;
		HX_STACK_LINE(108)
		this->add(this->timeText);
		HX_STACK_LINE(113)
		::Door _g4 = ::Door_obj::__new((((Float(((((::flixel::FlxG_obj::width - (int)250) - 87.5) - (int)10))) / Float((int)2)) + (int)465) + (int)175),(Float(((::flixel::FlxG_obj::height - (int)280))) / Float((int)2)),hx::ObjectPtr<OBJ_>(this),HX_CSTRING("assets/images/Stage3/door.png"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(113)
		this->doors->add(_g4);
		HX_STACK_LINE(116)
		::flixel::FlxSprite _g5 = ::flixel::FlxSprite_obj::__new((Float(::flixel::FlxG_obj::width) / Float((int)2)),(Float(::flixel::FlxG_obj::height) / Float((int)2)),HX_CSTRING("assets/images/Stage3/chicken ghost.png"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(116)
		this->ghost = _g5;
		HX_STACK_LINE(117)
		this->ghost->loadGraphic(HX_CSTRING("assets/images/Stage3/chicken ghost.png"),true,(int)75,(int)100,null(),null());
		HX_STACK_LINE(118)
		this->ghost->animation->add(HX_CSTRING("right"),Array_obj< int >::__new().Add((int)0),(int)30,true);
		HX_STACK_LINE(119)
		this->ghost->animation->add(HX_CSTRING("forward"),Array_obj< int >::__new().Add((int)1),(int)30,true);
		HX_STACK_LINE(120)
		this->ghost->animation->add(HX_CSTRING("back"),Array_obj< int >::__new().Add((int)2),(int)30,true);
		HX_STACK_LINE(121)
		this->add(this->ghost);
		HX_STACK_LINE(123)
		this->speed = (int)0;
		HX_STACK_LINE(124)
		this->super::create();
		HX_STACK_LINE(126)
		Array< ::Dynamic > _g6 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(126)
		this->knock = _g6;
		HX_STACK_LINE(127)
		::flixel::text::FlxText _g7 = ::flixel::text::FlxText_obj::__new((this->ghost->x + (int)25),(this->ghost->y - (int)35),(int)-1,HX_CSTRING("*knock*"),(int)20,null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(127)
		this->knock->push(_g7);
		HX_STACK_LINE(128)
		::flixel::text::FlxText _g8 = ::flixel::text::FlxText_obj::__new((this->ghost->x + (int)25),(this->ghost->y - (int)85),(int)-1,HX_CSTRING("*knock*"),(int)20,null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(128)
		this->knock->push(_g8);
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			int _g9 = (int)0;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(129)
			Array< ::Dynamic > _g11 = this->knock;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(129)
			while((true)){
				HX_STACK_LINE(129)
				if ((!(((_g9 < _g11->length))))){
					HX_STACK_LINE(129)
					break;
				}
				HX_STACK_LINE(129)
				::flixel::text::FlxText member = _g11->__get(_g9).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(member,"member");
				HX_STACK_LINE(129)
				++(_g9);
				HX_STACK_LINE(131)
				member->set_color((int)0);
				HX_STACK_LINE(132)
				this->add(member);
				HX_STACK_LINE(133)
				member->kill();
			}
		}
		HX_STACK_LINE(136)
		this->nextDoor();
	}
return null();
}


Void GhostState_obj::nextDoor( ){
{
		HX_STACK_FRAME("GhostState","nextDoor",0x5e515d8d,"GhostState.nextDoor","GhostState.hx",140,0x1e832f9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		this->inTransit = true;
		HX_STACK_LINE(142)
		if (((this->ghost->x <= this->doors->members->__GetItem(this->doorIndex)->__Field(HX_CSTRING("x"),true)))){
			HX_STACK_LINE(144)
			this->speed = (int)10;
			HX_STACK_LINE(145)
			this->ghost->animation->play(HX_CSTRING("right"),null(),null());
		}
		else{
			HX_STACK_LINE(149)
			this->speed = (int)0;
			HX_STACK_LINE(150)
			this->inTransit = false;
			HX_STACK_LINE(151)
			(this->doorIndex)++;
			HX_STACK_LINE(152)
			this->ghost->animation->play(HX_CSTRING("forward"),null(),null());
		}
		HX_STACK_LINE(154)
		this->doorOpen = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GhostState_obj,nextDoor,(void))

Void GhostState_obj::update( ){
{
		HX_STACK_FRAME("GhostState","update",0x9d9b9095,"GhostState.update","GhostState.hx",158,0x1e832f9c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(160)
		this->super::update();
		HX_STACK_LINE(162)
		{
			HX_STACK_LINE(162)
			::flixel::addons::display::FlxBackdrop _g = this->hall;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(162)
			_g->set_x((_g->x - this->speed));
		}
		HX_STACK_LINE(163)
		this->scoreText->set_text((HX_CSTRING("") + this->score));
		HX_STACK_LINE(164)
		(this->time)--;
		HX_STACK_LINE(165)
		int _g = ::Math_obj::ceil(this->time);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(165)
		::String _g1 = (HX_CSTRING("") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(165)
		this->timeText->set_text(_g1);
		HX_STACK_LINE(177)
		if (((this->time <= (int)0))){
			HX_STACK_LINE(179)
			::flixel::FlxState State = ::CutScene3Lose_obj::__new(null());		HX_STACK_VAR(State,"State");
			HX_STACK_LINE(179)
			::flixel::FlxG_obj::game->_requestedState = State;
		}
		HX_STACK_LINE(182)
		if ((this->inTransit)){
			HX_STACK_LINE(184)
			this->nextDoor();
		}
		HX_STACK_LINE(187)
		if ((this->playDoor)){
			HX_STACK_LINE(189)
			if (((this->doorAnimIndex <= (int)8))){
				HX_STACK_LINE(191)
				int _g2 = ::Math_obj::round((Float(this->doorAnimIndex) / Float((int)2)));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(191)
				if (((_g2 == (Float(this->doorAnimIndex) / Float((int)2))))){
					HX_STACK_LINE(193)
					int _g3 = ::Math_obj::round(this->doorAnimIndex);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(193)
					::haxe::Log_obj::trace(_g3,hx::SourceInfo(HX_CSTRING("GhostState.hx"),193,HX_CSTRING("GhostState"),HX_CSTRING("update")));
					HX_STACK_LINE(194)
					::haxe::Log_obj::trace(this->doorAnimIndex,hx::SourceInfo(HX_CSTRING("GhostState.hx"),194,HX_CSTRING("GhostState"),HX_CSTRING("update")));
					HX_STACK_LINE(195)
					this->doors->members->__GetItem((this->doorIndex - (int)1))->__Field(HX_CSTRING("animation"),true)->__Field(HX_CSTRING("play"),true)((HX_CSTRING("open") + (((Float(this->doorAnimIndex) / Float((int)2)) + (int)1))),null(),null());
					HX_STACK_LINE(196)
					(this->doorAnimIndex)++;
				}
				else{
					HX_STACK_LINE(200)
					(this->doorAnimIndex)++;
				}
			}
			else{
				HX_STACK_LINE(205)
				this->doorAnimIndex = (int)0;
				HX_STACK_LINE(206)
				this->playDoor = false;
				HX_STACK_LINE(207)
				this->doorOpen = true;
				HX_STACK_LINE(208)
				{
					HX_STACK_LINE(208)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(208)
					Array< ::Dynamic > _g11 = this->knock;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(208)
					while((true)){
						HX_STACK_LINE(208)
						if ((!(((_g2 < _g11->length))))){
							HX_STACK_LINE(208)
							break;
						}
						HX_STACK_LINE(208)
						::flixel::text::FlxText member = _g11->__get(_g2).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(member,"member");
						HX_STACK_LINE(208)
						++(_g2);
						HX_STACK_LINE(210)
						member->kill();
					}
				}
			}
		}
		HX_STACK_LINE(216)
		if (((  ((this->justPressed())) ? bool(!(this->inTransit)) : bool(false) ))){
			HX_STACK_LINE(219)
			if (((this->knockCount == (int)2))){
				HX_STACK_LINE(221)
				if ((this->doorOpen)){
					HX_STACK_LINE(223)
					::Door curdoor = this->doors->members->__GetItem((this->doorIndex - (int)1));		HX_STACK_VAR(curdoor,"curdoor");
					HX_STACK_LINE(224)
					this->knockCount = (int)0;
					HX_STACK_LINE(225)
					this->doorOpen = false;
					HX_STACK_LINE(226)
					curdoor->surprise();
					HX_STACK_LINE(227)
					this->nextDoor();
					HX_STACK_LINE(228)
					(this->score)--;
				}
				else{
					HX_STACK_LINE(232)
					::Door curdoor = this->doors->members->__GetItem((this->doorIndex - (int)1));		HX_STACK_VAR(curdoor,"curdoor");
					HX_STACK_LINE(233)
					this->knockCount = (int)0;
					HX_STACK_LINE(234)
					this->doorOpen = false;
					HX_STACK_LINE(236)
					if (((((this->doorIndex + (int)1) - (((int)150 - this->score))) > (int)3))){
						HX_STACK_LINE(238)
						this->speed = (int)0;
						HX_STACK_LINE(239)
						int _g4 = ::Math_obj::round(128.);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(239)
						this->ghost->loadGraphic(HX_CSTRING("assets/images/Stage3/redascension.jpg"),true,_g4,(int)720,false,null());
						HX_STACK_LINE(240)
						this->ghost->set_y((int)0);
						HX_STACK_LINE(241)
						this->ghost->animation->add(HX_CSTRING("die"),Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)3),(int)30,false);
						HX_STACK_LINE(242)
						this->ghost->animation->play(HX_CSTRING("die"),true,(int)3);
						HX_STACK_LINE(243)
						{
							HX_STACK_LINE(243)
							::flixel::FlxState State = ::CutScene3Lose_obj::__new(null());		HX_STACK_VAR(State,"State");
							HX_STACK_LINE(243)
							::flixel::FlxG_obj::game->_requestedState = State;
						}
					}
					else{
						HX_STACK_LINE(247)
						curdoor->xOut();
						HX_STACK_LINE(248)
						this->nextDoor();
					}
				}
			}
			else{
				HX_STACK_LINE(254)
				this->knock->__get(this->knockCount).StaticCast< ::flixel::text::FlxText >()->revive();
				HX_STACK_LINE(255)
				(this->knockCount)++;
				HX_STACK_LINE(256)
				if (((this->knockCount == (int)2))){
					HX_STACK_LINE(258)
					this->playDoor = true;
					HX_STACK_LINE(259)
					this->doorOpen = false;
				}
			}
		}
	}
return null();
}



GhostState_obj::GhostState_obj()
{
}

void GhostState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GhostState);
	HX_MARK_MEMBER_NAME(ghost,"ghost");
	HX_MARK_MEMBER_NAME(hall,"hall");
	HX_MARK_MEMBER_NAME(wall,"wall");
	HX_MARK_MEMBER_NAME(knock,"knock");
	HX_MARK_MEMBER_NAME(doors,"doors");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(inTransit,"inTransit");
	HX_MARK_MEMBER_NAME(knockCount,"knockCount");
	HX_MARK_MEMBER_NAME(doneWithThisDoor,"doneWithThisDoor");
	HX_MARK_MEMBER_NAME(doorIndex,"doorIndex");
	HX_MARK_MEMBER_NAME(doorAnimIndex,"doorAnimIndex");
	HX_MARK_MEMBER_NAME(playDoor,"playDoor");
	HX_MARK_MEMBER_NAME(doorOpen,"doorOpen");
	HX_MARK_MEMBER_NAME(score,"score");
	HX_MARK_MEMBER_NAME(scoreText,"scoreText");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(timeText,"timeText");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GhostState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ghost,"ghost");
	HX_VISIT_MEMBER_NAME(hall,"hall");
	HX_VISIT_MEMBER_NAME(wall,"wall");
	HX_VISIT_MEMBER_NAME(knock,"knock");
	HX_VISIT_MEMBER_NAME(doors,"doors");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(inTransit,"inTransit");
	HX_VISIT_MEMBER_NAME(knockCount,"knockCount");
	HX_VISIT_MEMBER_NAME(doneWithThisDoor,"doneWithThisDoor");
	HX_VISIT_MEMBER_NAME(doorIndex,"doorIndex");
	HX_VISIT_MEMBER_NAME(doorAnimIndex,"doorAnimIndex");
	HX_VISIT_MEMBER_NAME(playDoor,"playDoor");
	HX_VISIT_MEMBER_NAME(doorOpen,"doorOpen");
	HX_VISIT_MEMBER_NAME(score,"score");
	HX_VISIT_MEMBER_NAME(scoreText,"scoreText");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(timeText,"timeText");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GhostState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hall") ) { return hall; }
		if (HX_FIELD_EQ(inName,"wall") ) { return wall; }
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ghost") ) { return ghost; }
		if (HX_FIELD_EQ(inName,"knock") ) { return knock; }
		if (HX_FIELD_EQ(inName,"doors") ) { return doors; }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"score") ) { return score; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"playDoor") ) { return playDoor; }
		if (HX_FIELD_EQ(inName,"doorOpen") ) { return doorOpen; }
		if (HX_FIELD_EQ(inName,"timeText") ) { return timeText; }
		if (HX_FIELD_EQ(inName,"nextDoor") ) { return nextDoor_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inTransit") ) { return inTransit; }
		if (HX_FIELD_EQ(inName,"doorIndex") ) { return doorIndex; }
		if (HX_FIELD_EQ(inName,"scoreText") ) { return scoreText; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"knockCount") ) { return knockCount; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"clickCoords") ) { return clickCoords_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"doorAnimIndex") ) { return doorAnimIndex; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"doneWithThisDoor") ) { return doneWithThisDoor; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GhostState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hall") ) { hall=inValue.Cast< ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wall") ) { wall=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ghost") ) { ghost=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"knock") ) { knock=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"doors") ) { doors=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"playDoor") ) { playDoor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"doorOpen") ) { doorOpen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeText") ) { timeText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inTransit") ) { inTransit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"doorIndex") ) { doorIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scoreText") ) { scoreText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"knockCount") ) { knockCount=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"doorAnimIndex") ) { doorAnimIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"doneWithThisDoor") ) { doneWithThisDoor=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GhostState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ghost"));
	outFields->push(HX_CSTRING("hall"));
	outFields->push(HX_CSTRING("wall"));
	outFields->push(HX_CSTRING("knock"));
	outFields->push(HX_CSTRING("doors"));
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("inTransit"));
	outFields->push(HX_CSTRING("knockCount"));
	outFields->push(HX_CSTRING("doneWithThisDoor"));
	outFields->push(HX_CSTRING("doorIndex"));
	outFields->push(HX_CSTRING("doorAnimIndex"));
	outFields->push(HX_CSTRING("playDoor"));
	outFields->push(HX_CSTRING("doorOpen"));
	outFields->push(HX_CSTRING("score"));
	outFields->push(HX_CSTRING("scoreText"));
	outFields->push(HX_CSTRING("time"));
	outFields->push(HX_CSTRING("timeText"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(GhostState_obj,ghost),HX_CSTRING("ghost")},
	{hx::fsObject /*::flixel::addons::display::FlxBackdrop*/ ,(int)offsetof(GhostState_obj,hall),HX_CSTRING("hall")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(GhostState_obj,wall),HX_CSTRING("wall")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GhostState_obj,knock),HX_CSTRING("knock")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(GhostState_obj,doors),HX_CSTRING("doors")},
	{hx::fsInt,(int)offsetof(GhostState_obj,speed),HX_CSTRING("speed")},
	{hx::fsBool,(int)offsetof(GhostState_obj,inTransit),HX_CSTRING("inTransit")},
	{hx::fsInt,(int)offsetof(GhostState_obj,knockCount),HX_CSTRING("knockCount")},
	{hx::fsBool,(int)offsetof(GhostState_obj,doneWithThisDoor),HX_CSTRING("doneWithThisDoor")},
	{hx::fsInt,(int)offsetof(GhostState_obj,doorIndex),HX_CSTRING("doorIndex")},
	{hx::fsInt,(int)offsetof(GhostState_obj,doorAnimIndex),HX_CSTRING("doorAnimIndex")},
	{hx::fsBool,(int)offsetof(GhostState_obj,playDoor),HX_CSTRING("playDoor")},
	{hx::fsBool,(int)offsetof(GhostState_obj,doorOpen),HX_CSTRING("doorOpen")},
	{hx::fsInt,(int)offsetof(GhostState_obj,score),HX_CSTRING("score")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(GhostState_obj,scoreText),HX_CSTRING("scoreText")},
	{hx::fsInt,(int)offsetof(GhostState_obj,time),HX_CSTRING("time")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(GhostState_obj,timeText),HX_CSTRING("timeText")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("ghost"),
	HX_CSTRING("hall"),
	HX_CSTRING("wall"),
	HX_CSTRING("knock"),
	HX_CSTRING("doors"),
	HX_CSTRING("speed"),
	HX_CSTRING("inTransit"),
	HX_CSTRING("knockCount"),
	HX_CSTRING("doneWithThisDoor"),
	HX_CSTRING("doorIndex"),
	HX_CSTRING("doorAnimIndex"),
	HX_CSTRING("playDoor"),
	HX_CSTRING("doorOpen"),
	HX_CSTRING("score"),
	HX_CSTRING("scoreText"),
	HX_CSTRING("time"),
	HX_CSTRING("timeText"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("pressed"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("clickCoords"),
	HX_CSTRING("create"),
	HX_CSTRING("nextDoor"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GhostState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GhostState_obj::__mClass,"__mClass");
};

#endif

Class GhostState_obj::__mClass;

void GhostState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("GhostState"), hx::TCanCast< GhostState_obj> ,sStaticFields,sMemberFields,
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

void GhostState_obj::__boot()
{
}

