import lime.Assets;
#if !macro


class ApplicationMain {
	
	
	public static var config:lime.app.Config;
	public static var preloader:openfl.display.Preloader;
	
	
	public static function create ():Void {
		
		var app = new openfl.display.Application ();
		app.create (config);
		
		var display = new flixel.system.FlxPreloader ();
		
		preloader = new openfl.display.Preloader (display);
		preloader.onComplete = init;
		preloader.create (config);
		
		#if (js && html5)
		var urls = [];
		var types = [];
		
		
		urls.push ("assets/data/data-goes-here.txt");
		types.push (AssetType.TEXT);
		
		
		urls.push ("assets/images/GameTitleTemp.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/images-go-here.txt");
		types.push (AssetType.TEXT);
		
		
		urls.push ("assets/images/Stage1/alcolholbar.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage1/bar inside.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage1/bar.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage1/barwalker.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage1/bg.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage1/cutscene bubbles 2.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage1/cutscene bubbles.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/car.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/car1left.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/car1left2.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/car1left3.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/car1right.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/car1right2.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/car1right3.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/car2left.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/car2left2.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/car2left3.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/car2right.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/car2right2.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/car2right3.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/CarGoingLeftTemp.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/CarGoingLeftTemp2.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/CarGoingLeftTemp2Copy.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/CarGoingLeftTemp2Copy2.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/CarGoingLeftTempCopy.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/CarGoingLeftTempCopy2.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/CarGoingRightTemp.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/CarGoingRightTemp2.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/CarGoingRightTemp2Copy.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/CarGoingRightTemp2Copy2.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/CarGoingRightTempCopy.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/CarGoingRightTempCopy2.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/chicken.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage2/ChickenTemp.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage3/789 door.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage3/chicken ghost.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage3/door.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage3/hall wall.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage3/hall.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage3/surprised.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage4/69.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage4/7.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/images/Stage4/background.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("assets/music/music-goes-here.txt");
		types.push (AssetType.TEXT);
		
		
		urls.push ("assets/sounds/sounds-go-here.txt");
		types.push (AssetType.TEXT);
		
		
		urls.push ("assets/sounds/beep.mp3");
		types.push (AssetType.MUSIC);
		
		
		urls.push ("assets/sounds/flixel.mp3");
		types.push (AssetType.MUSIC);
		
		
		
		if (config.assetsPrefix != null) {
			
			for (i in 0...urls.length) {
				
				if (types[i] != AssetType.FONT) {
					
					urls[i] = config.assetsPrefix + urls[i];
					
				}
				
			}
			
		}
		
		preloader.load (urls, types);
		#end
		
		var result = app.exec ();
		
		#if (sys && !emscripten)
		Sys.exit (result);
		#end
		
	}
	
	
	public static function init ():Void {
		
		var loaded = 0;
		var total = 0;
		var library_onLoad = function (__) {
			
			loaded++;
			
			if (loaded == total) {
				
				start ();
				
			}
			
		}
		
		preloader = null;
		
		
		
		if (loaded == total) {
			
			start ();
			
		}
		
	}
	
	
	public static function main () {
		
		config = {
			
			antialiasing: Std.int (0),
			background: Std.int (0),
			borderless: false,
			depthBuffer: false,
			fps: Std.int (60),
			fullscreen: false,
			height: Std.int (720),
			orientation: "portrait",
			resizable: true,
			stencilBuffer: false,
			title: "A-Man-Walked-Into-A-Bar",
			vsync: true,
			width: Std.int (1280),
			
		}
		
		#if js
		#if (munit || utest)
		flash.Lib.embed (null, 1280, 720, "000000");
		#end
		#else
		create ();
		#end
		
	}
	
	
	public static function start ():Void {
		
		var hasMain = false;
		var entryPoint = Type.resolveClass ("Main");
		
		for (methodName in Type.getClassFields (entryPoint)) {
			
			if (methodName == "main") {
				
				hasMain = true;
				break;
				
			}
			
		}
		
		if (hasMain) {
			
			Reflect.callMethod (entryPoint, Reflect.field (entryPoint, "main"), []);
			
		} else {
			
			var instance:DocumentClass = Type.createInstance (DocumentClass, []);
			
			/*if (Std.is (instance, openfl.display.DisplayObject)) {
				
				openfl.Lib.current.addChild (cast instance);
				
			}*/
			
		}
		
		openfl.Lib.current.stage.dispatchEvent (new openfl.events.Event (openfl.events.Event.RESIZE, false, false));
		
	}
	
	
	#if neko
	@:noCompletion public static function __init__ () {
		
		var loader = new neko.vm.Loader (untyped $loader);
		loader.addPath (haxe.io.Path.directory (Sys.executablePath ()));
		loader.addPath ("./");
		loader.addPath ("@executable_path/");
		
	}
	#end
	
	
}


@:build(DocumentClass.build())
@:keep class DocumentClass extends Main {}


#else


import haxe.macro.Context;
import haxe.macro.Expr;


class DocumentClass {
	
	
	macro public static function build ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes.superClass != null) {
			
			if (searchTypes.pack.length == 2 && searchTypes.pack[1] == "display" && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				
				var method = macro {
					
					openfl.Lib.current.addChild (this);
					super ();
					dispatchEvent (new openfl.events.Event (openfl.events.Event.ADDED_TO_STAGE, false, false));
					
				}
				
				fields.push ({ name: "new", access: [ APublic ], kind: FFun({ args: [], expr: method, params: [], ret: macro :Void }), pos: Context.currentPos () });
				
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
}


#end
