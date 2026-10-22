#include "Citrus.h"

void Citrus::GetTasteProfile()
{
	cout << this->Name << " is a delicious citrus fruit. It tastes very sour.\n";

	if (this->isExtraSour)
	{
		cout << "THIS IS SO SOUR!\n";
	}
}

Citrus::Citrus(string name, bool extraSour) : Fruit(name)
{
	this->isExtraSour = extraSour;
	cout << this->Name << " is a citrus.\n";
}
