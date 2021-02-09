/*
CH-230-A
13.2.cpp
Oscar Echeverria
oecheverri@jacobs-university.de
*/
 
#include <fstream>
#include <iostream>
#include <cstdlib>
#include "Complex.h"
using namespace std;
 
int main(int argc, char** argv){
    string f1 = "in1.txt";
    string f2 = "in2.txt";
 
    ifstream src(f1);//checking for files, the usual
    if(!src.good()){
        cout<< "File not found" <<endl;
        exit(404);
    }
    ifstream src2(f2);
    if(!src.good()){
        cout<< "File not found" <<endl;
        exit(404);
    }

    Complex n1, n2;
    src >> n1; //getting complex numbers from file
    src2 >> n2;
    cout << n1 << endl;
    cout << n2 <<endl;

    ofstream res("output.txt");//checking output file
    if(!res.good()){
        cout<< "error opening output file" <<endl;
        exit(405);
    }

    //tests the = operator overload
    Complex sum , diff, prod;
    sum = n1 + n2;
    diff = n1 - n2;
    prod = n1 * n2;

    //prints what will go into the file and adds it to the file
    cout << "Here's the file"<<endl;
    cout << sum << endl;
    res << sum << endl;
    cout << diff << endl;
    res << diff << endl;
    cout << prod << endl;
    res << prod << endl;
 
}
