package;

import flixel.addons.display.FlxBackdrop;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.util.FlxPoint;
import flixel.util.FlxRandom;
import flixel.util.FlxTimer;

class SixtyNineState extends FlxState
{
	var LSD:FlxBackdrop;
	var sixnine:FlxSprite;
	var sevenright:FlxSprite;
	var sevenleft:FlxSprite;
	var speedleft:Float;
	var speedright:Float;
	var speedLSD:Float;
	var canMove:Bool;
	
	//UNIVERSAL CLICK CODE
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
	//END OF UNIVERSAL CLICK CODE
	
	override public function create():Void
	{
		canMove = true;
		speedleft = 4;
		speedright = 8;
		speedLSD = 4;
		
	//background defining
		LSD = new FlxBackdrop("assets/images/Stage4/bg.png", 0, 0, true, false);
		add(LSD);
		
	//6/9 setup
		sixnine = new FlxSprite((FlxG.width / 3), ((FlxG.height /2) - 192));
		sixnine.loadGraphic("assets/images/Stage4/69.png", true, 192, 192, true);
		add(sixnine);
		sixnine.animation.add("six", [0], 30, false);
		sixnine.animation.add("nine", [1], 30, false);
	
	//7 setup
		sevenright = new FlxSprite(FlxG.width + 200, ((FlxG.height / 2) - 192));
		sevenright.loadGraphic("assets/images/Stage4/7left.png", true, 192, 192, true);
		sevenright.animation.add("up", [0], 30, false);
		sevenright.animation.add("down", [1], 30, false);
		if (FlxRandom.chanceRoll(50) == true)
		{
			sevenright.y = ((FlxG.height / 2) - 192);
			sevenright.animation.play("up", false, 0);
		}
		else
		{
			sevenright.y = (FlxG.height / 2);
			sevenright.animation.play("down", false, 0);
		}	
		add(sevenright);

		sevenleft = new FlxSprite( -192, FlxG.height / 2);
		sevenleft.loadGraphic("assets/images/Stage4/7right.png", true, 192, 192, true);
		sevenleft.animation.add("up", [0], 30, false);
		sevenleft.animation.add("down", [1], 30, false);
		if (FlxRandom.chanceRoll(50))
		{
			sevenleft.y = ((FlxG.height / 2) - 192);
			sevenleft.animation.play("up", false, 0);
		}
		else
		{
			sevenleft.y = (FlxG.height / 2);
			sevenleft.animation.play("down", false, 0);
		}
		add(sevenleft);
	}
	
	override public function update():Void
	{
		super.update();
		
		LSD.x -= speedLSD;
		
		{//controls
			if (canMove)
			{
				if (justPressed() && ((clickCoords().y < FlxG.height / 2)))
				{
					sixnine.y = ((FlxG.height / 2) - 192);
					sixnine.animation.play("six", false, 0);
				}
				if (justPressed() && ((clickCoords().y > FlxG.height / 2)))
				{
					sixnine.y = (FlxG.height / 2);
					sixnine.animation.play("nine", false, 0);
				}
			}
		}
		
		{//seven code
			sevenleft.x += speedleft;
			sevenright.x -= speedright;
			
			if (sevenleft.x > FlxG.width)
			{
				sevenleft.x = -192;
				if (FlxRandom.chanceRoll(50))
				{
					sevenleft.y = ((FlxG.height / 2) - 192);
					sevenleft.animation.play("up", false, 0);
				}
				else
				{
					sevenleft.y = (FlxG.height / 2);
					sevenleft.animation.play("down", false, 0);
				}
				if (speedleft < 16)
				{
					speedleft++;
				}
			}
			
			if (sevenright.x < -192)
			{
				sevenright.x = FlxG.width + 200;
				if (FlxRandom.chanceRoll(50))
				{
					sevenright.y = ((FlxG.height / 2) - 192);
					sevenright.animation.play("up", false, 0);
				}
				else
				{
					sevenright.y = (FlxG.height / 2);
					sevenright.animation.play("down", false, 0);
				}
				if (speedright < 20)
				{
					speedright++;
				}
			}
		}
		
		{//collision code
			if (FlxG.overlap(sixnine, sevenleft))
			{
				if (FlxG.pixelPerfectOverlap(sixnine, sevenleft))
				{
					hitbyseven();
				}
			}
			
			if (FlxG.overlap(sixnine, sevenright))
			{
				if (FlxG.pixelPerfectOverlap(sixnine, sevenright))
				{
					hitbyseven();
				}
			}
		}
	}
	
	override public function destroy():Void
	{
		sixnine.destroy();
		sevenleft.destroy();
		sevenright.destroy();
	}
	
	private function hitbyseven()
	{
		canMove = false;
		speedleft = 0;
		speedright = 0;
		speedLSD = 0;
		var backtotitlescreen = new FlxTimer(1.5, goback, 1);
	}
	
	private function goback(Timer:FlxTimer)
	{
		FlxG.switchState(new MenuState());
	}
}