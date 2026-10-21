#include "Fruit.h"

void Fruit::PrintDescription()
{
	cout << "I am a fruit of type: " << this->Name;
}

void Fruit::Eat()
{
	this->GetTasteProfile();
}

Fruit::Fruit(string name)
{
	this->Name = name;
	cout << this->Name << " is a fruit.\n";
}
