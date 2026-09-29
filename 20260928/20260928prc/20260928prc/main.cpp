#include<cstdlib>
#include<ctime>
#include"Game.h"

int main(void)
{
	//乱数初期化
	srand(static_cast<unsigned int>(time(nullptr)));
	//ゲーム初期化
	Game game;
	//ゲームの開始
	game.Start();
	return 0;
}

