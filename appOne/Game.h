#pragma once
class Game
{
public:
	bool Init();
	void RunLoop();
	void Uninit();
private:
	void ProcessInput();
	void UpdateGame();
	void GenerateOutPut();
};

