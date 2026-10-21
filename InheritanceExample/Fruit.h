#pragma once
#include <iostream>

using namespace std;

class Fruit
{
private:

	string Name;

	//virtual void GetTasteProfile() = 0;

public:
	void PrintDescription();
	Fruit(string name); // constructor
};

