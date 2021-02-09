/*
CH-230-A
a9_p9.cpp
Oscar Echeverria
oecheverria@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
using namespace std;

/*code gotten from the reference of find_first_of()
modified to consider uppercases*/
string scrambleword(string str){
    size_t found = str.find_first_of("aeiouAEIOU");
    while (found != str.npos)
    {
        str[found]='*';
        found=str.find_first_of("aeiouAEIOU",found+1);
    }
    return str;
}
/* function to select a random string from the list 
with a random num generator*/
string chooseString(){
    int randomNumber;
    string Word;
    string word_bank[] = {"Computer", "Television",
                "Keyboard", "Laptop", "Bizarre", "Sword", "April",
                "Slayer", "Shield" , "Steins" , "Gate",
                "Who", "Is" , "Rem", "Academia",
                "Zero", "Two"};
    srand ( static_cast < unsigned int >( time (0) ) ) ;
    randomNumber = rand();
    randomNumber = (randomNumber % 15);

    return word_bank[randomNumber];
   
}

int main(){
    string name;
    string mistery_word;
    string guess;
    string scrambled;
    int counter = 1;

    cout << "Please insert contestant's name"<<endl;
    cin >> name;
    cout << "Generating Random word" << endl;
    mistery_word = chooseString();
    cout << mistery_word << endl;
    scrambled = scrambleword(mistery_word);
    cout << scrambled << endl;

    //the loop runs while the user input is not Quit
    while(guess != "Quit"){
        cout << "Number of attemps: " << counter << endl;
        cin >> guess;
        if(guess == mistery_word){
            cout << "CONGRATUALTIONS, YOU GUESSED THE NUMBER!"<<endl;
            cout << "You took " << counter << " tries" << endl;
            cout << "Do you want to play again? Press Y to continue or type Quit to quit"<<endl;
            cin>>guess;
        /*if the user inputs Y the program will choose another word and
        the game continues*/
            if(guess == "Y"){
                cout << "generating another word" << endl;
                counter = 1;
                mistery_word = chooseString();
                scrambled = scrambleword(mistery_word);
                cout << scrambled << endl;
            } 
        } else {
            cout << "try again!" << endl;
            counter ++; //increases attempts
        } 
    }
    cout << "Thank you for playing!" << endl;
 
    return 0;

}