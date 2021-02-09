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
	a.setHunger(2); //setting hunger to 2 using setter
	a.print();
    Critter b("Reginald"); //String only
	b.setHunger(2);
	b.print();
    Critter c("Richard",2,5,6); //All properties, hunger set to 2 in constructor call
	c.print();
    Critter d("William",2,7); //Most properties + default height
	d.print();
    return 0;
}