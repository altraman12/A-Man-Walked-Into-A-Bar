#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(BarClass)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,display,FlxBackdrop)
HX_DECLARE_CLASS2(flixel,animation,FlxAnimation)
HX_DECLARE_CLASS2(flixel,animation,FlxBaseAnimation)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)


class HXCPP_CLASS_ATTRIBUTES  PlayState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PlayState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayState"); }

		::flixel::FlxSprite player;
		::flixel::animation::FlxAnimation runAnim;
		::flixel::animation::FlxAnimation jumpAnim;
		::flixel::animation::FlxAnimation slideAnim;
		Float jumpDuration;
		int maxBars;
		::flixel::group::FlxTypedGroup bars;
		::BarClass bar;
		::flixel::addons::display::FlxBackdrop bg;
		int speed;
		virtual bool justPressed( );
		Dynamic justPressed_dyn();

		virtual bool pressed( );
		Dynamic pressed_dyn();

		virtual bool justReleased( );
		Dynamic justReleased_dyn();

		virtual ::flixel::util::FlxPoint clickCoords( );
		Dynamic clickCoords_dyn();

		virtual Void create( );

		virtual Void destroy( );

		virtual Void run( );
		Dynamic run_dyn();

		virtual Void runTime( ::flixel::util::FlxTimer Timer);
		Dynamic runTime_dyn();

		virtual Void runTween( ::flixel::tweens::FlxTween Tween);
		Dynamic runTween_dyn();

		virtual Void jump( );
		Dynamic jump_dyn();

		virtual Void fall( ::flixel::tweens::FlxTween Tween);
		Dynamic fall_dyn();

		virtual Void slide( );
		Dynamic slide_dyn();

		bool slideBool;
		virtual Void update( );

		virtual Void clickChicken( );
		Dynamic clickChicken_dyn();

		virtual Void clickMenu( );
		Dynamic clickMenu_dyn();

};


#endif /* INCLUDED_PlayState */ 
