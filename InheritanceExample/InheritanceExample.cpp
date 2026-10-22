#include <iostream>
#include "Fruit.h"
#include "Berry.h"
#include "Citrus.h"

#include <vector>;

using namespace std;

int main()
{
    Citrus * lemon = new Citrus("Lemon", false);

    Berry *strawberry = new Berry("Strawberry", 1);
    Berry* grape = new Berry("Grape", 35);

    // add each fruit to the list (fruit basket)
    vector<Fruit*> array = { lemon, strawberry, grape };

    lemon->isExtraSour = true;

    for (int i = 0; i < 1000; i++)
    {
        array.push_back(new Citrus("Orange", false)); // dynamic allocation
    }

    // go from first fruit to the last fruit and print the description then eat.
    for (Fruit* frt : array)
    {
        frt->PrintDescription();
        frt->Eat();
    }

    // dont forget to delete the pointers or you will get a memory leak
    for (int i = 0; i < array.size(); i++)
    {
        delete array[i];
    }
}

