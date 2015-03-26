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
class CutScene2 extends FlxState
{
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
	
	var frame:Int;
	var f:Array<FlxSprite>;
	override public function create() 
	{
		frame = 0;
		f = new Array<FlxSprite>();
		var f5 = new FlxSprite(0, 0, "assets/images/Cutscene2/cg5(1).jpg");
		f.push(f5);
		add(f5);
		super.create();
	}
	
	override public function update()
	{
		if (justPressed())
		{
			FlxG.switchState(new GhostState());
		}
		
		super.update();
	}
}