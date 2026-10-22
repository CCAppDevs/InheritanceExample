#pragma once
#include "Fruit.h"
class Citrus : public Fruit
{
protected:
	void GetTasteProfile();

public:
	Citrus(string name, bool extraSour);

	bool isExtraSour;
};

