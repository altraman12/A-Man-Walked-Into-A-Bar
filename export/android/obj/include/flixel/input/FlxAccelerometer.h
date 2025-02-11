#ifndef INCLUDED_flixel_input_FlxAccelerometer
#define INCLUDED_flixel_input_FlxAccelerometer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,input,FlxAccelerometer)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,sensors,Accelerometer)
HX_DECLARE_CLASS2(openfl,events,AccelerometerEvent)
namespace flixel{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  FlxAccelerometer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxAccelerometer_obj OBJ_;
		FlxAccelerometer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxAccelerometer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxAccelerometer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxAccelerometer"); }

		Float x;
		Float y;
		Float z;
		::openfl::_v2::sensors::Accelerometer _sensor;
		virtual bool get_isSupported( );
		Dynamic get_isSupported_dyn();

		virtual Void updateCallback( ::openfl::events::AccelerometerEvent Event);
		Dynamic updateCallback_dyn();

};

} // end namespace flixel
} // end namespace input

#endif /* INCLUDED_flixel_input_FlxAccelerometer */ 
