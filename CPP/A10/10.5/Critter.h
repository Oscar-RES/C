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
    double hunger;
    int height;
    int boredom;
public: 
    //Constructors 
    Critter(); //1
    Critter(string name);//2
    Critter(string name, int hunger , int boredom, double height = 10);//3

	// setter methods
	void setName(string& newname);
	void setHunger(int newhunger);
    void setHeight(double newheight);
	void setBoredom(int newboredom);

	// getter methods
	double getHunger();
    int getHeight();
    int getBoredom();

	// service methods
	void print();
    int convertoint(double nhunger);
    double converttodouble(int nhunger);
};