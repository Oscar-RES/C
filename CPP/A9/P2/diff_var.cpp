/*
CH-230-A
diff_var.cpp
Oscar Echeverria
oecheverria@jacobs-university.de
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n; //standard input for n

    string s; //loving the fact that string is a type
    cin >> s; // standard input s 

    double x;
    cin >> x; //standard input x

    for(int i = 0; i < n; i++){ //loop to print n times
        cout << s << " : " << x << endl; //standard output
    }
return 0;

}