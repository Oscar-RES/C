/*
CH-230-A
Critter.cpp
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

//constructors
Critter::Critter(){ //default constructor
    cout << "Using Constructor 1, you have created: " << endl;
    name = "default_critter";
    hunger = 0;
    height = 5;
    boredom = 0;
}

Critter::Critter(string n){ //constructor with string
    cout << "Using constructor 2, you have created: "<< endl;
    name = n;
    hunger = 0;
    height = 5;
    boredom = 0;
}

Critter::Critter(string n, int hun, int bor, double hei){ //constructor with all parameters hei = 10 by def
    cout << "Using constructor 3, you have created: " << endl;
    name = n;
    hunger = hun;
    boredom = bor;
    height = hei;
}

//setters
void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setHeight(double newheight) {
    height = newheight;
}

void Critter::setBoredom(int newboredom){
    boredom = newboredom;
}

//getters
int Critter::getHunger() {
	return hunger;
}

int Critter::getHeight(){
    return height;
}

int Critter::getBoredom(){
    return boredom;
}

//service method
void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << ". My boredom level is "<< boredom 
    << ". My height is " << height << "." << endl;
}

