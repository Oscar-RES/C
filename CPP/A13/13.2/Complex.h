
#include <iostream>
class Complex{
    private:
        double real;
        double imaginary;
    public: 
    //constructors 
        Complex();
        Complex(double real, double imaginary = 0);
    //copy constructor
        Complex(const Complex&);
    //destructor 
    ~Complex();
    //setters
        void setReal(double nreal);
        void setImaginary(double nimaginary);
    //getters
        float getReal();
        float getImaginary();
    //service methods 
    void print();
    Complex conjugation();
    Complex addition(Complex);
    Complex substraction(Complex);
    Complex multiplication(Complex);
    //overloading operators
    Complex operator+(const Complex&);
    Complex operator-(const Complex&);
    Complex operator*(const Complex&);
    Complex& operator=(const Complex&);
    friend std::ostream& operator<<(std::ostream&, const Complex&);
    friend std::istream& operator>>(std::istream&, Complex&);
};