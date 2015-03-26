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
class CutScene3 extends FlxState
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
		var f1 = new FlxSprite(0, 0, "assets/images/Cutscene3/cg1(1).png");
		f.push(f1);
		var f2 = new FlxSprite(0, 0, "assets/images/Cutscene3/cg2(1).png");
		f.push(f2);
		var f3 = new FlxSprite(0, 0, "assets/images/Cutscene3/cg3(1).png");
		f.push(f3);
		var f4 = new FlxSprite(0, 0, "assets/images/Cutscene3/cg4(1).png");
		f.push(f4);
		var f5 = new FlxSprite(0, 0, "assets/images/Cutscene3/cg5.png");
		f.push(f5);
		add(f1);
		super.create();
	}
	
	override public function update()
	{
		if (justPressed())
		{
			frame+= 1;
			if (frame == 5)
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