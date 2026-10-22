#include "Fruit.h"

void Fruit::PrintDescription()
{
	cout << "I am a fruit of type: " << this->Name << endl;
}

void Fruit::Eat()
{
	this->GetTasteProfile();
}

void Fruit::GetTasteProfile()
{
	cout << this->Name << " is a tasty fruit.\n";
}

Fruit::Fruit(string name)
{
	this->Name = name;
	cout << this->Name << " is a fruit.\n";
}
