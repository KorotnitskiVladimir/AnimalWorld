//
//  Herbivore.hpp
//  AnimalWorld
//
//  Created by Коротницкий Владимир on 13.08.2024.
//

#ifndef Herbivore_hpp
#define Herbivore_hpp

#include <stdio.h>
class Herbivore
{
protected:
    int weight;
    int power;
    bool alive;
public:
    Herbivore();
    Herbivore(int w, int p);
    virtual ~Herbivore() {}
    virtual void feed() = 0;
    void setWeight(int w);
    void setPower(int p);
    void setAlive(bool a);
    int getWeight() const;
    int getPower() const;
    bool getAlive() const;
};

class Wildebeest: public Herbivore
{
public:
    Wildebeest() {weight = power = 0; alive = false;}
    Wildebeest(int w, int p): Herbivore(w, p) {}
    virtual ~Wildebeest() {}
    virtual void feed();
};

class Bison: public Herbivore
{
public:
    Bison() {weight = power = 0; alive = false;}
    Bison(int w, int p): Herbivore(w, p) {alive = true;}
    virtual ~Bison() {}
    virtual void feed();
};

#endif /* Herbivore_hpp */
