/*
CH-230-A
testvector.cpp
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <iostream>
#include "Vector.h"
using namespace std;

int main(){
    double arr_1[2] = {2, 4};
    double arr_2[2] = {3, 5};
    Vector a;
    Vector b (2, arr_1);
    Vector c = Vector(b);
    Vector d (2, arr_2);
    double norm;
    norm = b.norm();
    cout << "The norm of the first vector: " << norm << endl;
    double product;
    product = b.product(d);
    cout << "The scalar product is: " << product << endl;
    (b.add(d)).print();
    cout << endl;
    (b.subtract(d)).print();
    return 0;