#include <iostream>
#include <cstdlib>
using namespace std;

int convertoint(double newh){
    int hunger = (newh * 10);
    return hunger;
}

int main(){
    int hunger;
    double test = 0.2;
    hunger = convertoint(test);
    cout << hunger << endl;
}