#include "Berry.h"

void Berry::GetTasteProfile()
{
	cout << this->Name << " is a delicious berry. It tastes great.\n";
}

Berry::Berry(string name, int numBerries) : Fruit(name)
{
	this->numberInCluster = numBerries;
	cout << this->Name << " is a Berry.\n";
	cout << this->Name << " has a cluster size of: " << this->numberInCluster << endl;
}
