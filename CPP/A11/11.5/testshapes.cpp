/*
CH-230-A
testshapes.cpp
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <math.h>
#include <iostream>
#include "Shapes.h"
using namespace std;
int main(int argc, char** argv) {

  Circle c("first circle", 3, 4, 7);
  RegularPolygon r("TRIANGLE", 1, 1, 3);
  Rectangle rec("first rectangle",3,5,8,7);
  Square sqr("first square",3,4,5);

  r.printName();

  c.printName();
  cout << "the perimeter of the circcle is: " << c.perimeter(c.getRadius()) << endl;
  cout << "the area of the circle is: " << c.area(c.getRadius()) << endl;

  rec.printName();
  cout << "the perimeter of the rectangle is: " << rec.perimeter(rec.getWidth(),rec.getHeight()) << endl;
  cout << "the are of the rectangle is: " << rec.area(rec.getWidth(),rec.getHeight()) << endl;

  sqr.printName();
  cout << "the permeter of the square is: " << sqr.perimeter(sqr.getSize()) << endl;
  cout << "the area of the square is: " << sqr.area(sqr.getSize()) << endl;
}