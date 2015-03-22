package;

import flixel.addons.display.FlxBackdrop;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.FlxG;
import flixel.group.FlxTypedGroup;
import flixel.group.FlxTypedGroupIterator;
import flixel.util.FlxPoint;
/**
 * ...
 * @author ...
 */
class GhostState extends FlxState
{
	var ghost:FlxSprite;
	var hall:FlxBackdrop;
	var doorsIterator:FlxTypedGroupIterator<Door>;
	public var doors:FlxTypedGroup<Door>;
	public var speed = 10;
	
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
	
	override public function create() 
	{
		hall = new FlxBackdrop("assets/images/Stage3/hall.png", 0, 0, true, false);
		add(hall);
		
		doors = new FlxTypedGroup<Door> ();
		#if web
			add(new Door((FlxG.width/2) - 172, (FlxG.height - 280) / 2, this, "assets/images/Stage3/door.png"));
		#else
			add(new Door((FlxG.width - 175) / 2, (FlxG.height - 280) / 2, this, "assets/images/Stage3/door.png"));
		#end
		
		ghost = new FlxSprite(FlxG.width / 2, FlxG.height / 2, "assets/images/Stage3/chicken ghost.png");
		ghost.loadGraphic("assets/images/Stage3/chicken ghost.png", true, 75, 100);
		ghost.animation.add("right", [1], 30, true);
		ghost.animation.add("forward", [2], 30, true);
		ghost.animation.add("back", [3], 30, true);
		add(ghost);
		
		speed = 10;
		super.create();
	}
	
	override public function update()
	{
		hall.x -= speed;
		
		var i = 0;
		while (i < doors.members.length)
		{
			var basic = doors.members[i++];
			
			if (basic != null && basic.exists && basic.active)
			{
				basic.update();
			}
		}
	}
	
}