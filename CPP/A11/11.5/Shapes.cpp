// please refer to shapes.h for methods documentation

#include <iostream>
#include <math.h>
#include "Shapes.h"

using namespace std; 
//constructors
Shape::Shape(const string& n) : name(n) {
}

Shape::Shape(){
	name = "default_name";
}

Shape::Shape(const Shape& cpy){
	
}
//methods
void Shape::printName() const {
	cout << name << endl;
}
//setters and getters
void Shape::setName(string& n){
	name = n;
}

string Shape::getName(){
	return name;
}
//same structure as before
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape() : Shape(){
	x = 0;
	y = 0;
}

CenteredShape::CenteredShape(const CenteredShape& cpy): Shape(cpy){

}

void CenteredShape::move(double mx, double my){
	x = mx;
	y = my;
}

void CenteredShape::setX(double dx){
	x = dx;
}

void CenteredShape::setY(double dy){
	y = dy;
}

double CenteredShape::getX(){
	return x;
}

double CenteredShape::getY(){
	return y;
}
//same structure as before
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

RegularPolygon::RegularPolygon():CenteredShape(){
	EdgesNumber = 1;
}

RegularPolygon::RegularPolygon(int ne){
	EdgesNumber = ne;
}

RegularPolygon::RegularPolygon(const RegularPolygon& cpy):CenteredShape(cpy){

}

void RegularPolygon::setEdge(int e){
	EdgesNumber = e;
}

int RegularPolygon::getEdge(){
	return EdgesNumber;
}
//same structure as before
Rectangle::Rectangle():RegularPolygon(4){
	height = 1;
	width = 2;
}

Rectangle::Rectangle(const std::string& n, double nx, double ny, double nwidth,double nheight):RegularPolygon(n,nx,ny,4){
	width = nwidth;
	height = nheight;
}
Rectangle::Rectangle(const Rectangle& cpy) : RegularPolygon(cpy){

}
double Rectangle::perimeter(double w, double h){
	double perimeter;
	perimeter = (w*2) + (h*2);
	return perimeter;
}

double Rectangle::area(double w, double h){
	double area;
	area = w*h;
	return area;
}

void Rectangle::setHeight(double nh){
	height = nh;
}
void Rectangle::setWidth(double nw){
	width = nw;
}

double Rectangle::getHeight(){
	return height;
}
double Rectangle::getWidth(){
	return width;
}
//same structure as before
Square::Square():Rectangle(){
	size = 1;
}

Square::Square(const std::string& n, double nx, double ny, double nside) : Rectangle(n,nx,ny,0,0){
	size = nside;
}

Square::Square(const Square& cpy):Rectangle(cpy){

}

double Square::perimeter(double s){
	double perimeter;
	perimeter = s*4;
	return perimeter;
}
double Square::area(double s){
	double area;
	area = s*s;
	return area;
}

void Square::setSize(double s){
	size = s;
}
double Square::getSize(){
	return size;
}
//same struct as before
Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}
Circle::Circle():CenteredShape(){
	Radius = 1;
}

Circle::Circle(const Circle& cpy) : CenteredShape(cpy){

}

double Circle::perimeter(double r){
	double perimeter;
	perimeter = 2*M_PI*r;
	return perimeter;
}

double Circle::area(double r){
	double area;
	area = M_PI*(r*r);
	return area;
}

void Circle::setRadius(double r){
	Radius = r;
}

double Circle::getRadius(){
	return Radius;
}