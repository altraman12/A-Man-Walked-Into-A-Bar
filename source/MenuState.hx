package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.util.FlxColor;


class MenuState extends FlxState
{
	override public function create():Void
	{		
		var titleTxt:FlxText;
		titleTxt = new FlxText(30, 30, 0);
		titleTxt.wordWrap = false;
		titleTxt.autoSize = true;
		titleTxt.text = "A Man Walks Into A Bar";
		titleTxt.setFormat(42, FlxColor.WHITE);
		titleTxt.x = (256 + 64 + 32);
		add(titleTxt);
		
		var btnPlay:FlxButton;
		btnPlay = new FlxButton(FlxG.width / 2 - 40, FlxG.height / 2, "Play", clickPlay);
		add(btnPlay);
		
		var btnOptions:FlxButton;
		btnOptions = new FlxButton(FlxG.width / 2 - 40, FlxG.height / 2 + 60, "Options", clickOptions);
		add(btnOptions);
	}
	
	override public function destroy():Void
	{
		super.destroy();
	}

	override public function update():Void
	{
		super.update();
	}	
	
	private function clickPlay()
	{
		FlxG.switchState(new PlayState());
	}
	
	private function clickOptions()
	{
		FlxG.switchState(new OptnState());
	}
}