package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.util.FlxPoint;
import flixel.util.FlxTimer;

/**
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxState
{
	var player:FlxSprite;
	var acc:Float;
	var vel:Float;
	
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	
	public function justPressed():Bool
	{
		#if mobile
			var returnVal = false;
			for (touch in FlxG.touches.list)
			{
				returnVal = touch.justPressed;
			}
			return returnVal;
		#else
			return FlxG.mouse.justPressed;
		#end
	}
	
	public function pressed():Bool
	{
		#if mobile
			var returnVal = false;
			for (touch in FlxG.touches.list)
			{
				returnVal = touch.pressed;
			}
			return returnVal;
		#else
			return FlxG.mouse.pressed;
		#end
	}
	
	public function justReleased():Bool
	{
		#if mobile
			var returnVal = false;
			for (touch in FlxG.touches.list)
			{
				returnVal = touch.justReleased;
			}
			return returnVal;
		#else
			return FlxG.mouse.justReleased;
		#end
	}
	
	public function clickCoords():FlxPoint
	{
		#if mobile
			var returnVal = new FlxPoint();
			var i=0;
			for (touch in FlxG.touches.list)
			{
				i++;
				returnVal.x += touch.screenX;
				returnVal.y += touch.screenY;
			}
			returnVal.x /= i;
			returnVal.y /= i;
			return returnVal;
		#else
			return new FlxPoint(FlxG.mouse.screenX, FlxG.mouse.screenY);
		#end
	}
	 
	override public function create():Void
	{
		//temporary level skip button
		var btnChicken:FlxButton;
		btnChicken = new FlxButton(FlxG.width - 80, 0, "Level 2", clickChicken);
		add(btnChicken);
		
		//temporary menu button
		var btnMenu:FlxButton;
		btnMenu = new FlxButton(0, 0, "Main Menu", clickMenu);
		add(btnMenu);
		
		{//set up player
			player = new FlxSprite(FlxG.width / 5, FlxG.height / 2);
			player.loadGraphic("assets/images/barwalker.png", true, 64, 64, true);
			add(player);
			player.animation.add("run", [7,8,9,10,11,12,13], 30, true);
			player.animation.add("jump", [14,15,16,16,17], 6, false);
			player.animation.add("slide", [21], 30, false);
			vel = 0;
			acc = 0;
			super.create();
			run();
		}
		
		{//set up bars
			
		}
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		player.destroy();
		super.destroy();
	}
	
	function run(?Timer:FlxTimer) 
	{
		player.animation.play("run");
	}
	
	function jump() 
	{
		var t = new FlxTimer(1, run, 1);
		player.animation.play("jump");
		vel = -11200/30;
	}
	
	function slide()
	{
		var t = new FlxTimer(1, run, 1);
		player.animation.play("slide");
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{		
		super.update();
		{//physics
			trace(player.y);
			if (player.y > FlxG.height / 2)
			{
				acc = 340/30;
				trace('grav');
			}
			else if (player.y < FlxG.height / 2)
			{
				acc = 0;
				vel = 0;
				player.y = FlxG.height / 2;
			}
			vel += acc;
			player.y += vel;
		}
		{//controls
			if (justPressed()&&(clickCoords().y <= FlxG.height/2))
			{
				jump();
			}
			
			if (justPressed() && (clickCoords().y > FlxG.height / 2))
			{
				slide();
			}
		}

	}
	
	private function clickChicken()
	{
		FlxG.switchState(new ChickenState());
	}
	
	private function clickMenu()
	{
		FlxG.switchState(new MenuState());
	}
}
