#include <iostream>
#include "Vector.h"
#include <cmath>
using namespace std;

Vector::Vector(){
    size = 2;
    pr = new double[2];
    pr[0] = 1;
    pr[1] = 1;
}

Vector::Vector(int ns, double *nptr){
    size = ns;
    pr = new double[size];
    for(int i = 0; i < size; i++){
        pr[i] = nptr[i];
    }
}

Vector::Vector(const Vector& src) {
    size = src.size;
    pr = new double[size];
    for (int i = 0; i < size; i++) {
        pr[i] = src.pr[i];
    }
}

Vector::~Vector() {
    delete[] pr;
}

void Vector::setSize(int nsize) {
    size = nsize;
}

void Vector::setPr(double *nptr) {
    pr = nptr;
}

int Vector::getSize() const {
    return size;
}

double* Vector::getPrt() const {
    return pr;
}

void Vector::print() const {
    for(int i = 0; i < size; i++){
        cout << pr[i] << "  ";
    }
}

double Vector::norm() const{
    double sum = 0;
    for(int i = 0; i < size; i++){
        sum += pr[i] * pr[i];
    }
    return sqrt(sum);
}

Vector Vector::add(const Vector& v) const {
    Vector result;
    for (int i = 0; i < size; i++) {
        result.pr[i] = pr[i] + v.pr[i];
    }
    return result;
}

Vector Vector::subtract(const Vector& v) const {
    Vector result;
    for (int i = 0; i < size; i++) {
        result.pr[i] = pr[i] - v.pr[i];
    }
    return result;
}

double Vector::product(const Vector& v) const {
    double result = 0;
    for (int i = 0; i < size; ++i) {
        result += pr[i] * v.pr[i];
    }
    return result;
}
