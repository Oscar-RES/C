/*
CH-230-A
testbox.cpp
Oscar Echeverria
oecheverri@jacobs-university.de
*/
 
#include <iostream>
#include <cstdlib>
#include "Box.h"
 
int main(){
    int n; 
    cout << "insert number of boxes" << endl;
    cin >> n;
 
    Box *arr = new Box[2*n];
    double val;//making life easier by having all inputs go in 1 
    for(int i = 0; i < n; i++){
        cout << "insert depth: ";
        cin >> val;
        arr[i].setDepth(val);
 
        cout << "insert width: ";
        cin >> val;
        arr[i].setWidth(val);
 
        cout << "insert height: ";
        cin >> val;
        arr[i].setHeight(val);
    }
    //making copies
    for(int i = 0; i < n; i++){
        arr[n+i] = Box(arr[i]);//calls the copy 
    }
    //printing
    for(int i = 0; i<n*2; i++){
        arr[i].print();
    }
}