#include<iostream>
#include"Dog.h"
using namespace std;
int main(void)
{
	Dog dog("ŽÄŒ¢");
	cout << dog.GetName() << std::endl;

	dog.Speak();
}