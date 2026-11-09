#include<iostream>
#include"Enemy.h"

int main()
{
	std::cout << "1" << std::endl;

	Enemy* enemy = new Enemy();

	enemy->Update();
	enemy->Draw();

	delete enemy;
	enemy = nullptr;;
	std::cout << "9" << std::endl;
	
	return 0;
}
