/*
CH-230-A
Creature.cpp
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <iostream>

using namespace std;

class Creature {
	public:
    //constructors, methods and detructor
		Creature();  
		void run() const;
        ~Creature();

	protected:
		int distance;
};

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  
Creature::~Creature(){
    cout << "destroying Creature\n";
}

class Wizard : public Creature {
	public:
    //constructors, methods and detructor
		Wizard();
		void hover() const;
        ~Wizard();

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
Wizard::~Wizard(){
    cout << "\ndestroying Wizard\n";
}

class Minotaur : public Creature {
    public:
    //constructors, methods and detructor
        Minotaur();
        Minotaur(int, int);
        void charge() const;
        ~Minotaur();
    private:
        int aggro;
        int damFactor;
};
//default
Minotaur::Minotaur() : damFactor(5)
{
    aggro = 10;
    cout << "\nCreating a Minotaur with aggro level " << aggro <<endl;
}
Minotaur::Minotaur(int naggro, int ndamFactor = 5){
    aggro = naggro;
    damFactor = ndamFactor;
    cout << "\nCreating a Minotaur with aggro level " << aggro <<endl;
}
//gets the damage the charge will deal
void Minotaur::charge() const
{
    cout << "charging " << distance << " meters!\n";
    cout << "Dealt " << (damFactor * distance) << "hp!\n";
}
Minotaur::~Minotaur(){
    cout << "\ndestroying Minotaur\n";
}

class Harpy : public Creature {
    public:
    //constructors, methods and detructor
        Harpy();
        Harpy(int, float);
        void soar() const;
        ~Harpy();
    private:
        float time;
        int hp;
        float speed;
};

Harpy::Harpy() : time(10) 
{
    hp = 100;
    speed = 1;
    cout << "\nCreating a Harpy with  " << hp << "hp\n";
}

Harpy::Harpy(int nhp, float ntime){
    hp = nhp;
    time = ntime;
    speed = distance/time;
    cout << "\nCreating a Harpy with  " << hp << "hp\n";
}
//gets speed of Harpy
void Harpy::soar() const
{
    cout << "soaring " << distance << " meters\n";
    cout << "soaring at " << (speed) << " m/s!\n";
}

Harpy::~Harpy(){
    cout << "\ndestroying Harpy\n";
}




int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    //Creating Minotaur 1
    Minotaur m;
    m.charge();
    //Creating Minotaur 2
    Minotaur m2(9,8);
    m2.charge();

    //creating Harpy 1
    Harpy h;
    h.soar();
    //creating Harpy 2
    Harpy h2(50,7.0);
    h2.soar();
    
    return 0;
}