#include <iostream>
#include "Complex.h"
 
using namespace std;
 
//constructors
Complex::Complex(){
    real = 0;
    imaginary = 0;
}
 
Complex::Complex(double r, double i){
    real = r;
    imaginary = i;
}
 
//copy Constructor 
Complex::Complex(const Complex& cpy){
    real = cpy.real;
    imaginary = cpy.real;
}
 
//destructor
Complex::~Complex(){
}
 
//setters
void Complex::setReal(double nreal){
    real = nreal;
}
void Complex::setImaginary(double nimaginary){
    imaginary = nimaginary;
}
    //getters
float Complex::getReal(){
    return real;
}
float Complex::getImaginary(){
    return imaginary;
}
 
//service methods 
 
void Complex::print(){
    if (imaginary != 0) {
        cout << noshowpos << real << showpos << imaginary << "i" << endl;
    } else {
        cout << noshowpos << real << endl;
    }
 
}
 
Complex Complex::conjugation(){
     Complex result(real, -imaginary);
    return result;
}
 
Complex Complex:: addition(Complex c){
    Complex result;
    result.real = real + c.real;
    result.imaginary = imaginary + c.imaginary;
 
    return result;
 
}
Complex Complex::substraction(Complex c){
    Complex result;
    result.real = real - c.real;
    result.imaginary = imaginary - c.imaginary;
    return result;
}
 
Complex Complex::multiplication(Complex c){
    Complex result;
    result.real = (real * c.real - imaginary * c.imaginary);
    result.imaginary = (imaginary * c.real + real * c.imaginary);
    return result;
}

//I tried just calling my functions but for some reason it didn't work
/*too bad because I wanted to save some time cause it's the same thing
  but with the this-> when real or imaginary is being used*/
Complex Complex::operator+(const Complex& c){
    Complex sum;
    sum.real = this->real + c.real;
    sum.imaginary = this->imaginary + c.imaginary;
    return sum;
}

Complex Complex::operator-(const Complex& c){
    Complex diff;
    diff.real = this->real - c.real;
    diff.imaginary = this->imaginary - c.imaginary;
    return diff;
}

Complex Complex::operator*(const Complex& c){
    Complex prod;
    prod.real = (this->real * c.real - this->imaginary * c.imaginary);
    prod.imaginary = (this->imaginary * c.real + this->real * c.imaginary);
    return prod;
}

Complex& Complex::operator=(const Complex& c){
    this->real = c.real;
    this->imaginary = c.imaginary;
    return *this;
}

istream& operator>>(istream& in, Complex& c){
    string a;
    string tempstring; 
    in >> c.real >> a >> tempstring;
    if(tempstring.length()-1 == 'i')
       tempstring[tempstring.length()-1] = '\0';
    c.imaginary = stod(tempstring);
    return in;
}

ostream& operator<<(ostream& out, const Complex& c){
    return out << c.real << " + " << c.imaginary << "i";
}
