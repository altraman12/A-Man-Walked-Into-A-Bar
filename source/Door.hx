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
	var surprised:FlxSprite;
	var ex:FlxSprite;
	
	public function new(X:Float=0, Y:Float=0, level:GhostState, ?SimpleGraphic:Dynamic) 
	{
		super(X, Y, SimpleGraphic);
		state = level;
		if (state.score == 1)
		{
			loadGraphic("assets/images/Stage3/789 door.png", true, 175, 250, false);
		}
		else
		{
			loadGraphic("assets/images/Stage3/door.png", true, 175, 250, false);
		}
		animation.add("open1", [1], 30, false);
		animation.add("open2", [2], 30, false);
		animation.add("open3", [3], 30, false);
		animation.add("open4", [4], 30, false);
		animation.add("open5", [5], 30, false);
		
		surprised = new FlxSprite((this.x + (175 / 2)), this.y + 25, "assets/images/Stage3/surprised.png");
		ex = new FlxSprite((this.x + (175 / 2)), this.y+25, "assets/images/Stage3/x.png");
		
		animation.add("close5", [4, 3, 2, 1, 0], 30, false);
		//this.animation.play("open");
		//state.doors.add(this);
	}
	
	public override function update():Void
	{
		surprised.x = x + (160 / 2);
		ex.x = x;
		
		if (firstPass)
		{
			if (isOnScreen())
			{
				if (state.doors.members.length == 150)
				{
					state.ghost.loadGraphic("assets/images/Stage3/ascension.jpg", true, Math.round(512 / 4), 720, false);
					state.ghost.y = 0;
					state.ghost.animation.add("live", [1, 2, 3], 30, false);
					state.ghost.animation.play("live",true,3);
					FlxG.switchState(new CutScene3());
				}
				else
				{
					subdoor = new Door(x + 465 + 175, (FlxG.height - 280) / 2, state);
				}
				state.doors.add(subdoor);
				firstPass = false;
			}
		}
		
		this.x -= state.speed;
		if (this.x <= 0-this.width)
		{
			this.destroy();
			surprised.destroy();
			ex.destroy();
		}
	}	
	
	public function surprise()
	{
		state.add(surprised);
	}
	
	public function xOut()
	{
		state.add(ex);
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