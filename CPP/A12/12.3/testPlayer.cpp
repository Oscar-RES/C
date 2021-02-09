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

    Player a;
    cout << "introducing player 0" << endl;
    a.playerInfo();
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
    
    char f3[36] = "Gerard";
    char l3[36] = "Pique";
    char bd3[11] = "1987-02-02";
    char nick3[36] = "El Waka-Waka";

    cout << "\n";

    Player b(f,l,bd,33, 1.70,nick,10,3,"Forward","left");
    cout << "introducing member 1" << endl;
    b.playerInfo();

    cout << "\n";

    Player c(b);
    cout << "introducing member 2" << endl;
    c.playerInfo();
    cout << "woops looks like we made a duplicate" << endl;

    c.setFname(f2);
    c.setLname(l2);
    c.setBday(bd2);
    c.setAge(35);
    c.setHeight(1.87);
    c.setNickname(nick2);
    c.setNumber(7);
    c.addGoal(12);
    c.setPos("Striker");
    c.setFoot("Both");

    cout << "\nseems like the mistake was fixed" << endl;
    c.playerInfo();

    cout << "\n";

    Player d(f3,l3,bd3,35,1.94,nick3,3,1,"CB","right");
    d.playerInfo();

    cout << "\n";

    char loc[36] = "Hamburg";
    d.changeLocation(loc);

    b.playerInfo();
    c.playerInfo();
    d.playerInfo();


    return 0;

}