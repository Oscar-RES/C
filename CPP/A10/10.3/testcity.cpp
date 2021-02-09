/*
CH-230-A
testcity.cpp
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "City.h"
using namespace std;

int main(){
    City a,b,c;
    //setting the values myself because it is quicker to test 
    a.setName("London");
    a.setPopulation(8982000);
    a.setMayor("Sadiq Khan");
    a.setArea(1572);
    a.print();

    b.setName("Bremen");
    b.setPopulation(569352);
    b.setMayor("Andreas Bovenschulte");
    b.setArea(326.7);
    b.print();

    c.setName("Paris");
    c.setPopulation(2161000);
    c.setMayor("Anne Hidalgo");
    c.setArea(105.4);
    c.print();

    return 0;

}