package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.util.FlxPoint;

/**
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxState
{
	var player:FlxSprite;
	
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
		{//set up player
			player = new FlxSprite(FlxG.width/5,FlxG.height/2);
			add(player);
			player.animation.add("run", [0, 1, 2, 3, 4, 5, 6, 7, 8, 9], 30, true);
			player.animation.add("jump", [10, 11, 12, 13, 14, 15, 16], 30, false);
			player.animation.add("slide", [17], 30, false);
			super.create();
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
	
	function run() 
	{
		player.animation.play("run");
	}
	
	function jump() 
	{
		player.animation.play("jump");
	}
	
	function slide()
	{
		player.animation.play("slide");
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		super.update();
		if (justPressed())
		{
		trace(clickCoords());
		}
	}
}
