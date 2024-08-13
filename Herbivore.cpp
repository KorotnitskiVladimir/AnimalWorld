//
//  Herbivore.cpp
//  AnimalWorld
//
//  Created by Коротницкий Владимир on 13.08.2024.
//

#include "Herbivore.hpp"
#include <iostream>
using namespace std;

Herbivore::Herbivore()
{
    weight = power = 0;
    alive = false;
}

Herbivore::Herbivore(int w, int p)
{
    try
    {
       if (w<=0 || p<=0)
       {
           throw "values can't be equal or less than zero";
       }
       weight = w;
       power = p;
       alive = true;
    }
    catch (const char* s)
    {
        cout << s << endl;
    }
}

//void Herbivore::feed()
//{
//    weight+=10;
//    cout << "Herbivore eats and gets +10 KGS to it's weight" << endl;
//}

void Herbivore::setWeight(int w)
{
    if (w>0)
        weight = w;
}

void Herbivore::setPower(int p)
{
    if (p>0)
        power = p;
}

void Herbivore::setAlive(bool a)
{
    alive = a;
}

int Herbivore::getWeight() const
{
    return weight;
}

int Herbivore::getPower() const
{
    return power;
}

bool Herbivore::getAlive() const
{
    return alive;
}

void Wildebeest::feed()
{
    weight+=10;
    cout << "Wildebeest eats and gets +10 KGS to it's weight. It weights now " << weight << " KGS" << endl;
}

void Bison::feed()
{
    weight+=10;
    cout << "Bison eats and gets +10 KGS to it's weight. It weights now " << weight << " KGS" << endl;
}
