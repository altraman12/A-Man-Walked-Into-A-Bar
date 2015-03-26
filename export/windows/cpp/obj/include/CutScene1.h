#ifndef INCLUDED_CutScene1
#define INCLUDED_CutScene1

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(CutScene1)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  CutScene1_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef CutScene1_obj OBJ_;
		CutScene1_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CutScene1_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CutScene1_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CutScene1"); }

		virtual bool justPressed( );
		Dynamic justPressed_dyn();

		int frame;
		Array< ::Dynamic > f;
		virtual Void create( );

		virtual Void update( );

};


#endif /* INCLUDED_CutScene1 */ 
