/*
CH-230-A
9.5.cpp
Oscar Echeverria
oecheverria@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
    cout << "Welcome the the Guessing Game!"<<endl;
    string name;
    int randomNumber;
    int guess;
    int counter = 0;

    cout << "Please insert contestant's name"<<endl;
    cin >> name;

    cout << "Generating Random Number" << endl;
    srand ( static_cast < unsigned int >( time (0) ) ) ;
    randomNumber = rand();
    randomNumber = (randomNumber % 100)+1; //divides the rand() by 100 to get a value from 1-100

    cout << "Insert Guess" << endl;
    while(1){//infinite loop
        cout << "Number of attemps: " << counter << endl;
        cin >> guess;
        if(guess == randomNumber){
            cout << "CONGRATUALTIONS, YOU GUESSED THE NUMBER"<<endl;
            break;
        } else if (guess > randomNumber){
            cout << "Too high, try again!" << endl;
            counter ++; //increases attempts
        } else if (guess < randomNumber){
            cout << "Too low, try again!" << endl;
            counter ++; //increases attempts
        }
        }
    return 0;
}