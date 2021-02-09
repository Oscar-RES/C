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
    hunger = 0.2;
    height = 5;
    boredom = 0;
}

Critter::Critter(string n){ //constructor with as string
    cout << "Using constructor 2, you have created: "<< endl;
    name = n;
    hunger = 0.2;
    height = 5;
    boredom = 0;
}

Critter::Critter(string n, int hun, int bor, double hei){ //constructor with all parameters hei = 10 by def
    cout << "Using constructor 3, you have created: " << endl;
    name = n;
    hunger = Critter::converttodouble(hun); //converts to double
    hunger = Critter::convertoint(hunger); //converts the converted hunger back to int 
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
double Critter::getHunger() {
	return hunger;
}

int Critter::getHeight(){
    return height;
}

int Critter::getBoredom(){
    return boredom;
}

//service methods
void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << ". My boredom level is "<< boredom 
    << ". My height is " << height << "." << endl;
}

int Critter::convertoint(double newh){//convert double to int 
    int hunger = (newh * 10);
    return hunger;
}

double Critter::converttodouble(int newh){ //convert  double to int 
    double hunger =((double)newh / 10);
    return hunger;
}

