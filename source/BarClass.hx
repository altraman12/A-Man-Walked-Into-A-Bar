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

	public function new(X:Float=0, Y:Float=0, level:PlayState, ?SimpleGraphic:Dynamic) 
	{
		super(X, Y, SimpleGraphic);
		this.loadGraphic("assets/images/bar.png");
		this.y = (Math.random() * FlxG.height / 4) + FlxG.height/4;
		state = level;
	}
	
	public override function update()
	{
		this.x -= state.speed;
		if (this.x <= 0)
		{
			this.x = FlxG.width;
			this.y = (Math.random() * FlxG.height / 4) + FlxG.height/4;
		}
	}	
}