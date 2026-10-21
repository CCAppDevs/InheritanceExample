#pragma once
#include "Fruit.h"


class Berry : public Fruit
{
protected:
	void GetTasteProfile();

private:
	int numberInCluster;

public:

	Berry(string name, int numBerries);
};

