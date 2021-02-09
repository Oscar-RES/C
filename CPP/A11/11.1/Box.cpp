#include "Box.h"
#include <iostream>
 
//constructors
Box::Box(){
    depth = 0.0;
    height = 0.0;
    width = 0.0;
 
}
 
Box::Box(double d, double h, double w){
    depth = d;
    height = h;
    width = w;
 
}
//copy constructor
Box:: Box(const Box& ditto){
    depth = ditto.depth;
    height = ditto.height;
    width = ditto.width;
}
 
//setters
void Box::setDepth(double ndepth){
    depth = ndepth;
 
}
 
void Box::setWidth(double nwidth){
    width = nwidth;
}
 
void Box::setHeight(double nheight){
    height = nheight;
 
}
 
//getters 
double Box::getDepth(){
    return depth;
}
 
double Box::getHeight(){
    return height;
}
 
double Box::getWidth(){
    return width;
}
//service methods 
void Box::print(){
    cout << depth << " " << " " << height << " " << width << " " << endl;
    cout << "volume = " << calcVolume() << endl;
}
 
double Box::calcVolume(){
    double vol;
    vol = depth * width * height;
    return vol;
}
 
//destructor 
Box:: ~Box(){
 
}