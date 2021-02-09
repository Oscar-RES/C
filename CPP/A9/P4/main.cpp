/*
CH-230-A
func_overloading.cpp
Oscar Echeverria
oecheverria@jacobs-university.de
*/

#include <iostream>
using namespace std;

int mycount(int a, int b){
    int diff;
    diff = b-a;
    return diff;
}

int mycount(char c, string s){
    int counter = 0;
    int i = 0;
    while(s[i] != '\0'){ //loop iterates while the string hasn't ended
        if(s.find(c) != string::npos) //used function to find chars
         counter++;//instead of using the pos, added to counter when c is found
        i++;
    }
    
    return counter;
}

int main(){
    int a;
    cin >> a;
    int b;
    cin >> b;
    char c;
    cin >> c;
    string s;
    cin >> s;
    s.erase(s.end()-1);//gets rid of the newline

    cout << "When using ints mycount = " << mycount(a,b) << endl;
    cout << "when using chars and string mycout = " << mycount(c,s) << endl;
}