#include "Game.h"
void gmain()
{
	Game game;
	bool success=game.Init();
	if (success)
	{
		game.RunLoop();
	}
	game.Uninit();
}