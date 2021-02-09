/*
CH-230-A
testcritter.cpp
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter a; //default
	a.setHunger(3);
	a.print();
    Critter b("Reginald"); //String only
	b.setHunger(3);
	b.print();
    Critter c("Richard",3,5,6); //All properties
	c.print();
    Critter d("William",3,7); //Most properties + default class
	d.print();
    return 0;
}