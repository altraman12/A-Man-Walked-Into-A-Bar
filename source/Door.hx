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
		state = level;
		state.doors.add(this);
	}
	
	public override function update():Void
	{
		if (firstPass)
		{
			if (x <= FlxG.width / 2)
			{
				state.add(new Door(x+464+175, (FlxG.height - 280) / 2, state));
				firstPass = false;
			}
		}
		
		this.x -= state.speed;
		if (this.x <= 0-this.width)
		{
			this.destroy();
		}
	}	
	
}