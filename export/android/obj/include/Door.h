#ifndef INCLUDED_Door
#define INCLUDED_Door

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(Door)
HX_DECLARE_CLASS0(GhostState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Door_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Door_obj OBJ_;
		Door_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::GhostState level,Dynamic SimpleGraphic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Door_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::GhostState level,Dynamic SimpleGraphic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Door_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Door"); }

		::GhostState state;
		bool firstPass;
		virtual Void update( );

		virtual Void open( );
		Dynamic open_dyn();

		virtual Void close( );
		Dynamic close_dyn();

};


#endif /* INCLUDED_Door */ 
