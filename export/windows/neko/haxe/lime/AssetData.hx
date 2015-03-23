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
			path.set ("assets/images/Stage1/bar.png", "assets/images/Stage1/bar.png");
			type.set ("assets/images/Stage1/bar.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage1/barwalker.png", "assets/images/Stage1/barwalker.png");
			type.set ("assets/images/Stage1/barwalker.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage1/bg.png", "assets/images/Stage1/bg.png");
			type.set ("assets/images/Stage1/bg.png", Reflect.field (AssetType, "image".toUpperCase ()));
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
			path.set ("assets/images/Stage2/ChickenTemp.png", "assets/images/Stage2/ChickenTemp.png");
			type.set ("assets/images/Stage2/ChickenTemp.png", Reflect.field (AssetType, "image".toUpperCase ()));
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
