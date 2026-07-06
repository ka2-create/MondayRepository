#include<iostream>

using namespace std;
void Add(int& num)
{
	num += 10;
}
int main()
{
	int number;
	cout << "“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << endl;
	cin >> number;
	Add(number);
	cout << number << "‚Å‚·" << endl;
	return 0;
}


