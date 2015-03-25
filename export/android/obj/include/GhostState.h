#ifndef INCLUDED_GhostState
#define INCLUDED_GhostState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(GhostState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,display,FlxBackdrop)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)


class HXCPP_CLASS_ATTRIBUTES  GhostState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef GhostState_obj OBJ_;
		GhostState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GhostState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GhostState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GhostState"); }

		::flixel::FlxSprite ghost;
		::flixel::addons::display::FlxBackdrop hall;
		::flixel::FlxSprite wall;
		Array< ::Dynamic > knock;
		::flixel::group::FlxTypedGroup doors;
		int speed;
		bool inTransit;
		int knockCount;
		bool doneWithThisDoor;
		int doorIndex;
		virtual bool justPressed( );
		Dynamic justPressed_dyn();

		virtual bool pressed( );
		Dynamic pressed_dyn();

		virtual bool justReleased( );
		Dynamic justReleased_dyn();

		virtual ::flixel::util::FlxPoint clickCoords( );
		Dynamic clickCoords_dyn();

		virtual Void create( );

		virtual Void nextDoor( );
		Dynamic nextDoor_dyn();

		virtual Void update( );

};


#endif /* INCLUDED_GhostState */ 
