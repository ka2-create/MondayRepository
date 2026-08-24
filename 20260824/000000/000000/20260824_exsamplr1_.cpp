#include<iostream>
using namespace std;

int main(void)
{
	//変数
	int a = 0;
	//ポインターからaを取得
	int* p = &a;
	//出力
	cout << "aの初期値：" << a << endl;

	*p = 10;

	cout << "aの変更後値" << a << endl;

	return 0;
}

