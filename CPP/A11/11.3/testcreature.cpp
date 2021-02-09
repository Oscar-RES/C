/*
CH-230-A
testcreature.cpp
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"
using namespace std;

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    //Creating Minotaur 1
    Minotaur m;
    m.charge();
    //Creating Minotaur 2
    Minotaur m2(9,8);
    m2.charge();

    //creating Harpy 1
    Harpy h;
    h.soar();
    //creating Harpy 2
    Harpy h2(50,7.0);
    h2.soar();

    return 0;
}