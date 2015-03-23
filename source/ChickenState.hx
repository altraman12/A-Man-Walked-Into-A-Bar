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
	var cargoingleft1:FlxSprite;
	var cargoingleft1copy:FlxSprite;
	var cargoingleft1copy2:FlxSprite;
	var cargoingright1:FlxSprite;
	var cargoingright1copy:FlxSprite;
	var cargoingright1copy2:FlxSprite;
	var cargoingleft2:FlxSprite;
	var cargoingleft2copy:FlxSprite;
	var cargoingleft2copy2:FlxSprite;
	var cargoingright2:FlxSprite;
	var cargoingright2copy:FlxSprite;
	var cargoingright2copy2:FlxSprite;
	var velocidad = 4;
	var firstpass:Bool;
	
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
		chicken.loadGraphic("assets/images/Stage2/chicken.png", true, 64, 64, true);
		add(chicken);
		super.create();
		
		//temporary menu button
		var btnMenu:FlxButton;
		btnMenu = new FlxButton(0, 0, "Main Menu", clickMenu);
		add(btnMenu);
		
		firstpass = true;
		
	//temporary level skip button
		var btnSkip:FlxButton;
		btnSkip = new FlxButton(FlxG.width - 200, 0, "Next Level", clickSkip);
		add(btnSkip);
		
	//car going left 1
		cargoingleft1 = new FlxSprite(FlxG.width, 4 * FlxG.height / 5);
		cargoingleft1.loadGraphic("assets/images/Stage2/CarGoingLeftTemp.png", 128, 54, true);
		add(cargoingleft1);

		cargoingleft1copy = new FlxSprite(1.33 * FlxG.width + 64, 4 * FlxG.height / 5);
		cargoingleft1copy.loadGraphic("assets/images/Stage2/CarGoingLeftTempCopy.png", 128, 64, true);
		add(cargoingleft1copy);
		
		cargoingleft1copy2 = new FlxSprite(1.66 * FlxG.width + 128, 4 * FlxG.height / 5);
		cargoingleft1copy2.loadGraphic("assets/images/Stage2/CarGoingLeftTempCopy2.png", 128, 64, true);
		add(cargoingleft1copy2);
		
	//car going right 1
		cargoingright1 = new FlxSprite( -128, 3 * FlxG.height / 5);
		cargoingright1.loadGraphic("assets/images/Stage2/CarGoingRightTemp.png", 128, 64, true);
		add(cargoingright1);

		cargoingright1copy = new FlxSprite(( -FlxG.width / 3) - 192, 3 * FlxG.height / 5);
		cargoingright1copy.loadGraphic("assets/images/Stage2/CarGoingRightTempCopy.png", 128, 64, true);
		add(cargoingright1copy);

		cargoingright1copy2 = new FlxSprite(( -2 * FlxG.width / 3) -256, 3 * FlxG.height / 5);
		cargoingright1copy2.loadGraphic("assets/images/Stage2/CarGoingRightTempCopy2.png", 128, 64, true);
		add(cargoingright1copy2);
		
	//car going left 2
		cargoingleft2 = new FlxSprite(FlxG.width, 2 * FlxG.height / 5);
		cargoingleft2.loadGraphic("assets/images/Stage2/CarGoingLeftTemp2.png", 128, 64, true);
		add(cargoingleft2);

		cargoingleft2copy = new FlxSprite(1.33 * FlxG.width + 64, 2 * FlxG.height / 5);
		cargoingleft2copy.loadGraphic("assets/images/Stage2/CarGoingLeftTemp2Copy.png", 128, 64, true);
		add(cargoingleft2copy);
		
		cargoingleft2copy2 = new FlxSprite(1.66 * FlxG.width + 128, 2 * FlxG.height / 5);
		cargoingleft2copy2.loadGraphic("assets/images/Stage2/CarGoingLeftTemp2Copy2.png", 128, 64, true);
		add(cargoingleft2copy2);
		
	//car going right 2
		cargoingright2 = new FlxSprite( -128, FlxG.height / 5);
		cargoingright2.loadGraphic("assets/images/Stage2/CarGoingRightTemp2.png", 128, 64, true);
		add(cargoingright2);
		
		cargoingright2copy = new FlxSprite(( -FlxG.width / 3) - 192, FlxG.height / 5);
		cargoingright2copy.loadGraphic("assets/images/Stage2/CarGoingRightTemp2Copy.png", 128, 64, true);
		add(cargoingright2copy);
		
		cargoingright2copy2 = new FlxSprite(( -2 * FlxG.width / 3) - 256, FlxG.height / 5);
		cargoingright2copy2.loadGraphic("assets/images/Stage2/CarGoingRightTemp2Copy2.png", 128, 64, true);
		add(cargoingright2copy2);
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
			if (justPressed() && ((clickCoords().y < clickCoords().x) && (clickCoords().y > -clickCoords().x + FlxG.width)))
			{
				chicken.x += 32;
			}
			
			if (justPressed() && ((clickCoords().y > clickCoords().x) && (clickCoords().y < -clickCoords().x + FlxG.width)))
			{
				chicken.x -= 32;
			}
			
			if (justPressed() && ((clickCoords().y > clickCoords().x) && (clickCoords().y > -clickCoords().x + FlxG.width)))
			{
				chicken.y += 32;
			}
			
			if (justPressed() && ((clickCoords().y < clickCoords().x) && (clickCoords().y < -clickCoords().x + FlxG.width)))
			{
				chicken.y -= 32;
			}
		}
		
		{//car code
			cargoingleft1.x -= velocidad;
			cargoingleft1copy.x -= velocidad;
			cargoingleft1copy2.x -= velocidad;
			
			if (cargoingleft1.x < -128)
			{
				cargoingleft1.x = FlxG.width;
			}
			if (cargoingleft1copy.x < -128)
			{
				cargoingleft1copy.x = FlxG.width;
			}
			if (cargoingleft1copy2.x < -128)
			{
				cargoingleft1copy2.x = FlxG.width;
			}
			
			cargoingright1.x += 2 * velocidad;
			cargoingright1copy.x += 2 * velocidad;
			cargoingright1copy2.x += 2 * velocidad;
			
			if (cargoingright1.x > (FlxG.width + 128))
			{
				cargoingright1.x = -128;
			}
			if (cargoingright1copy.x > (FlxG.width + 128))
			{
				cargoingright1copy.x = -128;
			}
			if (cargoingright1copy2.x > (FlxG.width + 128))
			{
				cargoingright1copy2.x = -128;
			}
			
			cargoingleft2.x -= 3 * velocidad;
			cargoingleft2copy.x -= 3 * velocidad;
			cargoingleft2copy2.x -= 3 * velocidad;

			if (cargoingleft2.x < -128)
			{
				cargoingleft2.x = FlxG.width;
			}
			if (cargoingleft2copy.x < -128)
			{
				cargoingleft2copy.x = FlxG.width;
			}
			if (cargoingleft2copy2.x < -128)
			{
				cargoingleft2copy2.x = FlxG.width;
			}
			
			cargoingright2.x += 4 * velocidad;
			cargoingright2copy.x += 4 * velocidad;
			cargoingright2copy2.x += 4 * velocidad;
			
			if (cargoingright2.x > (FlxG.width + 128))
			{
				cargoingright2.x = -128;
			}
			if (cargoingright2copy.x > (FlxG.width + 128))
			{
				cargoingright2copy.x = -128;
			}
			if (cargoingright2copy2.x > (FlxG.width + 128))
			{
				cargoingright2copy2.x = -128;
			}
		}
	}
	
	private function clickMenu()
	{
		FlxG.switchState(new MenuState());
	}
	
	private function clickSkip()
	{
		FlxG.switchState(new GhostState());
	}
}