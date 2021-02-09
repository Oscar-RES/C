#include <iostream>
#include "TournamentMember.h"
using namespace std;

//defining location
char TournamentMember::location[36] = "Wonderland";
//constructors and destructor
TournamentMember::TournamentMember(){
    cout << "creating a default member" << endl;
    strcpy(first_name,"default_firstname");
    strcpy(last_name,"default_lastname");
    strcpy(birth_date,"yyyy-mm-dd");
    strcpy(nickname,"default_nickname");
    age = 0;
    height = 0.0;
}

TournamentMember::TournamentMember(char fn[], char ln[], char bd[], int a, double h,char nick[]){
    cout << "creating team member" <<endl;
    strncpy(first_name,fn,36);
    strncpy(last_name,ln,36);
    strncpy(birth_date,bd,11);
    strncpy(nickname,nick,36);
    age = a;
    height = h;
}

TournamentMember::TournamentMember(const TournamentMember& cpy){
    cout << "creating clone" << endl;
    strcpy(first_name,cpy.first_name);
    strcpy(last_name,cpy.last_name);
    strcpy(birth_date,cpy.birth_date);
    strcpy(nickname,cpy.nickname);
    age = cpy.age;
    height = cpy.height;
}

TournamentMember::~TournamentMember(){
    cout << "ELIMINAR" << endl;
}

//getters that I didn't define in TournamentMember.h
inline char* TournamentMember::getFname(){
     char *ptr = new char[36];
     strcpy(ptr,first_name);
     return ptr;
}

inline char* TournamentMember::getLname(){
    char *ptr = new char[36];
     strcpy(ptr,last_name);
     return ptr;
}

inline char* TournamentMember::getBday(){
    char *ptr = new char[11];
     strcpy(ptr,birth_date);
     return ptr;
}

inline char* TournamentMember::getLocation(){
    char *ptr = new char[36];
     strcpy(ptr,location);
     return ptr;
}

inline char* TournamentMember::getNickname(){
    char *ptr = new char[36];
    strcpy(ptr,nickname);
    return ptr;
}

//methods
void TournamentMember::printInfo(){
    cout << first_name << " " << last_name
    << " born on " << birth_date << " age " << age <<
    " with a height of " << height << " meters." << endl;
    cout << "a.k.a " << nickname << endl;
    cout << "Location: " << location << endl;
}

 void TournamentMember::changeLocation(char l[]){
     strncpy(location,l,36);
}

//constructors
Player::Player() : TournamentMember(){
    number = 0;
    goals = 0;
    position = "default";
    foot = "default";
}

Player::Player(char fn[],char ln[],char bd[],int a,double h,char nick[],int n,int g ,std::string p,std::string f) : TournamentMember(fn,ln,bd,a,h,nick){
    number = n;
    goals = g;
    position = p;
    foot = f;
}

Player::Player(const Player& cpy) : TournamentMember(cpy) {
    number = cpy.number;
    goals = cpy.goals;
    position = cpy.position;
    foot = cpy.foot;
}

Player::~Player(){
    cout << "deleting" << endl;
}

//setters and getters defined in the .h file
//methods
void Player::playerInfo(){
    printInfo();
    cout << "with the number " << number << " and with " << goals << " goals "
    << "in the position " << position << " preferred foot: " << foot << endl;
}
//adds the amount of goals specified in parameter
void Player::addGoal(int inc){
    goals+=inc;
}
