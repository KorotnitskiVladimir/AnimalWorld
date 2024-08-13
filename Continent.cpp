//
//  Continent.cpp
//  AnimalWorld
//
//  Created by Коротницкий Владимир on 13.08.2024.
//

#include "Continent.hpp"
#include <iostream>
using namespace std;

Continent::Continent()
{
    population = 0;
    herbivores = nullptr;
    carnivores = nullptr;
}

Continent::Continent(int p)
{
    try
    {
        if (p<=0)
            throw "population can't be less or equal to zero";
        population = p;
    }
    catch (const char* s)
    {
        cout << s << endl;
    }
}

void Continent::setPopulation(int p)
{
    if (p>0)
        population = p;
}

int Continent::getPopulation() const
{
    return population;
}

Carnivore* Continent::getCarnivores() const
{
    if (carnivores)
        return carnivores;
    else
        return nullptr;
}

Herbivore* Continent::getHerbivores() const
{
    if (herbivores)
        return herbivores;
    else
        return nullptr;
}

void Africa::initCarnivores()
{
    if (population>0)
    {
        if (carnivores)
        {
            for (int i=0; i<population; i++)
                (carnivores+i)->setPower(rand()%100+10);
        }
        else
        {
            carnivores = new Lion[population];
            for (int i=0; i<population; i++)
                (carnivores+i)->setPower(rand()%100+10);
        }
    }
}

void Africa::initHerbivores()
{
    if (population>0)
    {
        if (herbivores)
        {
            for (int i=0; i<population; i++)
            {
                (herbivores+i)->setPower(rand()%100+10);
                (herbivores+i)->setWeight(rand()%300+50);
                (herbivores+i)->setAlive(true);
            }
        }
        else
        {
            herbivores = new Wildebeest[population];
            for (int i=0; i<population; i++)
            {
                (herbivores+i)->setPower(rand()%100+10);
                (herbivores+i)->setWeight(rand()%300+50);
                (herbivores+i)->setAlive(true);
            }
        }
    }
}

void Africa::mealsHerbivores()
{
    initHerbivores();
    for (int i=0; i<population; i++)
    {
        (herbivores+i)->feed();
    }
}

void Africa::nutritionCarnivores()
{
    initCarnivores();
    for (int i=0; i<population; i++)
    {
        (carnivores+i)->feed(herbivores+i);
    }
}

void NorthAmerica::initCarnivores()
{
    if (population>0)
    {
        if (carnivores)
        {
            for (int i=0; i<population; i++)
                (carnivores+i)->setPower(rand()%100+10);
        }
        else
        {
            carnivores = new Wolf[population];
            for (int i=0; i<population; i++)
                (carnivores+i)->setPower(rand()%100+10);
        }
    }
}

void NorthAmerica::initHerbivores()
{
    if (population>0)
    {
        if (herbivores)
        {
            for (int i=0; i<population; i++)
            {
                (herbivores+i)->setPower(rand()%100+10);
                (herbivores+i)->setWeight(rand()%300+50);
                (herbivores+i)->setAlive(true);
            }
        }
        else
        {
            herbivores = new Bison[population];
            for (int i=0; i<population; i++)
            {
                (herbivores+i)->setPower(rand()%100+10);
                (herbivores+i)->setWeight(rand()%300+50);
                (herbivores+i)->setAlive(true);
            }
        }
    }
}

void NorthAmerica::mealsHerbivores()
{
    initHerbivores();
    for (int i=0; i<population; i++)
    {
        (herbivores+i)->feed();
    }
}

void NorthAmerica::nutritionCarnivores()
{
    initCarnivores();
    for (int i=0; i<population; i++)
    {
        (carnivores+i)->feed(herbivores+i);
    }
}
