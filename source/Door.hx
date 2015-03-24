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
	
	public function new(X:Float=0, Y:Float=0, level:GhostState, ?SimpleGraphic:Dynamic) 
	{
		super(X, Y, SimpleGraphic);
		loadGraphic("assets/images/Stage3/door.png", true, 175, 250, false);
		animation.add("open", [0, 1, 2, 3, 4, 5], 30, false);
		animation.add("close", [5,4,3,2,1,0], 30, false);
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
				state.doors.add(new Door(x + 465 + 175, (FlxG.height - 280) / 2, state));
				//state.add(new Door(x+465+175, (FlxG.height - 280) / 2, state));
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