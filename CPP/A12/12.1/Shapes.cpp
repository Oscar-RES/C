// please refer to shapes.h for methods documentation
 
#include <iostream>
#include "Shapes.h"
#include <cmath>
 
using namespace std; 
//constructors
Shape::Shape(const string& n) : name(n) {
}
 
Shape::Shape(){
    name = "default_name";
}
//copy constructor
Shape::Shape(const Shape& cpy){
    
}
//methods
void Shape::printName() const {
    cout << name << endl;
}
//constructors
CenteredShape::CenteredShape() : Shape(){
    x = 0;
    y = 0;
}
 
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
    x = nx;
    y = ny;
}
//copy constructor
CenteredShape::CenteredShape(const CenteredShape& cpy): Shape(cpy){
 
}
//constructors
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
    CenteredShape(n,nx,ny) 
{
    EdgesNumber = nl;
}
//this one is for the default hexagon
RegularPolygon::RegularPolygon(int n) : CenteredShape() {
    EdgesNumber = n;
}
 
RegularPolygon::RegularPolygon(const RegularPolygon& cpy):CenteredShape(cpy){
 
}
 
//constructors
Hexagon::Hexagon() : RegularPolygon(6){
    side = 1;
}
 
Hexagon::Hexagon(const std::string& n, const std::string& c, double nx, double ny, int nl, int s) : RegularPolygon(n,nx,ny,nl){
    color = c;
    side = s;
}
 
Hexagon::Hexagon(const Hexagon& cpy) : RegularPolygon(cpy){
    side = cpy.side;
    color = cpy.color;
}
//destructor
Hexagon::~Hexagon(){
    cout << "deleting" << endl;
}
//methods
int Hexagon::perimeter(int s){
    int perimeter;
    perimeter = s*6;
    return perimeter;
}
 
double Hexagon::area(int s){
    double area;
    area = ((3*sqrt(3))/2)*(s*s);
    return area;
}
//setters and getters
void Hexagon::setSides(int s){
    side = s;
}
 
void Hexagon::setColor(string c){
    color = c;
}
 
int Hexagon::getSides(){
    return side;
}
 
string Hexagon::getColor(){
    return color;
}
 
Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
    Radius = r;
}