package;

import flixel.addons.display.FlxBackdrop;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.system.FlxSound;
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
	var cargoingleft3:FlxSprite;
	var cargoingleft3copy:FlxSprite;
	var cargoingleft3copy2:FlxSprite;
	var cargoingright3:FlxSprite;
	var cargoingright3copy:FlxSprite;
	var cargoingright3copy2:FlxSprite;
	var killcar:FlxSprite;
	var background:FlxBackdrop;
	var velocidad = 3;
	var firstpass:Bool;
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
		FlxG.sound.playMusic(AssetPaths.TSA moosik_wav, 1, true);
		
	//background defining
		background = new FlxBackdrop("assets/images/Stage2/road tile.png", 0, 0, true, false);
		add(background);
		
	//defining chicken
		chicken = new FlxSprite(FlxG.width / 2 - 16, FlxG.height - 32);
		chicken.loadGraphic("assets/images/Stage2/chickensprite.png", true, 32, 32, true);
		add(chicken);
		chicken.animation.add("up", [0], 30, false);
		chicken.animation.add("left", [1], 30, false);
		chicken.animation.add("right", [2], 30, false);
		chicken.animation.add("down", [3], 30, false);
		chicken.animation.add("dead", [4], 30, false);
		startwait();
		
	//boolean setting
		firstpass = true;
		canMove = true;
		
	//kill car
		killcar = new FlxSprite( -128, 32);
		killcar.loadGraphic("assets/images/Stage2/car2right.png", false, 128, 64, true);
		
	//car going left 1
		cargoingleft1 = new FlxSprite(FlxG.width, 590);
		cargoingleft1.loadGraphic("assets/images/Stage2/car1left.png",false, 128, 64, true);
		add(cargoingleft1);

		cargoingleft1copy = new FlxSprite(1.33 * FlxG.width + 64, 590);
		cargoingleft1copy.loadGraphic("assets/images/Stage2/car1left1.png",false, 128, 64, true);
		add(cargoingleft1copy);
		
		cargoingleft1copy2 = new FlxSprite(1.66 * FlxG.width + 128, 590);
		cargoingleft1copy2.loadGraphic("assets/images/Stage2/car1left2.png",false, 128, 64, true);
		add(cargoingleft1copy2);
		
	//car going right 1
		cargoingright1 = new FlxSprite( -128, 520);
		cargoingright1.loadGraphic("assets/images/Stage2/car2right.png",false, 128, 64, true);
		add(cargoingright1);

		cargoingright1copy = new FlxSprite(( -FlxG.width / 3) - 192, 520);
		cargoingright1copy.loadGraphic("assets/images/Stage2/car2right1.png",false, 128, 64, true);
		add(cargoingright1copy);

		cargoingright1copy2 = new FlxSprite(( -2 * FlxG.width / 3) -256, 520);
		cargoingright1copy2.loadGraphic("assets/images/Stage2/car2right2.png",false, 128, 64, true);
		add(cargoingright1copy2);
		
	//car going left 2
		cargoingleft2 = new FlxSprite(FlxG.width, 390);
		cargoingleft2.loadGraphic("assets/images/Stage2/car5left.png",false, 128, 64, true);
		add(cargoingleft2);

		cargoingleft2copy = new FlxSprite(1.33 * FlxG.width + 64, 390);
		cargoingleft2copy.loadGraphic("assets/images/Stage2/car5left1.png",false, 128, 64, true);
		add(cargoingleft2copy);
		
		cargoingleft2copy2 = new FlxSprite(1.66 * FlxG.width + 128, 390);
		cargoingleft2copy2.loadGraphic("assets/images/Stage2/car5left2.png",false, 128, 64, true);
		add(cargoingleft2copy2);
		
	//car going right 2
		cargoingright2 = new FlxSprite( -128, 320);
		cargoingright2.loadGraphic("assets/images/Stage2/car3right.png",false, 128, 64, true);
		add(cargoingright2);
		
		cargoingright2copy = new FlxSprite(( -FlxG.width / 3) - 192, 320);
		cargoingright2copy.loadGraphic("assets/images/Stage2/car3right1.png",false, 128, 64, true);
		add(cargoingright2copy);
		
		cargoingright2copy2 = new FlxSprite(( -2 * FlxG.width / 3) - 256, 320);
		cargoingright2copy2.loadGraphic("assets/images/Stage2/car3right2.png",false, 128, 64, true);
		add(cargoingright2copy2);
		
	//car going left 3
		cargoingleft3 = new FlxSprite(FlxG.width, 190);
		cargoingleft3.loadGraphic("assets/images/Stage2/car4left.png",false, 128, 64, true);
		add(cargoingleft3);

		cargoingleft3copy = new FlxSprite(1.33 * FlxG.width + 64, 190);
		cargoingleft3copy.loadGraphic("assets/images/Stage2/car4left1.png",false, 128, 64, true);
		add(cargoingleft3copy);
		
		cargoingleft3copy2 = new FlxSprite(1.66 * FlxG.width + 128, 190);
		cargoingleft3copy2.loadGraphic("assets/images/Stage2/car4left2.png",false, 128, 64, true);
		add(cargoingleft3copy2);
		
	//car going right 3
		cargoingright3 = new FlxSprite( -128, 120);
		cargoingright3.loadGraphic("assets/images/Stage2/car6right.png",false, 128, 64, true);
		add(cargoingright3);
		
		cargoingright3copy = new FlxSprite(( -FlxG.width / 3) - 192, 120);
		cargoingright3copy.loadGraphic("assets/images/Stage2/car6right1.png",false, 128, 64, true);
		add(cargoingright3copy);
		
		cargoingright3copy2 = new FlxSprite(( -2 * FlxG.width / 3) - 256, 120);
		cargoingright3copy2.loadGraphic("assets/images/Stage2/car6right2.png",false, 128, 64, true);
		add(cargoingright3copy2);
		
	}
	
	override public function update():Void
	{
		super.update();
		{//controls
			if (canMove)
			{
				if (justPressed() && ((clickCoords().y < clickCoords().x- 280) && (clickCoords().y > -clickCoords().x + 1000)))
				{
					chicken.x += 16;
					chicken.animation.play("right", false, 0);
				}
			
				if (justPressed() && ((clickCoords().y > clickCoords().x - 280) && (clickCoords().y < -clickCoords().x + 1000)))
				{
					chicken.x -= 16;
					chicken.animation.play("left", false, 0);
				}
			
				if (justPressed() && ((clickCoords().y > clickCoords().x - 280) && (clickCoords().y > -clickCoords().x + 1000)))
				{
					chicken.y += 16;
					chicken.animation.play("down", false, 0);
				}
			
				if (justPressed() && ((clickCoords().y < clickCoords().x - 280) && (clickCoords().y < -clickCoords().x + 1000)))
				{
					chicken.y -= 16;
					chicken.animation.play("up", false, 0);
				}
			}
		}
		
		firstpass = true;
		{//level end
			if (chicken.y < 64)
			{
				add(killcar);
				killcar.x += 10 * velocidad;
				canMove = false;
				
				if (FlxG.overlap(chicken, killcar))
				{					
					if (FlxG.pixelPerfectOverlap(chicken, killcar, 255))
					{
						var z = new FlxTimer(0.5, endgame, 1);
					}
				}
			}
		}
		
		{//car code
			cargoingleft1.x -= 1.3 * velocidad;
			cargoingleft1copy.x -= 1.3 * velocidad;
			cargoingleft1copy2.x -= 1.3 * velocidad;
			
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
			
			cargoingright1.x += 1.6 * velocidad;
			cargoingright1copy.x += 1.6 * velocidad;
			cargoingright1copy2.x += 1.6 * velocidad;
			
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
			
			cargoingleft2.x -= 2 * velocidad;
			cargoingleft2copy.x -= 2 * velocidad;
			cargoingleft2copy2.x -= 2 * velocidad;

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
			
			cargoingright2.x += 2.5 * velocidad;
			cargoingright2copy.x += 2.5 * velocidad;
			cargoingright2copy2.x += 2.5 * velocidad;
			
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
			
			cargoingleft3.x -= 3 * velocidad;
			cargoingleft3copy.x -= 3 * velocidad;
			cargoingleft3copy2.x -= 3 * velocidad;

			if (cargoingleft3.x < -128)
			{
				cargoingleft3.x = FlxG.width;
			}
			if (cargoingleft3copy.x < -128)
			{
				cargoingleft3copy.x = FlxG.width;
			}
			if (cargoingleft3copy2.x < -128)
			{
				cargoingleft3copy2.x = FlxG.width;
			}
			
			cargoingright3.x += 4 * velocidad;
			cargoingright3copy.x += 4 * velocidad;
			cargoingright3copy2.x += 4 * velocidad;
			
			if (cargoingright3.x > (FlxG.width + 128))
			{
				cargoingright3.x = -128;
			}
			if (cargoingright3copy.x > (FlxG.width + 128))
			{
				cargoingright3copy.x = -128;
			}
			if (cargoingright3copy2.x > (FlxG.width + 128))
			{
				cargoingright3copy2.x = -128;
			}
		}
		
		{//collision code
		  //cargoingleft1
			if (FlxG.overlap(chicken, cargoingleft1))
			{
				if (FlxG.pixelPerfectOverlap(chicken, cargoingleft1))
				{
					runover();
				}
			}
			if (FlxG.overlap(chicken, cargoingleft1copy))
			{
				if (FlxG.pixelPerfectOverlap(chicken, cargoingleft1copy))
				{
					runover();
				}
			}
			if (FlxG.overlap(chicken, cargoingleft1copy2))
			{
				if (FlxG.pixelPerfectOverlap(chicken, cargoingleft1copy2))
				{
					runover();
				}
			}
		  //cargoingleft2
			if (FlxG.overlap(chicken, cargoingleft2))
			{
				if (FlxG.pixelPerfectOverlap(chicken, cargoingleft2))
				{
					runover();
				}
			}
			if (FlxG.overlap(chicken, cargoingleft2copy))
			{
				if (FlxG.pixelPerfectOverlap(chicken, cargoingleft2copy))
				{
					runover();
				}
			}
			if (FlxG.overlap(chicken, cargoingleft2copy2))
			{
				if (FlxG.pixelPerfectOverlap(chicken, cargoingleft2copy2))
				{
					runover();
				}
			}
		  //cargoingright1
			if (FlxG.overlap(chicken, cargoingright1))
			{
				if (FlxG.pixelPerfectOverlap(chicken, cargoingright1))
				{
					runover();
				}
			}
			if (FlxG.overlap(chicken, cargoingright1copy))
			{
				if (FlxG.pixelPerfectOverlap(chicken, cargoingright1copy))
				{
					runover();
				}
			}
			if (FlxG.overlap(chicken, cargoingright1copy2))
			{
				if (FlxG.pixelPerfectOverlap(chicken, cargoingright1copy2))
				{
					runover();
				}
			}
		  //cargoingright2
			if (FlxG.overlap(chicken, cargoingright2))
			{
				if (FlxG.pixelPerfectOverlap(chicken, cargoingright2))
				{
					runover();
				}
			}
			if (FlxG.overlap(chicken, cargoingright2copy))
			{
				if (FlxG.pixelPerfectOverlap(chicken, cargoingright2copy))
				{
					runover();
				}
			}
			if (FlxG.overlap(chicken, cargoingright2copy2))
			{
				if (FlxG.pixelPerfectOverlap(chicken, cargoingright2copy2))
				{
					runover();
				}
			}
		  //cargoingleft2
			if (FlxG.overlap(chicken, cargoingleft3))
			{
				if (FlxG.pixelPerfectOverlap(chicken, cargoingleft3))
				{
					runover();
				}
			}
			if (FlxG.overlap(chicken, cargoingleft3copy))
			{
				if (FlxG.pixelPerfectOverlap(chicken, cargoingleft3copy))
				{
					runover();
				}
			}
			if (FlxG.overlap(chicken, cargoingleft3copy2))
			{
				if (FlxG.pixelPerfectOverlap(chicken, cargoingleft3copy2))
				{
					runover();
				}
			}
		  //cargoingright3
			if (FlxG.overlap(chicken, cargoingright3))
			{
				if (FlxG.pixelPerfectOverlap(chicken, cargoingright3))
				{
					runover();
				}
			}
			if (FlxG.overlap(chicken, cargoingright3copy))
			{
				if (FlxG.pixelPerfectOverlap(chicken, cargoingright3copy))
				{
					runover();
				}
			}
			if (FlxG.overlap(chicken, cargoingright3copy2))
			{
				if (FlxG.pixelPerfectOverlap(chicken, cargoingright3copy2))
				{
					runover();
				}
			}
		}
	}
	
	override public function destroy():Void
	{
		chicken.destroy();
		cargoingleft1.destroy();
		cargoingleft1copy.destroy();
		cargoingleft1copy2.destroy();
		cargoingleft2.destroy();
		cargoingleft2copy.destroy();
		cargoingleft2copy2.destroy();
		cargoingright1.destroy();
		cargoingright1copy.destroy();
		cargoingright1copy2.destroy();
		cargoingright2.destroy();
		cargoingright2copy.destroy();
		cargoingright2copy2.destroy();
		cargoingleft3.destroy();
		cargoingleft3copy.destroy();
		cargoingleft3copy2.destroy();
		cargoingright3.destroy();
		cargoingright3copy.destroy();
		cargoingright3copy2.destroy();
	}
	
	private function runover()
	{
		chicken.animation.play("dead", false, 0);
		canMove = false;
		var z = new FlxTimer(1, endgame, 1);
		var n = new FlxTimer(0.5, ressurect, 1);
	}
	
	function ressurect(Timer:FlxTimer)
	{
		chicken.animation.play("up", false, 0);
		chicken.alpha = 0.75;
	}
	
	private function startwait()
	{
		canMove = false;
		var s = new FlxTimer(2, startstart, 1);
	}
	
	private function startstart(Timer:FlxTimer)
	{
		canMove = true;
	}
	
	private function endgame(Timer:FlxTimer)
	{
		velocidad = 0;
		var n = new FlxTimer(1, gameOver, 1);
	}
	
	private function gameOver(Timer:FlxTimer)
	{
		FlxG.switchState(new CutScene2());
	}
	
	private function clickMenu()
	{
		FlxG.switchState(new MenuState());
	}
	
	private function clickSkip()
	{
		FlxG.switchState(new CutScene2());
	}
}