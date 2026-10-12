#include<iostream>
#include"Character.h"
using namespace std;
int main()
{
	//コンストラクタ
	Character character(";m;");
		cout << character.GetName() << endl;

		character.Attack();
	return 0;
}