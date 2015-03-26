package;

import flixel.animation.FlxAnimation;
import flixel.animation.FlxAnimationController;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.group.FlxTypedGroup;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.util.FlxPoint;
import flixel.util.FlxTimer;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import flixel.addons.display.FlxBackdrop;
import haxe.Timer;

/**
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxState
{
	public var player:FlxSprite;
	var runAnim:FlxAnimation;
	var jumpAnim:FlxAnimation;
	var slideAnim:FlxAnimation;
	var jumpDuration = 0.75;
	var maxBars = 5;
	public var bars:FlxTypedGroup<BarClass>;
	var bar:BarClass;
	public var alcoholBar:FlxSprite;
	var bg:FlxBackdrop;
	public var speed = 10;
	var levelTime = 36;
	public var dead = false;
	
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
	
	public function roundToNearest(number, nearest):Int
	{
		return Math.round(number / nearest) * nearest;
	}
	 
	override public function create():Void
	{
		//temporary level skip button
		var btnChicken:FlxButton;
		btnChicken = new FlxButton(FlxG.width - 80, 0, "Level 2", clickChicken);
		
		//temporary menu button
		var btnMenu:FlxButton;
		btnMenu = new FlxButton(0, 0, "Main Menu", clickMenu);
		
		bg = new FlxBackdrop("assets/images/Stage1/bg.png", 1, 0, true, false);
		add(bg);
		
		bars = new FlxTypedGroup<BarClass>();
		
		alcoholBar = new FlxSprite(roundToNearest(60 * speed * levelTime,320) , 230, "assets/images/Stage1/alcolholbar.png");
		alcoholBar.loadGraphic("assets/images/Stage1/alcolholbar.png");
		add(alcoholBar);
		
		{//set up player
			player = new FlxSprite(FlxG.width / 5, FlxG.height / 2);
			player.loadGraphic("assets/images/Stage1/barwalker.png", true, 64, 64, true);
			add(player);
			player.animation.add("run", [7, 8, 9, 10, 11, 12, 13], 30, true);
			player.animation.add("jump", [14, 15, 16, 17, 18, 19, 20], Math.ceil(7/jumpDuration), false);
			player.animation.add("slide", [21], 30, false);
			player.animation.add("die", [23], 30, false);
			super.create();
			run();
		}
		
		{//set up bars
			bar = new BarClass(roundToNearest(FlxG.width,160), 0, this);
			add(bar);
		}
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		player.destroy();
		bar.destroy();
		super.destroy();
	}
	
	function run()
	{
		if (!dead)
		{
			player.animation.play("run", false, 0);
		}
	}
	
	function runTime(Timer:FlxTimer):Void
	{
		player.animation.play("run",false,0);
	}
	
	function runTween(Tween:FlxTween):Void
	{
		player.animation.play("run",false,0);
	}
	
	
	function jump() 
	{
		player.animation.play("jump",false,0);
		FlxTween.tween(player, { x:FlxG.width / 5, y:(FlxG.height / 2)-(player.height*1.125)}, jumpDuration / 2, { ease: FlxEase.quadOut, complete: fall } );
	}
	
	function fall(Tween:FlxTween)
	{
		FlxTween.tween(player, { x:FlxG.width/5, y:FlxG.height/2 }, jumpDuration/2, { ease: FlxEase.quadIn, complete: runTween});
	}
	
	function slide()
	{
		player.animation.play("slide", false, 0);
		if (justReleased())
		{
			slideBool = false;
			run();
		}
	}
	

	var slideBool = false;
	
	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{		
		super.update();
		
		if (player.x>=alcoholBar.x)
		{
			FlxG.switchState(new CutScene1());
		}
		
		bg.x -= speed;
		alcoholBar.x -= speed;
		
		/*{//physics
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
		}*/
		{//controls
			if (slideBool)
			{
				slide();
			}
			
			if (player.animation.curAnim == player.animation.getByName("run"))
			{
				if (justPressed()&&(clickCoords().y <= FlxG.height/2))
				{
					jump();
				}
				
				if (justPressed() && (clickCoords().y > FlxG.height / 2))
				{
					slideBool = true;
					slide();
				}
			}
		}

	}
	
	private function clickChicken()
	{
		FlxG.switchState(new CutScene1());
	}
	
	private function clickMenu()
	{
		FlxG.switchState(new MenuState());
	}
}
