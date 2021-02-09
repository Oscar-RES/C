#include <iostream>
#include "City.h"
using namespace std;

    void City::setName(string newname){
        name = newname;
    }

    void City::setPopulation(double npopulation){
        population = npopulation;
    }

    void City::setMayor(string cmayor){
        mayor = cmayor;
    }

    void City::setArea(double narea){
        area = narea;
    }

    void City::print(){
        cout << "This is: "<< name << ". It has a population of: " << population << " inhabitants"
        << ". The current mayor is: " << mayor << ". It has an area of: " << area << "km^2"<< endl;
    }

    int City::getPopulation(){
        return population;
    }

    int City::getArea(){
        return area;
    }