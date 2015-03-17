package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
using flixel.util.FlxSpriteUtil;
import flixel.util.FlxDestroyUtil;
import org.flixel.*;
import flash.display.StageDisplayState;

class OptnState extends FlxState
{
	override public function create():Void
	{		
		var btnFullscreen:FlxButton;
		btnFullscreen = new FlxButton(FlxG.width / 2 - 40, FlxG.height / 2, "Fullscreen", clickFullscreen);
		add(btnFullscreen);
		
		var btnBack:FlxButton;
		btnBack = new FlxButton(FlxG.width / 2 - 40, FlxG.height - 100, "Back", clickBack);
		add(btnBack);
	}
	
	override public function destroy():Void
	{
		super.destroy();
	}
	
	override public function update():Void
	{
		super.update();
	}
	
	private function clickFullscreen()
	{
		if (FlxG.stage.displayState == StageDisplayState.NORMAL)
		{
			FlxG.stage.displayState = StageDisplayState.FULL_SCREEN;
		}
		else
		{
			FlxG.stage.displayState = StageDisplayState.NORMAL;
		}
	}
	
	private function clickBack()
	{
		FlxG.switchState(new MenuState());
	}
}