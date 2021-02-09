#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
    bool isPoisonous; // I have no idea what a Critter is, just wanted to work with a bool
    std::string species;


public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
    void setPoisonous(bool newpoisonous);
    void setSpecies(std::string& newspecies);
	// getter method
	int getHunger();
    bool getPoisonous();
	// service method
	void print();
};