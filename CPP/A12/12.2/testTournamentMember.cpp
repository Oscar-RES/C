/*
CH-230-A
testTournamentMember.cpp
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"
using namespace std;

int main(){
    cout << "WELCOME TO THE TOURNAMENT" << endl;

    TournamentMember a;
    cout << "introducing member 0" << endl;
    a.printInfo();
    /*this cluster of char arrays looks ugly, but ey, I'm not the 
    one who decided to use char arrays when C++ already got strings*/
    char f[36] = "Lionel";
    char l[36] = "Messi";
    char bd[11] = "1987-06-24";
    char nick[36] = "La Pulga";

    char f2[36] = "Cristiano";
    char l2[36] = "Ronaldo";
    char bd2[11] = "1985-02-05";
    char nick2[36] = "El Bisho";

    cout << "\n";

    TournamentMember b(f,l,bd,33, 1.70,nick);
    cout << "introducing member 1" << endl;
    b.printInfo();
    
    cout << "\n";

    TournamentMember c(b);
    cout << "introducing member 2" << endl;
    c.printInfo();
    cout << "woops looks like we made a duplicate" << endl;

    c.setFname(f2);
    c.setLname(l2);
    c.setBday(bd2);
    c.setAge(35);
    c.setHeight(1.87);
    c.setNickname(nick2);
    

    cout << "\nseems like the mistake was fixed" << endl;
    c.printInfo();
    char loc[36] = "Europe";
    cout << "\n";
    c.changeLocation(loc);
    a.printInfo();
    b.printInfo();
    c.printInfo();

    return 0;

}