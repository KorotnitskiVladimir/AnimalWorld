//
//  Carnivore.hpp
//  AnimalWorld
//
//  Created by Коротницкий Владимир on 13.08.2024.
//

#ifndef Carnivore_hpp
#define Carnivore_hpp

#include <stdio.h>
#include "Herbivore.hpp"

class Carnivore
{
protected:
    int power;
public:
    Carnivore();
    Carnivore(int p);
    virtual ~Carnivore() {}
    virtual void feed(Herbivore* obj) = 0;
    void setPower(int p);
    int getPower() const;
};

class Lion: public Carnivore
{
public:
    Lion() {power = 0;}
    Lion(int p): Carnivore(p) {}
    virtual ~Lion() {}
    void feed(Herbivore* obj);
};

class Wolf: public Carnivore
{
public:
    Wolf() {power = 0;}
    Wolf(int p): Carnivore(p) {}
    virtual ~Wolf() {}
    void feed(Herbivore* obj);
};

#endif /* Carnivore_hpp */
