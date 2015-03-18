package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.util.FlxPoint;
import flixel.util.FlxTimer;

class ChickenState extends FlxState
{
	var chicken:FlxSprite;
	
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
		chicken = new FlxSprite(FlxG.width / 2 - 32, FlxG.height - 64);
		chicken.loadGraphic("assets/images/ChickenTemp.png", true, 64, 64, true);
		add(chicken);
		super.create();
		
		//temporary menu button
		var btnMenu:FlxButton;
		btnMenu = new FlxButton(0, 0, "Main Menu", clickMenu);
		add(btnMenu);
	}
	
	
	override public function destroy():Void
	{
		chicken.destroy();
		super.destroy();
	}
	
	override public function update():Void
	{
		super.update();
		{//controls
			if (justPressed() && ((clickCoords().y < clickCoords().x + FlxG.width) && (clickCoords().y > -clickCoords().x)))
			{
				chicken.y -= 32;
			}
			
			if (justPressed() && ((clickCoords().y > clickCoords().x + FlxG.width) && (clickCoords().y < -clickCoords().x)))
			{
				chicken.y += 32;
			}
			
			if (justPressed() && ((clickCoords().y > clickCoords().x + FlxG.width) && (clickCoords().y > -clickCoords().x)))
			{
				chicken.x += 32;
			}
			
			if (justPressed() && ((clickCoords().y < clickCoords().x + FlxG.width) && (clickCoords().y < -clickCoords().x)))
			{
				chicken.x -= 32;
			}
		}
	}
	
	private function clickMenu()
	{
		FlxG.switchState(new MenuState());
	}
	
}