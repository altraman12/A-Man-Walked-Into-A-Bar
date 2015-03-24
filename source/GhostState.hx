package;

import flixel.addons.display.FlxBackdrop;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.FlxG;
import flixel.group.FlxTypedGroup;
import flixel.group.FlxTypedGroupIterator;
import flixel.text.FlxText;
import flixel.util.FlxPoint;
/**
 * ...
 * @author ...
 */
class GhostState extends FlxState
{
	var ghost:FlxSprite;
	var hall:FlxBackdrop;
	var wall:FlxSprite;
	var knock :Array<FlxText>;
	public var doors:FlxTypedGroup<Door>;
	public var speed = 0;
	public var inTransit:Bool;
	public var knockCount = 0;
	public var doneWithThisDoor = false;
	public var doorIndex = 0;
	
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
		hall = new FlxBackdrop("assets/images/Stage3/hall wall.png", 0, 0, true, false);
		add(hall);
		
		doors = new FlxTypedGroup<Door> ();
		add(doors);
		
		#if web
			doors.add(new Door(((FlxG.width/2) - 259) + 465 + 175, (FlxG.height - 280) / 2, this, "assets/images/Stage3/door.png"));
		#else
			doors.add(new Door(((FlxG.width - 250-(175/2)-10) / 2) + 465 + 175, (FlxG.height - 280) / 2, this, "assets/images/Stage3/door.png"));
		#end
		
		ghost = new FlxSprite(FlxG.width / 2, FlxG.height / 2, "assets/images/Stage3/chicken ghost.png");
		ghost.loadGraphic("assets/images/Stage3/chicken ghost.png", true, 75, 100);
		ghost.animation.add("right", [0], 30, true);
		ghost.animation.add("forward", [1], 30, true);
		ghost.animation.add("back", [2], 30, true);
		add(ghost);
		
		speed = 0;
		super.create();
		
		knock = new Array();
		knock.push(new FlxText(ghost.x+25, ghost.y-35, -1, "*knock*", 20));
		knock.push(new FlxText(ghost.x+25, ghost.y - 85, -1, "*knock*", 20));
		for (member in knock)
		{
			member.color = 0x000000;
			add(member);
			member.kill();
		}
		
		nextDoor();
	}
	
	public function nextDoor()
	{
		inTransit = true;
		if (ghost.x <= doors.members[doorIndex].x)
		{
			speed = 10;
			ghost.animation.play("right");
		}
		else
		{
			speed = 0;
			inTransit = false;
			doorIndex++;
			ghost.animation.play("forward");
		}
	}
	
	override public function update()
	{
		hall.x -= speed;
		
		/*	var i = 0;
		while (i < doors.members.length)
		{
			var basic = doors.members[i++];
			
			if (basic != null && basic.exists && basic.active)
			{
				basic.update();
			}
		}*/
		
		if (inTransit)
		{
			nextDoor();
		}
		
		super.update();
		
		if (justPressed()&&!inTransit)
		{
			
			if (knockCount == 2)
			{
				knockCount = 0;
				for (member in knock)
				{
					member.kill();
				}
				doors.members[doorIndex-1].open();
				FlxG.watch.add(this,"doorIndex");
				nextDoor();
			}
			else 
			{
				knock[knockCount].revive();
				knockCount++;
			}
		}
	}
	
}