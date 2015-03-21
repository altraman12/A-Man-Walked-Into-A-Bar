package;

import flixel.animation.FlxAnimation;
import flixel.animation.FlxAnimationController;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.util.FlxPoint;
import flixel.util.FlxTimer;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;

/**
 * ...
 * @author ...
 */
class BarClass extends FlxSprite
{
	var state:PlayState;
	var barRange:Float;
	var firstPass:Bool;

	public function new(X:Float=0, Y:Float=0, level:PlayState, ?SimpleGraphic:Dynamic) 
	{
		super(X, Y, SimpleGraphic);
		this.loadGraphic("assets/images/bar.png");
		barRange = 2 * FlxG.height / level.player.height;
		this.y = (Math.random() * FlxG.height / barRange) + ((FlxG.height/2)-(FlxG.height/barRange));
		state = level;
		firstPass = true;
		level.bars.add(this);
	}
	
	public override function update()
	{
		if (firstPass)
		{
			if (x <= FlxG.width / 2)
			{
				state.add(new BarClass(FlxG.width, 0, state));
				firstPass = false;
			}
		}
		
		this.x -= state.speed;
		if (this.x <= 0-this.width)
		{
			this.destroy();
		}
		
		if (FlxG.overlap(this, state.player))
		{
			collide();
		}
	}	
	
	function gameOver(Timer:FlxTimer) 
	{
		FlxG.switchState(new ChickenState());
	}
	
	
	public function collide()
	{
		if (FlxG.pixelPerfectOverlap(this, state.player, 255))
		{
			var t = new FlxTimer(1, gameOver, 1);
			state.player.animation.play("die", true, 0);
			state.player.x = this.x;
			state.speed = 0;
		}
	}
}