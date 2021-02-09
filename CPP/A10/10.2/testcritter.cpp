#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;
	bool isPoisonous;
	string species;
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);
	cout << "What is it: ";
	cin.ignore(); //prevents trailing '\n' to be considered as the input
	getline(cin, species);
	c.setSpecies(species);
	cout << "Is it poisonous?(1 or 0): ";//any int other than 0 will return true
	cin >> isPoisonous;
	c.setPoisonous(isPoisonous);

	cout << "You have created:" << endl;
	c.print();
        return 0;
}