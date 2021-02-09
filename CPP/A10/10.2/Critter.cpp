#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setPoisonous(bool newpoisonous){
    isPoisonous = newpoisonous;
}

void Critter::setSpecies(string& newspecies){
    species = newspecies;
}

void Critter::print() {
	cout << "I am " << name << ". I am a "<< species << ". My hunger level is " << hunger;
    if(getPoisonous() == true){
        cout << ". Be careful! I am poisonous!" << endl;
    } else {
        cout <<". Don't worry! I am not poisonous!" << endl;
    }
}

int Critter::getHunger() {
	return hunger;
}

bool Critter::getPoisonous(){
    return isPoisonous;
}
