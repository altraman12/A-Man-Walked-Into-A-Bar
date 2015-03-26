package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Preloader;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Font;
import lime.graphics.Image;
import lime.utils.ByteArray;
import lime.utils.UInt8Array;
import lime.Assets;

#if (sys || nodejs)
import sys.FileSystem;
#end

#if flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if flash
		
		className.set ("assets/data/data-goes-here.txt", __ASSET__assets_data_data_goes_here_txt);
		type.set ("assets/data/data-goes-here.txt", AssetType.TEXT);
		className.set ("assets/images/images-go-here.txt", __ASSET__assets_images_images_go_here_txt);
		type.set ("assets/images/images-go-here.txt", AssetType.TEXT);
		className.set ("assets/images/Stage1/alcolholbar.png", __ASSET__assets_images_stage1_alcolholbar_png);
		type.set ("assets/images/Stage1/alcolholbar.png", AssetType.IMAGE);
		className.set ("assets/images/Stage1/bar inside.png", __ASSET__assets_images_stage1_bar_inside_png);
		type.set ("assets/images/Stage1/bar inside.png", AssetType.IMAGE);
		className.set ("assets/images/Stage1/bar.png", __ASSET__assets_images_stage1_bar_png);
		type.set ("assets/images/Stage1/bar.png", AssetType.IMAGE);
		className.set ("assets/images/Stage1/barwalker.png", __ASSET__assets_images_stage1_barwalker_png);
		type.set ("assets/images/Stage1/barwalker.png", AssetType.IMAGE);
		className.set ("assets/images/Stage1/bg.png", __ASSET__assets_images_stage1_bg_png);
		type.set ("assets/images/Stage1/bg.png", AssetType.IMAGE);
		className.set ("assets/images/Stage1/cutscene bubbles 2.png", __ASSET__assets_images_stage1_cutscene_bubbles_2_png);
		type.set ("assets/images/Stage1/cutscene bubbles 2.png", AssetType.IMAGE);
		className.set ("assets/images/Stage1/cutscene bubbles.png", __ASSET__assets_images_stage1_cutscene_bubbles_png);
		type.set ("assets/images/Stage1/cutscene bubbles.png", AssetType.IMAGE);
		className.set ("assets/images/Stage1/lose bubbles.png", __ASSET__assets_images_stage1_lose_bubbles_png);
		type.set ("assets/images/Stage1/lose bubbles.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car1left.png", __ASSET__assets_images_stage2_car1left_png);
		type.set ("assets/images/Stage2/car1left.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car1left1.png", __ASSET__assets_images_stage2_car1left1_png);
		type.set ("assets/images/Stage2/car1left1.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car1left2.png", __ASSET__assets_images_stage2_car1left2_png);
		type.set ("assets/images/Stage2/car1left2.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car1right.png", __ASSET__assets_images_stage2_car1right_png);
		type.set ("assets/images/Stage2/car1right.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car1right1.png", __ASSET__assets_images_stage2_car1right1_png);
		type.set ("assets/images/Stage2/car1right1.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car1right2.png", __ASSET__assets_images_stage2_car1right2_png);
		type.set ("assets/images/Stage2/car1right2.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car2left.png", __ASSET__assets_images_stage2_car2left_png);
		type.set ("assets/images/Stage2/car2left.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car2left1.png", __ASSET__assets_images_stage2_car2left1_png);
		type.set ("assets/images/Stage2/car2left1.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car2left2.png", __ASSET__assets_images_stage2_car2left2_png);
		type.set ("assets/images/Stage2/car2left2.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car2right.png", __ASSET__assets_images_stage2_car2right_png);
		type.set ("assets/images/Stage2/car2right.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car2right1.png", __ASSET__assets_images_stage2_car2right1_png);
		type.set ("assets/images/Stage2/car2right1.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car2right2.png", __ASSET__assets_images_stage2_car2right2_png);
		type.set ("assets/images/Stage2/car2right2.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car3left.png", __ASSET__assets_images_stage2_car3left_png);
		type.set ("assets/images/Stage2/car3left.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car3left1.png", __ASSET__assets_images_stage2_car3left1_png);
		type.set ("assets/images/Stage2/car3left1.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car3left2.png", __ASSET__assets_images_stage2_car3left2_png);
		type.set ("assets/images/Stage2/car3left2.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car3right.png", __ASSET__assets_images_stage2_car3right_png);
		type.set ("assets/images/Stage2/car3right.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car3right1.png", __ASSET__assets_images_stage2_car3right1_png);
		type.set ("assets/images/Stage2/car3right1.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car3right2.png", __ASSET__assets_images_stage2_car3right2_png);
		type.set ("assets/images/Stage2/car3right2.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car4left.png", __ASSET__assets_images_stage2_car4left_png);
		type.set ("assets/images/Stage2/car4left.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car4left1.png", __ASSET__assets_images_stage2_car4left1_png);
		type.set ("assets/images/Stage2/car4left1.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car4left2.png", __ASSET__assets_images_stage2_car4left2_png);
		type.set ("assets/images/Stage2/car4left2.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car4right.png", __ASSET__assets_images_stage2_car4right_png);
		type.set ("assets/images/Stage2/car4right.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car4right1.png", __ASSET__assets_images_stage2_car4right1_png);
		type.set ("assets/images/Stage2/car4right1.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car4right2.png", __ASSET__assets_images_stage2_car4right2_png);
		type.set ("assets/images/Stage2/car4right2.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car5left.png", __ASSET__assets_images_stage2_car5left_png);
		type.set ("assets/images/Stage2/car5left.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car5left1.png", __ASSET__assets_images_stage2_car5left1_png);
		type.set ("assets/images/Stage2/car5left1.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car5left2.png", __ASSET__assets_images_stage2_car5left2_png);
		type.set ("assets/images/Stage2/car5left2.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car5right.png", __ASSET__assets_images_stage2_car5right_png);
		type.set ("assets/images/Stage2/car5right.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car5right1.png", __ASSET__assets_images_stage2_car5right1_png);
		type.set ("assets/images/Stage2/car5right1.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car5right2.png", __ASSET__assets_images_stage2_car5right2_png);
		type.set ("assets/images/Stage2/car5right2.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car6left.png", __ASSET__assets_images_stage2_car6left_png);
		type.set ("assets/images/Stage2/car6left.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car6left1.png", __ASSET__assets_images_stage2_car6left1_png);
		type.set ("assets/images/Stage2/car6left1.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car6left2.png", __ASSET__assets_images_stage2_car6left2_png);
		type.set ("assets/images/Stage2/car6left2.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car6right.png", __ASSET__assets_images_stage2_car6right_png);
		type.set ("assets/images/Stage2/car6right.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car6right1.png", __ASSET__assets_images_stage2_car6right1_png);
		type.set ("assets/images/Stage2/car6right1.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/car6right2.png", __ASSET__assets_images_stage2_car6right2_png);
		type.set ("assets/images/Stage2/car6right2.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/chickensprite.png", __ASSET__assets_images_stage2_chickensprite_png);
		type.set ("assets/images/Stage2/chickensprite.png", AssetType.IMAGE);
		className.set ("assets/images/Stage2/road tile.png", __ASSET__assets_images_stage2_road_tile_png);
		type.set ("assets/images/Stage2/road tile.png", AssetType.IMAGE);
		className.set ("assets/images/Stage3/789 door.png", __ASSET__assets_images_stage3_789_door_png);
		type.set ("assets/images/Stage3/789 door.png", AssetType.IMAGE);
		className.set ("assets/images/Stage3/ascension.jpg", __ASSET__assets_images_stage3_ascension_jpg);
		type.set ("assets/images/Stage3/ascension.jpg", AssetType.IMAGE);
		className.set ("assets/images/Stage3/chicken ghost.png", __ASSET__assets_images_stage3_chicken_ghost_png);
		type.set ("assets/images/Stage3/chicken ghost.png", AssetType.IMAGE);
		className.set ("assets/images/Stage3/door.png", __ASSET__assets_images_stage3_door_png);
		type.set ("assets/images/Stage3/door.png", AssetType.IMAGE);
		className.set ("assets/images/Stage3/hall wall.png", __ASSET__assets_images_stage3_hall_wall_png);
		type.set ("assets/images/Stage3/hall wall.png", AssetType.IMAGE);
		className.set ("assets/images/Stage3/hall.png", __ASSET__assets_images_stage3_hall_png);
		type.set ("assets/images/Stage3/hall.png", AssetType.IMAGE);
		className.set ("assets/images/Stage3/redascension.jpg", __ASSET__assets_images_stage3_redascension_jpg);
		type.set ("assets/images/Stage3/redascension.jpg", AssetType.IMAGE);
		className.set ("assets/images/Stage3/surprised.png", __ASSET__assets_images_stage3_surprised_png);
		type.set ("assets/images/Stage3/surprised.png", AssetType.IMAGE);
		className.set ("assets/images/Stage3/x.png", __ASSET__assets_images_stage3_x_png);
		type.set ("assets/images/Stage3/x.png", AssetType.IMAGE);
		className.set ("assets/images/Stage4/69.png", __ASSET__assets_images_stage4_69_png);
		type.set ("assets/images/Stage4/69.png", AssetType.IMAGE);
		className.set ("assets/images/Stage4/7.png", __ASSET__assets_images_stage4_7_png);
		type.set ("assets/images/Stage4/7.png", AssetType.IMAGE);
		className.set ("assets/images/Stage4/7left.png", __ASSET__assets_images_stage4_7left_png);
		type.set ("assets/images/Stage4/7left.png", AssetType.IMAGE);
		className.set ("assets/images/Stage4/7right.png", __ASSET__assets_images_stage4_7right_png);
		type.set ("assets/images/Stage4/7right.png", AssetType.IMAGE);
		className.set ("assets/images/Stage4/bg.png", __ASSET__assets_images_stage4_bg_png);
		type.set ("assets/images/Stage4/bg.png", AssetType.IMAGE);
		className.set ("assets/music/music-goes-here.txt", __ASSET__assets_music_music_goes_here_txt);
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		className.set ("assets/sounds/sounds-go-here.txt", __ASSET__assets_sounds_sounds_go_here_txt);
		type.set ("assets/sounds/sounds-go-here.txt", AssetType.TEXT);
		className.set ("assets/sounds/beep.mp3", __ASSET__assets_sounds_beep_mp3);
		type.set ("assets/sounds/beep.mp3", AssetType.MUSIC);
		className.set ("assets/sounds/flixel.mp3", __ASSET__assets_sounds_flixel_mp3);
		type.set ("assets/sounds/flixel.mp3", AssetType.MUSIC);
		
		
		#elseif html5
		
		var id;
		id = "assets/data/data-goes-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/images/images-go-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/images/Stage1/alcolholbar.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage1/bar inside.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage1/bar.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage1/barwalker.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage1/bg.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage1/cutscene bubbles 2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage1/cutscene bubbles.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage1/lose bubbles.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car1left.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car1left1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car1left2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car1right.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car1right1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car1right2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car2left.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car2left1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car2left2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car2right.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car2right1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car2right2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car3left.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car3left1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car3left2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car3right.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car3right1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car3right2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car4left.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car4left1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car4left2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car4right.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car4right1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car4right2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car5left.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car5left1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car5left2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car5right.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car5right1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car5right2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car6left.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car6left1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car6left2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car6right.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car6right1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/car6right2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/chickensprite.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage2/road tile.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage3/789 door.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage3/ascension.jpg";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage3/chicken ghost.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage3/door.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage3/hall wall.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage3/hall.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage3/redascension.jpg";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage3/surprised.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage3/x.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage4/69.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage4/7.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage4/7left.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage4/7right.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Stage4/bg.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/music/music-goes-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/sounds/sounds-go-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/sounds/beep.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/flixel.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		
		
		var assetsPrefix = ApplicationMain.config.assetsPrefix;
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if openfl
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		#end
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		
		className.set ("assets/data/data-goes-here.txt", __ASSET__assets_data_data_goes_here_txt);
		type.set ("assets/data/data-goes-here.txt", AssetType.TEXT);
		
		className.set ("assets/images/images-go-here.txt", __ASSET__assets_images_images_go_here_txt);
		type.set ("assets/images/images-go-here.txt", AssetType.TEXT);
		
		className.set ("assets/images/Stage1/alcolholbar.png", __ASSET__assets_images_stage1_alcolholbar_png);
		type.set ("assets/images/Stage1/alcolholbar.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage1/bar inside.png", __ASSET__assets_images_stage1_bar_inside_png);
		type.set ("assets/images/Stage1/bar inside.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage1/bar.png", __ASSET__assets_images_stage1_bar_png);
		type.set ("assets/images/Stage1/bar.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage1/barwalker.png", __ASSET__assets_images_stage1_barwalker_png);
		type.set ("assets/images/Stage1/barwalker.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage1/bg.png", __ASSET__assets_images_stage1_bg_png);
		type.set ("assets/images/Stage1/bg.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage1/cutscene bubbles 2.png", __ASSET__assets_images_stage1_cutscene_bubbles_2_png);
		type.set ("assets/images/Stage1/cutscene bubbles 2.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage1/cutscene bubbles.png", __ASSET__assets_images_stage1_cutscene_bubbles_png);
		type.set ("assets/images/Stage1/cutscene bubbles.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage1/lose bubbles.png", __ASSET__assets_images_stage1_lose_bubbles_png);
		type.set ("assets/images/Stage1/lose bubbles.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car1left.png", __ASSET__assets_images_stage2_car1left_png);
		type.set ("assets/images/Stage2/car1left.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car1left1.png", __ASSET__assets_images_stage2_car1left1_png);
		type.set ("assets/images/Stage2/car1left1.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car1left2.png", __ASSET__assets_images_stage2_car1left2_png);
		type.set ("assets/images/Stage2/car1left2.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car1right.png", __ASSET__assets_images_stage2_car1right_png);
		type.set ("assets/images/Stage2/car1right.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car1right1.png", __ASSET__assets_images_stage2_car1right1_png);
		type.set ("assets/images/Stage2/car1right1.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car1right2.png", __ASSET__assets_images_stage2_car1right2_png);
		type.set ("assets/images/Stage2/car1right2.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car2left.png", __ASSET__assets_images_stage2_car2left_png);
		type.set ("assets/images/Stage2/car2left.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car2left1.png", __ASSET__assets_images_stage2_car2left1_png);
		type.set ("assets/images/Stage2/car2left1.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car2left2.png", __ASSET__assets_images_stage2_car2left2_png);
		type.set ("assets/images/Stage2/car2left2.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car2right.png", __ASSET__assets_images_stage2_car2right_png);
		type.set ("assets/images/Stage2/car2right.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car2right1.png", __ASSET__assets_images_stage2_car2right1_png);
		type.set ("assets/images/Stage2/car2right1.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car2right2.png", __ASSET__assets_images_stage2_car2right2_png);
		type.set ("assets/images/Stage2/car2right2.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car3left.png", __ASSET__assets_images_stage2_car3left_png);
		type.set ("assets/images/Stage2/car3left.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car3left1.png", __ASSET__assets_images_stage2_car3left1_png);
		type.set ("assets/images/Stage2/car3left1.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car3left2.png", __ASSET__assets_images_stage2_car3left2_png);
		type.set ("assets/images/Stage2/car3left2.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car3right.png", __ASSET__assets_images_stage2_car3right_png);
		type.set ("assets/images/Stage2/car3right.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car3right1.png", __ASSET__assets_images_stage2_car3right1_png);
		type.set ("assets/images/Stage2/car3right1.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car3right2.png", __ASSET__assets_images_stage2_car3right2_png);
		type.set ("assets/images/Stage2/car3right2.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car4left.png", __ASSET__assets_images_stage2_car4left_png);
		type.set ("assets/images/Stage2/car4left.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car4left1.png", __ASSET__assets_images_stage2_car4left1_png);
		type.set ("assets/images/Stage2/car4left1.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car4left2.png", __ASSET__assets_images_stage2_car4left2_png);
		type.set ("assets/images/Stage2/car4left2.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car4right.png", __ASSET__assets_images_stage2_car4right_png);
		type.set ("assets/images/Stage2/car4right.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car4right1.png", __ASSET__assets_images_stage2_car4right1_png);
		type.set ("assets/images/Stage2/car4right1.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car4right2.png", __ASSET__assets_images_stage2_car4right2_png);
		type.set ("assets/images/Stage2/car4right2.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car5left.png", __ASSET__assets_images_stage2_car5left_png);
		type.set ("assets/images/Stage2/car5left.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car5left1.png", __ASSET__assets_images_stage2_car5left1_png);
		type.set ("assets/images/Stage2/car5left1.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car5left2.png", __ASSET__assets_images_stage2_car5left2_png);
		type.set ("assets/images/Stage2/car5left2.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car5right.png", __ASSET__assets_images_stage2_car5right_png);
		type.set ("assets/images/Stage2/car5right.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car5right1.png", __ASSET__assets_images_stage2_car5right1_png);
		type.set ("assets/images/Stage2/car5right1.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car5right2.png", __ASSET__assets_images_stage2_car5right2_png);
		type.set ("assets/images/Stage2/car5right2.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car6left.png", __ASSET__assets_images_stage2_car6left_png);
		type.set ("assets/images/Stage2/car6left.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car6left1.png", __ASSET__assets_images_stage2_car6left1_png);
		type.set ("assets/images/Stage2/car6left1.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car6left2.png", __ASSET__assets_images_stage2_car6left2_png);
		type.set ("assets/images/Stage2/car6left2.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car6right.png", __ASSET__assets_images_stage2_car6right_png);
		type.set ("assets/images/Stage2/car6right.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car6right1.png", __ASSET__assets_images_stage2_car6right1_png);
		type.set ("assets/images/Stage2/car6right1.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/car6right2.png", __ASSET__assets_images_stage2_car6right2_png);
		type.set ("assets/images/Stage2/car6right2.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/chickensprite.png", __ASSET__assets_images_stage2_chickensprite_png);
		type.set ("assets/images/Stage2/chickensprite.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage2/road tile.png", __ASSET__assets_images_stage2_road_tile_png);
		type.set ("assets/images/Stage2/road tile.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage3/789 door.png", __ASSET__assets_images_stage3_789_door_png);
		type.set ("assets/images/Stage3/789 door.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage3/ascension.jpg", __ASSET__assets_images_stage3_ascension_jpg);
		type.set ("assets/images/Stage3/ascension.jpg", AssetType.IMAGE);
		
		className.set ("assets/images/Stage3/chicken ghost.png", __ASSET__assets_images_stage3_chicken_ghost_png);
		type.set ("assets/images/Stage3/chicken ghost.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage3/door.png", __ASSET__assets_images_stage3_door_png);
		type.set ("assets/images/Stage3/door.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage3/hall wall.png", __ASSET__assets_images_stage3_hall_wall_png);
		type.set ("assets/images/Stage3/hall wall.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage3/hall.png", __ASSET__assets_images_stage3_hall_png);
		type.set ("assets/images/Stage3/hall.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage3/redascension.jpg", __ASSET__assets_images_stage3_redascension_jpg);
		type.set ("assets/images/Stage3/redascension.jpg", AssetType.IMAGE);
		
		className.set ("assets/images/Stage3/surprised.png", __ASSET__assets_images_stage3_surprised_png);
		type.set ("assets/images/Stage3/surprised.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage3/x.png", __ASSET__assets_images_stage3_x_png);
		type.set ("assets/images/Stage3/x.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage4/69.png", __ASSET__assets_images_stage4_69_png);
		type.set ("assets/images/Stage4/69.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage4/7.png", __ASSET__assets_images_stage4_7_png);
		type.set ("assets/images/Stage4/7.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage4/7left.png", __ASSET__assets_images_stage4_7left_png);
		type.set ("assets/images/Stage4/7left.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage4/7right.png", __ASSET__assets_images_stage4_7right_png);
		type.set ("assets/images/Stage4/7right.png", AssetType.IMAGE);
		
		className.set ("assets/images/Stage4/bg.png", __ASSET__assets_images_stage4_bg_png);
		type.set ("assets/images/Stage4/bg.png", AssetType.IMAGE);
		
		className.set ("assets/music/music-goes-here.txt", __ASSET__assets_music_music_goes_here_txt);
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		
		className.set ("assets/sounds/sounds-go-here.txt", __ASSET__assets_sounds_sounds_go_here_txt);
		type.set ("assets/sounds/sounds-go-here.txt", AssetType.TEXT);
		
		className.set ("assets/sounds/beep.mp3", __ASSET__assets_sounds_beep_mp3);
		type.set ("assets/sounds/beep.mp3", AssetType.MUSIC);
		
		className.set ("assets/sounds/flixel.mp3", __ASSET__assets_sounds_flixel_mp3);
		type.set ("assets/sounds/flixel.mp3", AssetType.MUSIC);
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if ((assetType == BINARY || assetType == TEXT) && requestedType == BINARY) {
				
				return true;
				
			} else if (path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return AudioBuffer.fromFile (path.get (id));
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, type.get (id) == MUSIC);
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif html5
		
		var bytes:ByteArray = null;
		var data = Preloader.loaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Dynamic /*Font*/ {
		
		// TODO: Complete Lime Font API
		
		#if openfl
		#if (flash || js)
		
		return cast (Type.createInstance (className.get (id), []), openfl.text.Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			openfl.text.Font.registerFont (fontClass);
			return cast (Type.createInstance (fontClass, []), openfl.text.Font);
			
		} else {
			
			return new openfl.text.Font (path.get (id));
			
		}
		
		#end
		#end
		
		return null;
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		return Image.fromFile (path.get (id));
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var bytes:ByteArray = null;
		var data = Preloader.loaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String, handler:AudioBuffer -> Void):Void {
		
		#if (flash)
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				handler (audioBuffer);
				
			});
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			handler (getAudioBuffer (id));
			
		}
		#else
		handler (getAudioBuffer (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadImage (id:String, handler:Image -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				handler (Image.fromBitmapData (bitmapData));
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getImage (id));
			
		}
		
		#else
		
		handler (getImage (id));
		
		#end
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = ByteArray.readFile ("../Resources/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								path.set (asset.id, asset.path);
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	/*public override function loadMusic (id:String, handler:Dynamic -> Void):Void {
		
		#if (flash || js)
		
		//if (path.exists (id)) {
			
		//	var loader = new Loader ();
		//	loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
		//		handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
		//	});
		//	loader.load (new URLRequest (path.get (id)));
			
		//} else {
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}*/
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		//#if html5
		
		/*if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (event.currentTarget.data);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}*/
		
		//#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		//#end
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__assets_data_data_goes_here_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_images_images_go_here_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage1_alcolholbar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage1_bar_inside_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage1_bar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage1_barwalker_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage1_bg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage1_cutscene_bubbles_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage1_cutscene_bubbles_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage1_lose_bubbles_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car1left_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car1left1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car1left2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car1right_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car1right1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car1right2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car2left_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car2left1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car2left2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car2right_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car2right1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car2right2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car3left_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car3left1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car3left2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car3right_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car3right1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car3right2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car4left_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car4left1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car4left2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car4right_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car4right1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car4right2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car5left_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car5left1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car5left2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car5right_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car5right1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car5right2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car6left_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car6left1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car6left2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car6right_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car6right1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_car6right2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_chickensprite_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage2_road_tile_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage3_789_door_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage3_ascension_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage3_chicken_ghost_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage3_door_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage3_hall_wall_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage3_hall_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage3_redascension_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage3_surprised_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage3_x_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage4_69_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage4_7_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage4_7left_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage4_7right_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage4_bg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_music_music_goes_here_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_beep_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_flixel_mp3 extends flash.media.Sound { }


#elseif html5

#if openfl



































































#end

#else

#if openfl

#end

#if (windows || mac || linux)


@:file("assets/data/data-goes-here.txt") class __ASSET__assets_data_data_goes_here_txt extends lime.utils.ByteArray {}
@:file("assets/images/images-go-here.txt") class __ASSET__assets_images_images_go_here_txt extends lime.utils.ByteArray {}
@:bitmap("assets/images/Stage1/alcolholbar.png") class __ASSET__assets_images_stage1_alcolholbar_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage1/bar inside.png") class __ASSET__assets_images_stage1_bar_inside_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage1/bar.png") class __ASSET__assets_images_stage1_bar_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage1/barwalker.png") class __ASSET__assets_images_stage1_barwalker_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage1/bg.png") class __ASSET__assets_images_stage1_bg_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage1/cutscene bubbles 2.png") class __ASSET__assets_images_stage1_cutscene_bubbles_2_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage1/cutscene bubbles.png") class __ASSET__assets_images_stage1_cutscene_bubbles_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage1/lose bubbles.png") class __ASSET__assets_images_stage1_lose_bubbles_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car1left.png") class __ASSET__assets_images_stage2_car1left_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car1left1.png") class __ASSET__assets_images_stage2_car1left1_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car1left2.png") class __ASSET__assets_images_stage2_car1left2_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car1right.png") class __ASSET__assets_images_stage2_car1right_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car1right1.png") class __ASSET__assets_images_stage2_car1right1_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car1right2.png") class __ASSET__assets_images_stage2_car1right2_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car2left.png") class __ASSET__assets_images_stage2_car2left_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car2left1.png") class __ASSET__assets_images_stage2_car2left1_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car2left2.png") class __ASSET__assets_images_stage2_car2left2_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car2right.png") class __ASSET__assets_images_stage2_car2right_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car2right1.png") class __ASSET__assets_images_stage2_car2right1_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car2right2.png") class __ASSET__assets_images_stage2_car2right2_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car3left.png") class __ASSET__assets_images_stage2_car3left_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car3left1.png") class __ASSET__assets_images_stage2_car3left1_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car3left2.png") class __ASSET__assets_images_stage2_car3left2_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car3right.png") class __ASSET__assets_images_stage2_car3right_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car3right1.png") class __ASSET__assets_images_stage2_car3right1_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car3right2.png") class __ASSET__assets_images_stage2_car3right2_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car4left.png") class __ASSET__assets_images_stage2_car4left_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car4left1.png") class __ASSET__assets_images_stage2_car4left1_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car4left2.png") class __ASSET__assets_images_stage2_car4left2_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car4right.png") class __ASSET__assets_images_stage2_car4right_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car4right1.png") class __ASSET__assets_images_stage2_car4right1_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car4right2.png") class __ASSET__assets_images_stage2_car4right2_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car5left.png") class __ASSET__assets_images_stage2_car5left_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car5left1.png") class __ASSET__assets_images_stage2_car5left1_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car5left2.png") class __ASSET__assets_images_stage2_car5left2_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car5right.png") class __ASSET__assets_images_stage2_car5right_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car5right1.png") class __ASSET__assets_images_stage2_car5right1_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car5right2.png") class __ASSET__assets_images_stage2_car5right2_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car6left.png") class __ASSET__assets_images_stage2_car6left_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car6left1.png") class __ASSET__assets_images_stage2_car6left1_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car6left2.png") class __ASSET__assets_images_stage2_car6left2_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car6right.png") class __ASSET__assets_images_stage2_car6right_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car6right1.png") class __ASSET__assets_images_stage2_car6right1_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/car6right2.png") class __ASSET__assets_images_stage2_car6right2_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/chickensprite.png") class __ASSET__assets_images_stage2_chickensprite_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage2/road tile.png") class __ASSET__assets_images_stage2_road_tile_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage3/789 door.png") class __ASSET__assets_images_stage3_789_door_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage3/ascension.jpg") class __ASSET__assets_images_stage3_ascension_jpg extends lime.graphics.Image {}
@:bitmap("assets/images/Stage3/chicken ghost.png") class __ASSET__assets_images_stage3_chicken_ghost_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage3/door.png") class __ASSET__assets_images_stage3_door_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage3/hall wall.png") class __ASSET__assets_images_stage3_hall_wall_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage3/hall.png") class __ASSET__assets_images_stage3_hall_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage3/redascension.jpg") class __ASSET__assets_images_stage3_redascension_jpg extends lime.graphics.Image {}
@:bitmap("assets/images/Stage3/surprised.png") class __ASSET__assets_images_stage3_surprised_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage3/x.png") class __ASSET__assets_images_stage3_x_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage4/69.png") class __ASSET__assets_images_stage4_69_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage4/7.png") class __ASSET__assets_images_stage4_7_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage4/7left.png") class __ASSET__assets_images_stage4_7left_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage4/7right.png") class __ASSET__assets_images_stage4_7right_png extends lime.graphics.Image {}
@:bitmap("assets/images/Stage4/bg.png") class __ASSET__assets_images_stage4_bg_png extends lime.graphics.Image {}
@:file("assets/music/music-goes-here.txt") class __ASSET__assets_music_music_goes_here_txt extends lime.utils.ByteArray {}
@:file("assets/sounds/sounds-go-here.txt") class __ASSET__assets_sounds_sounds_go_here_txt extends lime.utils.ByteArray {}
@:sound("C:/HaxeToolkit/haxe/lib/flixel/3,3,6/assets/sounds/beep.mp3") class __ASSET__assets_sounds_beep_mp3 extends lime.audio.AudioSource {}
@:sound("C:/HaxeToolkit/haxe/lib/flixel/3,3,6/assets/sounds/flixel.mp3") class __ASSET__assets_sounds_flixel_mp3 extends lime.audio.AudioSource {}



#end

#end
#end

