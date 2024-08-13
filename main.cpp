//
//  main.cpp
//  AnimalWorld
//
//  Created by Коротницкий Владимир on 13.08.2024.
//

#include <iostream>
#include "Continent.hpp"
using namespace std;

int main()
{
    srand(time(NULL));
    char s;
    int n;
    cout << "Welcome to animal world simulation programm" << endl;
    cout << "First choose continent to create: a - Africa, n - North America-> " << endl;
    cin >> s;
    cout << "Now enter amount of spicies on continent ->" << endl;
    cin >> n;
    if (n>0)
    {
        animalWorld* p;
        switch (s)
        {
            case 'a':
            {
                p = new Africa(n);
                p->mealsHerbivores();
                p->nutritionCarnivores();
                break;
            }
            case 'n':
            {
                p = new NorthAmerica(n);
                p->mealsHerbivores();
                p->nutritionCarnivores();
                break;
            }
            default:
                cout << "Wrong input" << endl;
        }
        //delete p;
    }
    else
        cout << "population can't be less or equal to zero" << endl;
    
    return 0;
}
