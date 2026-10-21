#include "Citrus.h"

void Citrus::GetTasteProfile()
{
	cout << this->Name << " is a delicious citrus fruit. It tastes very sour.\n";
}

Citrus::Citrus(string name) : Fruit(name)
{
	cout << this->Name << " is a citrus.\n";
}
