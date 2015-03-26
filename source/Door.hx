package;

import flixel.FlxSprite;
import flixel.FlxState;
import flixel.FlxG;

/**
 * ...
 * @author ...
 */
class Door extends FlxSprite
{
	var state:GhostState;
	var firstPass = true;
	var subdoor:Door;
	
	public function new(X:Float=0, Y:Float=0, level:GhostState, ?SimpleGraphic:Dynamic) 
	{
		super(X, Y, SimpleGraphic);
		loadGraphic("assets/images/Stage3/door.png", true, 175, 250, false);
		animation.add("open1", [1], 30, false);
		animation.add("open2", [2], 30, false);
		animation.add("open3", [3], 30, false);
		animation.add("open4", [4], 30, false);
		animation.add("open5", [5], 30, false);
		
		animation.add("close", [4, 3, 2, 1, 0], 30, false);
		state = level;
		//this.animation.play("open");
		//state.doors.add(this);
	}
	
	public override function update():Void
	{
		if (firstPass)
		{
			if (isOnScreen())
			{
				subdoor = new Door(x + 465 + 175, (FlxG.height - 280) / 2, state);
				state.doors.add(subdoor);
				firstPass = false;
			}
		}
		
		this.x -= state.speed;
		if (this.x <= 0-this.width)
		{
			this.destroy();
		}
	}	
	
	public function open()
	{
		trace("open");
		animation.play("open", true, 0);
	}
	
	public function close()
	{
		animation.play("close", true, 0);
	}
}