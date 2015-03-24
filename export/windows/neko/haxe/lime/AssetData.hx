package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/GameTitleTemp.png", "assets/images/GameTitleTemp.png");
			type.set ("assets/images/GameTitleTemp.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/Stage1/alcolholbar.png", "assets/images/Stage1/alcolholbar.png");
			type.set ("assets/images/Stage1/alcolholbar.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage1/bar inside.png", "assets/images/Stage1/bar inside.png");
			type.set ("assets/images/Stage1/bar inside.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage1/bar.png", "assets/images/Stage1/bar.png");
			type.set ("assets/images/Stage1/bar.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage1/barwalker.png", "assets/images/Stage1/barwalker.png");
			type.set ("assets/images/Stage1/barwalker.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage1/bg.png", "assets/images/Stage1/bg.png");
			type.set ("assets/images/Stage1/bg.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage1/cutscene bubbles 2.png", "assets/images/Stage1/cutscene bubbles 2.png");
			type.set ("assets/images/Stage1/cutscene bubbles 2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage1/cutscene bubbles.png", "assets/images/Stage1/cutscene bubbles.png");
			type.set ("assets/images/Stage1/cutscene bubbles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage1/lose bubbles.png", "assets/images/Stage1/lose bubbles.png");
			type.set ("assets/images/Stage1/lose bubbles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car.png", "assets/images/Stage2/car.png");
			type.set ("assets/images/Stage2/car.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car1left.png", "assets/images/Stage2/car1left.png");
			type.set ("assets/images/Stage2/car1left.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car1left2.png", "assets/images/Stage2/car1left2.png");
			type.set ("assets/images/Stage2/car1left2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car1left3.png", "assets/images/Stage2/car1left3.png");
			type.set ("assets/images/Stage2/car1left3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car1right.png", "assets/images/Stage2/car1right.png");
			type.set ("assets/images/Stage2/car1right.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car1right2.png", "assets/images/Stage2/car1right2.png");
			type.set ("assets/images/Stage2/car1right2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car1right3.png", "assets/images/Stage2/car1right3.png");
			type.set ("assets/images/Stage2/car1right3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car2left.png", "assets/images/Stage2/car2left.png");
			type.set ("assets/images/Stage2/car2left.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car2left2.png", "assets/images/Stage2/car2left2.png");
			type.set ("assets/images/Stage2/car2left2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car2left3.png", "assets/images/Stage2/car2left3.png");
			type.set ("assets/images/Stage2/car2left3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car2right.png", "assets/images/Stage2/car2right.png");
			type.set ("assets/images/Stage2/car2right.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car2right2.png", "assets/images/Stage2/car2right2.png");
			type.set ("assets/images/Stage2/car2right2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car2right3.png", "assets/images/Stage2/car2right3.png");
			type.set ("assets/images/Stage2/car2right3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/CarGoingLeftTemp.png", "assets/images/Stage2/CarGoingLeftTemp.png");
			type.set ("assets/images/Stage2/CarGoingLeftTemp.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/CarGoingLeftTemp2.png", "assets/images/Stage2/CarGoingLeftTemp2.png");
			type.set ("assets/images/Stage2/CarGoingLeftTemp2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/CarGoingLeftTemp2Copy.png", "assets/images/Stage2/CarGoingLeftTemp2Copy.png");
			type.set ("assets/images/Stage2/CarGoingLeftTemp2Copy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/CarGoingLeftTemp2Copy2.png", "assets/images/Stage2/CarGoingLeftTemp2Copy2.png");
			type.set ("assets/images/Stage2/CarGoingLeftTemp2Copy2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/CarGoingLeftTempCopy.png", "assets/images/Stage2/CarGoingLeftTempCopy.png");
			type.set ("assets/images/Stage2/CarGoingLeftTempCopy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/CarGoingLeftTempCopy2.png", "assets/images/Stage2/CarGoingLeftTempCopy2.png");
			type.set ("assets/images/Stage2/CarGoingLeftTempCopy2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/CarGoingRightTemp.png", "assets/images/Stage2/CarGoingRightTemp.png");
			type.set ("assets/images/Stage2/CarGoingRightTemp.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/CarGoingRightTemp2.png", "assets/images/Stage2/CarGoingRightTemp2.png");
			type.set ("assets/images/Stage2/CarGoingRightTemp2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/CarGoingRightTemp2Copy.png", "assets/images/Stage2/CarGoingRightTemp2Copy.png");
			type.set ("assets/images/Stage2/CarGoingRightTemp2Copy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/CarGoingRightTemp2Copy2.png", "assets/images/Stage2/CarGoingRightTemp2Copy2.png");
			type.set ("assets/images/Stage2/CarGoingRightTemp2Copy2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/CarGoingRightTempCopy.png", "assets/images/Stage2/CarGoingRightTempCopy.png");
			type.set ("assets/images/Stage2/CarGoingRightTempCopy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/CarGoingRightTempCopy2.png", "assets/images/Stage2/CarGoingRightTempCopy2.png");
			type.set ("assets/images/Stage2/CarGoingRightTempCopy2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/chicken.png", "assets/images/Stage2/chicken.png");
			type.set ("assets/images/Stage2/chicken.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/ChickenTemp.png", "assets/images/Stage2/ChickenTemp.png");
			type.set ("assets/images/Stage2/ChickenTemp.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage3/789 door.png", "assets/images/Stage3/789 door.png");
			type.set ("assets/images/Stage3/789 door.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage3/chicken ghost.png", "assets/images/Stage3/chicken ghost.png");
			type.set ("assets/images/Stage3/chicken ghost.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage3/door.png", "assets/images/Stage3/door.png");
			type.set ("assets/images/Stage3/door.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage3/hall wall.png", "assets/images/Stage3/hall wall.png");
			type.set ("assets/images/Stage3/hall wall.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage3/hall.png", "assets/images/Stage3/hall.png");
			type.set ("assets/images/Stage3/hall.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage3/surprised.png", "assets/images/Stage3/surprised.png");
			type.set ("assets/images/Stage3/surprised.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage4/69.png", "assets/images/Stage4/69.png");
			type.set ("assets/images/Stage4/69.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage4/7.png", "assets/images/Stage4/7.png");
			type.set ("assets/images/Stage4/7.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage4/background.png", "assets/images/Stage4/background.png");
			type.set ("assets/images/Stage4/background.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
			type.set ("assets/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
			type.set ("assets/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
