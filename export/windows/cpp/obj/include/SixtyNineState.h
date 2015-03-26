#ifndef INCLUDED_SixtyNineState
#define INCLUDED_SixtyNineState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(SixtyNineState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,display,FlxBackdrop)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)


class HXCPP_CLASS_ATTRIBUTES  SixtyNineState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef SixtyNineState_obj OBJ_;
		SixtyNineState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SixtyNineState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SixtyNineState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SixtyNineState"); }

		::flixel::addons::display::FlxBackdrop LSD;
		::flixel::FlxSprite sixnine;
		::flixel::FlxSprite sevenright;
		::flixel::FlxSprite sevenleft;
		Float speedleft;
		Float speedright;
		Float speedLSD;
		bool canMove;
		virtual bool justPressed( );
		Dynamic justPressed_dyn();

		virtual bool pressed( );
		Dynamic pressed_dyn();

		virtual bool justReleased( );
		Dynamic justReleased_dyn();

		virtual ::flixel::util::FlxPoint clickCoords( );
		Dynamic clickCoords_dyn();

		virtual Void create( );

		virtual Void update( );

		virtual Void destroy( );

		virtual Void hitbyseven( );
		Dynamic hitbyseven_dyn();

		virtual Void goback( ::flixel::util::FlxTimer Timer);
		Dynamic goback_dyn();

};


#endif /* INCLUDED_SixtyNineState */ 
