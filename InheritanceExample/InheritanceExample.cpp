#include <iostream>
#include "Fruit.h"
#include "Berry.h"
#include "Citrus.h"

using namespace std;

int main()
{
    Citrus lemon = Citrus("Lemon");
    Berry strawberry = Berry("Strawberry", 1);
    Berry grape = Berry("Grape", 35);

    lemon.PrintDescription();
    cout << "\n";
    lemon.Eat();
    cout << "\n";
    strawberry.PrintDescription();
    cout << "\n";
    strawberry.Eat();
    cout << "\n";
    grape.PrintDescription();
    cout << "\n";
    grape.Eat();
}

