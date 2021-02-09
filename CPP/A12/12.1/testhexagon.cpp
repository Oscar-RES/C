/*
CH-230-A
testhexagon.cpp
Oscar Echeverria
oecheverri@jacobs-university.de
*/
 
#include <cmath>
#include <iostream>
#include "Shapes.h"
using namespace std;
 
int main(){
    Hexagon h1("first hexagon","blue",1,1,6,9);
    Hexagon h2("second hexagon","green",1,1,6,15);
    Hexagon h3(h2);
 
    cout << "perimeter of h1 " << h1.perimeter(h1.getSides()) << endl;
    cout << "area of h1 " << h1.area(h1.getSides()) << endl;
    
    cout << "perimeter of h2 " << h2.perimeter(h2.getSides()) << endl;
    cout << "area of h2 " << h2.area(h2.getSides()) << endl;
 
    cout << "perimeter of h3 " << h3.perimeter(h3.getSides()) << endl;
    cout << "area of h3 " << h3.area(h3.getSides()) << endl;
    return 0;
}