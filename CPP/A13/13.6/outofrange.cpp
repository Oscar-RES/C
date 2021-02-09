/*
CH-230-A
13.6.cpp
Oscar Echeverria
oecheverri@jacobs-university.de
*/
#include <vector>
#include <iostream>
using namespace std;

int main(void){
    vector<int> vect(20,8);
    try{
        cout << vect.at(20);
    } catch (out_of_range& e){
        cerr<<e.what()<<endl;
    }

    return 0;
}