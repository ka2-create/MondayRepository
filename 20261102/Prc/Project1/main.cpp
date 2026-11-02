#include<iostream>
using namespace std;

namespace  player
{
	void shouStatus()
	{
		cout << "mm" << endl;
	}
}

namespace enemy
{
	void shouStatus()
	{
		cout << "ww" << endl;
	}
}

int main()
{
	player::shouStatus();
	enemy::shouStatus();
	return 0;
}