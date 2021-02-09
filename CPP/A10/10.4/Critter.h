/*
CH-230-A
Critter.h
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <string> 
using namespace std;

class Critter
{
private:  
    string name;
    int hunger;
    double height;
    int boredom;
public: 
    //Constructors 
    Critter(); //1
    Critter(string name);//2
    Critter(string name,int hunger, int boredom, double height = 10);//3
	// setter methods
	void setName(string& newname);
	void setHunger(int newhunger);
    void setHeight(double newheight);
	void setBoredom(int newboredom);
	// getter method
	int getHunger();
    int getHeight();
    int getBoredom();
	// service method
	void print();
};