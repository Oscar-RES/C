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
    string input;
    while(1){//infinite loop
    cout << "\nWhat do you want to create?" << endl; //ask for input
    cout << "Options: wizard, object1, object2" <<endl; //give options
    cin >> input; //input
    if(input == "wizard"){
        Wizard *w;
        w = new Wizard;
        w->run();
        w->hover();
        delete(w);


    } else if(input == "object1"){ //creates Minotaur
        Minotaur *m;
        m = new Minotaur;
        m->charge();
        delete(m);

    } else if(input == "object2"){ //creates Harpy
        Harpy *h;
        h = new Harpy;
        h->soar();
        delete(h);
    } else if(input == "quit"){ //quits execution
        break;
    }
    }

    return 0;
}