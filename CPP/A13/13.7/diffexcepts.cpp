/*
CH-230-A
13.3.cpp
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <iostream>
using namespace std;

class OwnException : public exception{
    private: 
     string msg;
    public:
     string what(){
         return "OwnException\n";
     }
     OwnException(string e){
         e = msg;
     }
};

void errors(int c){
    switch(c){
        case(1):
        throw ('a');
        case (2):
        throw (12);
        case (3):
        throw(true);
        default:
        throw OwnException("Default case exception");
    }
}

int main(void){
    for(int i = 0; i < 4; i++){
        try {
            errors(i);
        }
        catch(char& a){
            cerr << "Caught in main: "<<a<<endl;
        }
        catch(int& b){
            cerr<<"Caught in main: "<<b<<endl;
        }
        catch(bool& c){
            cerr<<"Caught in main: "<<c<<endl;
        }
        catch(OwnException& d){
            cerr <<"Caught in main "<<d.what()<<endl;
        }
    }
    return 0;
}