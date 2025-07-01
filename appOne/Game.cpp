#include "Game.h"
#include "framework.h"
#include "graphic.h"
bool Game::Init()
{
    window(1024, 768);
    return true;
}

void Game::RunLoop()
{
    while (notQuit)
    {
        ProcessInput();
        UpdateGame();
        GenerateOutPut();
    }
}

void Game::Uninit()
{

}

void Game::ProcessInput()
{
}

void Game::UpdateGame()
{
}

void Game::GenerateOutPut()
{
    clear(64, 128, 255);
}
