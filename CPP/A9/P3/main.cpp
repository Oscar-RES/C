/*
CH-230-A
abs_val.cpp
Oscar Echeverria
oecheverria@jacobs-university.de
*/

#include <iostream>
using namespace std;

float absneu (float num){
        if(num < 0){
        num = num*-1; // if num is less then 0, multiply by -1 to get the absolute value
    } else {
        num = num; //just return the number 
    }
    return num;
}
int main (){
    float num;
    cout << "Insert number" << endl;
    cin >> num;
    cout << "You inserted: " << num << endl;
    cout << "The absolute value of is: " << absneu(num) << endl;

    return 0;
}