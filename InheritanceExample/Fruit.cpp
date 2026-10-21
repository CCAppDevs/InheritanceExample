#include "Fruit.h"

void Fruit::PrintDescription()
{
	cout << "I am a fruit of type: " << this->Name;
}

Fruit::Fruit(string name)
{
	this->Name = name;
}
