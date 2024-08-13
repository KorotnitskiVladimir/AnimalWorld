//
//  Continent.hpp
//  AnimalWorld
//
//  Created by Коротницкий Владимир on 13.08.2024.
//

#ifndef Continent_hpp
#define Continent_hpp

#include <stdio.h>
#include "Herbivore.hpp"
#include "Carnivore.hpp"

struct animalWorld
{
    virtual void mealsHerbivores() = 0;
    virtual void nutritionCarnivores() = 0;
};

class Continent
{
protected:
    int population;
    Carnivore* carnivores;
    Herbivore* herbivores;
public:
    Continent();
    Continent(int p);
    virtual ~Continent()
    {
        if (herbivores)
            delete [] herbivores;
        if (carnivores)
            delete [] carnivores;
    }
    void setPopulation(int p);
    int getPopulation() const;
    virtual void initCarnivores() = 0;
    virtual void initHerbivores() = 0;
    Carnivore* getCarnivores() const;
    Herbivore* getHerbivores() const;
};

class Africa:public Continent, public animalWorld
{
public:
    Africa() {population = 0; carnivores = nullptr; herbivores = nullptr;}
    Africa (int p): Continent(p) {carnivores = new Lion[p]; herbivores = new Wildebeest[p];}
    virtual ~Africa() {}
//    {
//        if (carnivores)
//            delete [] carnivores;
//        if (herbivores)
//            delete [] herbivores;
//    }
    virtual void initCarnivores();
    virtual void initHerbivores();
    virtual void mealsHerbivores();
    virtual void nutritionCarnivores();
};

class NorthAmerica: public Continent, public animalWorld
{
public:
    NorthAmerica() {population = 0; carnivores = nullptr; herbivores = nullptr;}
    NorthAmerica (int p): Continent(p) {carnivores = new Wolf[p]; herbivores = new Bison[p];}
    virtual ~NorthAmerica() {}
//    {
//        if (carnivores)
//            delete [] carnivores;
//        if (herbivores)
//            delete [] herbivores;
//    }
    virtual void initCarnivores();
    virtual void initHerbivores();
    virtual void mealsHerbivores();
    virtual void nutritionCarnivores();
};

#endif /* Continent_hpp */
