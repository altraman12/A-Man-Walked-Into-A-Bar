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
	public var ghost:FlxSprite;
	var hall:FlxBackdrop;
	var wall:FlxSprite;
	var knock :Array<FlxText>;
	public var doors:FlxTypedGroup<Door>;
	public var speed = 0;
	public var inTransit:Bool;
	public var knockCount = 0;
	public var doneWithThisDoor = false;
	public var doorIndex = 0;
	public var doorAnimIndex = 0;
	public var playDoor = false;
	var doorOpen = false;
	public var score = 150;
	public var scoreText:FlxText;
	public var time = 60 * 30;
	public var timeText:FlxText;
	
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
		
		scoreText = new FlxText(FlxG.width / 2, 0, 0, "150", 20, true);
		add(scoreText);
		
		timeText = new FlxText(0, 0, 0, "" + (60 * 30), 20, true);
		add(timeText);
		
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
		doorOpen = false;
	}
	
	override public function update()
	{
		
		super.update();
		
		hall.x -= speed;
		scoreText.text = "" + score;
		time--;
		timeText.text = "" + Math.ceil(time);
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
		
		if (playDoor)
		{
			if (doorAnimIndex <= 8)
			{
				if (Math.round(doorAnimIndex/2)==doorAnimIndex/2)
				{
					trace(Math.round(doorAnimIndex));
					trace(doorAnimIndex);
					doors.members[doorIndex - 1].animation.play("open"+((doorAnimIndex/2)+1));
					doorAnimIndex++;
				}
				else 
				{
					doorAnimIndex++;
				}
			}
			else 
			{
				doorAnimIndex = 0;
				playDoor = false;
				doorOpen = true;
				for (member in knock)
				{
					member.kill();
				}
			}
		}
		
		
		if (justPressed()&&!inTransit)
		{
			
			if (knockCount == 2)
			{
				if (doorOpen)
				{
					var curdoor = doors.members[doorIndex - 1];
					knockCount = 0;
					doorOpen = false;
					curdoor.surprise();
					nextDoor();
					score--;
				}
				else
				{
					var curdoor = doors.members[doorIndex - 1];
					knockCount = 0;
					doorOpen = false;
					
					if ((doorIndex+1) - (150-score) > 3)
					{
						speed = 0;
						ghost.loadGraphic("assets/images/Stage3/redascension.jpg", true, Math.round(512 / 4), 720, false);
						ghost.y = 0;
						ghost.animation.add("die", [1, 2, 3], 30, false);
						ghost.animation.play("die",true,3);
						//nextStage
					}
					else 
					{
						curdoor.xOut();
						nextDoor();
					}
				}
			}
			else 
			{
				knock[knockCount].revive();
				knockCount++;
				if (knockCount == 2)
				{
					playDoor = true;
					doorOpen = false;
				}
			}
		}
		
	}
	
}