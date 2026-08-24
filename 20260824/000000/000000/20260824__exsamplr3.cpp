#include<iostream>
using namespace std;

int main(void)
{
	//配列

	int* pAry;	
	int max;
	int numbers[5] = { 35, 82, 17, 96, 54 };

	//pAryは配列の先頭をさす
	pAry = numbers;
	//暫定の最大値を代入
	max = pAry[0];
	//
	for (int i = 0; i < 5; i++)
	{
		cout << "" << *(pAry + i) << endl;
	}
	//最初の値は暫定の最大値に代入してるため無視
	for (int i = 0; i < 5-1; i++)
	{
		//暫定の最大値と比較する
		if (*(pAry+i+1)>max)
		{
			max = *(pAry + i+1);
		}
	}
	//
	cout << "max : " << max << endl;

	return 0;
}

