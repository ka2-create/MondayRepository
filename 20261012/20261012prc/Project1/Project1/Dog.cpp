#include"Dog.h"
#include<iostream>
Dog::Dog(std::string name):Animal(name)
{}

void Dog::Speak()
{
	std::cout << "犬" << std::endl;
}