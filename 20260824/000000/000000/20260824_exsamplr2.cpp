#include<iostream>
using namespace std;

int main(void)
{
	//配列
	//int ary[5];
	int* pAry;
	int numbers[5] = { 10, 20, 30, 40, 50 };

		//pAryは配列の先頭をさす
		pAry = numbers;
	/*for (int i = 0; i < 5; i++)
	{
		cout << "&ary[" << i << "]:" << &ary[i] << endl;
		cout << "pAry" << pAry + i << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		cin >> *(pAry + i);
	}*/

	for (int i = 0; i < 5; i++)
	{
		cout << "" << *(pAry + i) << endl;
	}
	return 0;
}

