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
class CutScene3Lose extends FlxState
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
		var f1 = new FlxSprite(0, 0, "assets/images/Cutscene3Lose/1.jpg");
		f.push(f1);
		var f2 = new FlxSprite(0, 0, "assets/images/Cutscene3Lose/2.jpg");
		f.push(f2);
		add(f1);
		super.create();
	}
	
	override public function update()
	{
		if (justPressed())
		{
			frame+= 1;
			if (frame == 2)
			{
				FlxG.switchState(new SixtyNineState());
			}
			else
			{
			add(f[frame]);
			}
		}
		
		super.update();
	}
}