#include <iostream>
#include "Fruit.h"

using namespace std;

int main()
{
    Fruit lemon = Fruit("Lemon");
    Fruit strawberry = Fruit("Strawberry");

    lemon.PrintDescription();
    cout << "\n";
    strawberry.PrintDescription();
}

