#include <iostream>
#include "Creature.h"
using namespace std;

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  
Creature::~Creature(){
    cout << "destroying Creature\n";
}

Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
Wizard::~Wizard(){
    cout << "\ndestroying Wizard\n";
}

Minotaur::Minotaur() : damFactor(5)
{
    aggro = 10;
    cout << "\nCreating a Minotaur with aggro level " << aggro <<endl;
}
Minotaur::Minotaur(int naggro, int ndamFactor = 5){
    aggro = naggro;
    damFactor = ndamFactor;
    cout << "\nCreating a Minotaur with aggro level " << aggro <<endl;
}
//gets the damage the charge will deal
void Minotaur::charge() const
{
    cout << "charging " << distance << " meters!\n";
    cout << "Dealt " << (damFactor * distance) << "hp!\n";
}
Minotaur::~Minotaur(){
    cout << "\ndestroying Minotaur\n";
}

Harpy::Harpy() : time(10) 
{
    hp = 100;
    speed = 1;
    cout << "\nCreating a Harpy with  " << hp << "hp\n";
}

Harpy::Harpy(int nhp, float ntime){
    hp = nhp;
    time = ntime;
    speed = distance/time;
    cout << "\nCreating a Harpy with  " << hp << "hp\n";
}
//gets speed of Harpy
void Harpy::soar() const
{
    cout << "soaring " << distance << " meters\n";
    cout << "soaring at " << (speed) << " m/s!\n";
}

Harpy::~Harpy(){
    cout << "\ndestroying Harpy\n";
}