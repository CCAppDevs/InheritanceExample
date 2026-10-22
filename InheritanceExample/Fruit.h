#pragma once
#include <iostream>

using namespace std;

class Fruit
{
protected:

	virtual void GetTasteProfile();

	string Name;

public:
	Fruit(string name); // constructor

	void PrintDescription();
	void Eat();
};

