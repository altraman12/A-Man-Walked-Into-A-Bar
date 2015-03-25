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
			path.set ("assets/images/Stage2/car1left.png", "assets/images/Stage2/car1left.png");
			type.set ("assets/images/Stage2/car1left.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car1left1.png", "assets/images/Stage2/car1left1.png");
			type.set ("assets/images/Stage2/car1left1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car1left2.png", "assets/images/Stage2/car1left2.png");
			type.set ("assets/images/Stage2/car1left2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car1right.png", "assets/images/Stage2/car1right.png");
			type.set ("assets/images/Stage2/car1right.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car1right1.png", "assets/images/Stage2/car1right1.png");
			type.set ("assets/images/Stage2/car1right1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car1right2.png", "assets/images/Stage2/car1right2.png");
			type.set ("assets/images/Stage2/car1right2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car2left.png", "assets/images/Stage2/car2left.png");
			type.set ("assets/images/Stage2/car2left.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car2left1.png", "assets/images/Stage2/car2left1.png");
			type.set ("assets/images/Stage2/car2left1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car2left2.png", "assets/images/Stage2/car2left2.png");
			type.set ("assets/images/Stage2/car2left2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car2right.png", "assets/images/Stage2/car2right.png");
			type.set ("assets/images/Stage2/car2right.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car2right1.png", "assets/images/Stage2/car2right1.png");
			type.set ("assets/images/Stage2/car2right1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car2right2.png", "assets/images/Stage2/car2right2.png");
			type.set ("assets/images/Stage2/car2right2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car3left.png", "assets/images/Stage2/car3left.png");
			type.set ("assets/images/Stage2/car3left.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car3left1.png", "assets/images/Stage2/car3left1.png");
			type.set ("assets/images/Stage2/car3left1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car3left2.png", "assets/images/Stage2/car3left2.png");
			type.set ("assets/images/Stage2/car3left2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car3right.png", "assets/images/Stage2/car3right.png");
			type.set ("assets/images/Stage2/car3right.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car3right1.png", "assets/images/Stage2/car3right1.png");
			type.set ("assets/images/Stage2/car3right1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car3right2.png", "assets/images/Stage2/car3right2.png");
			type.set ("assets/images/Stage2/car3right2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car4left.png", "assets/images/Stage2/car4left.png");
			type.set ("assets/images/Stage2/car4left.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car4left1.png", "assets/images/Stage2/car4left1.png");
			type.set ("assets/images/Stage2/car4left1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car4left2.png", "assets/images/Stage2/car4left2.png");
			type.set ("assets/images/Stage2/car4left2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car4right.png", "assets/images/Stage2/car4right.png");
			type.set ("assets/images/Stage2/car4right.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car4right1.png", "assets/images/Stage2/car4right1.png");
			type.set ("assets/images/Stage2/car4right1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car4right2.png", "assets/images/Stage2/car4right2.png");
			type.set ("assets/images/Stage2/car4right2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car5left.png", "assets/images/Stage2/car5left.png");
			type.set ("assets/images/Stage2/car5left.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car5left1.png", "assets/images/Stage2/car5left1.png");
			type.set ("assets/images/Stage2/car5left1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car5left2.png", "assets/images/Stage2/car5left2.png");
			type.set ("assets/images/Stage2/car5left2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car5right.png", "assets/images/Stage2/car5right.png");
			type.set ("assets/images/Stage2/car5right.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car5right1.png", "assets/images/Stage2/car5right1.png");
			type.set ("assets/images/Stage2/car5right1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car5right2.png", "assets/images/Stage2/car5right2.png");
			type.set ("assets/images/Stage2/car5right2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car6left.png", "assets/images/Stage2/car6left.png");
			type.set ("assets/images/Stage2/car6left.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car6left1.png", "assets/images/Stage2/car6left1.png");
			type.set ("assets/images/Stage2/car6left1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car6left2.png", "assets/images/Stage2/car6left2.png");
			type.set ("assets/images/Stage2/car6left2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car6right.png", "assets/images/Stage2/car6right.png");
			type.set ("assets/images/Stage2/car6right.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car6right1.png", "assets/images/Stage2/car6right1.png");
			type.set ("assets/images/Stage2/car6right1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/car6right2.png", "assets/images/Stage2/car6right2.png");
			type.set ("assets/images/Stage2/car6right2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/chicken.png", "assets/images/Stage2/chicken.png");
			type.set ("assets/images/Stage2/chicken.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/chickensprite.png", "assets/images/Stage2/chickensprite.png");
			type.set ("assets/images/Stage2/chickensprite.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/ChickenTemp.png", "assets/images/Stage2/ChickenTemp.png");
			type.set ("assets/images/Stage2/ChickenTemp.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/froggerbg.png", "assets/images/Stage2/froggerbg.png");
			type.set ("assets/images/Stage2/froggerbg.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/RealChicken.jpg", "assets/images/Stage2/RealChicken.jpg");
			type.set ("assets/images/Stage2/RealChicken.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage2/road tile.png", "assets/images/Stage2/road tile.png");
			type.set ("assets/images/Stage2/road tile.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage3/789 door.png", "assets/images/Stage3/789 door.png");
			type.set ("assets/images/Stage3/789 door.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Stage3/ascension.png", "assets/images/Stage3/ascension.png");
			type.set ("assets/images/Stage3/ascension.png", Reflect.field (AssetType, "image".toUpperCase ()));
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
