//
//  Carnivore.cpp
//  AnimalWorld
//
//  Created by Коротницкий Владимир on 13.08.2024.
//

#include "Carnivore.hpp"
#include <iostream>
using namespace std;

Carnivore::Carnivore()
{
    power = 0;
}

Carnivore::Carnivore(int p)
{
    try
    {
        if (p<=0)
            throw "power can't be less or equal to zero";
        power = p;
    }
    catch (const char* s)
    {
        cout << s << endl;
    }
}

//void Carnivore::feed(Herbivore* obj)
//{
//    if (power > obj->getPower())
//    {
//        power+=10;
//        obj->setAlive(false);
//        cout << "Carnivore eats herbivore and gets +10 to it's power. Herbivore dies" << endl;
//    }
//    else
//    {
//        power-=10;
//        cout << "Carnivore was not able to eat herbivore and gets -10 to it's power. Herbivore escapes" << endl;
//    }
//}

void Carnivore::setPower(int p)
{
    if (p>0)
        power = p;
}

int Carnivore::getPower() const
{
    return power;
}

void Lion::feed(Herbivore* obj)
{
    if (power > obj->getPower())
    {
        power+=10;
        obj->setAlive(false);
        cout << "Lion eats wildebeest and gets +10 to it's power. Wildebeest dies. Lion's power now is " << power << endl;
    }
    else
    {
        power-=10;
        cout << "Lion was not able to catch wildebeest and gets -10 to it's power. Wildebeest escapes. Lion's power now is " << power << endl;
    }
}

void Wolf::feed(Herbivore* obj)
{
    if (power > obj->getPower())
    {
        power+=10;
        obj->setAlive(false);
        cout << "Wolf eats bison and gets +10 to it's power. Bison dies. Wolf's power now is " << power << endl;
    }
    else
    {
        power-=10;
        cout << "Wolf was not able to catch bison and gets -10 to it's power. Bison escapes. Wolf's power now is " << power << endl;
    }
}
