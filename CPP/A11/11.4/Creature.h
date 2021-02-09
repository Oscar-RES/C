class Creature {
	public:
    //constructor
		Creature();
    //method 
		void run() const;
    //destructor
        ~Creature();

	protected:
    //properties
		int distance;
};
class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
        ~Wizard();

	private:
		int distFactor;
};

class Minotaur : public Creature {
    public:
        Minotaur();
        Minotaur(int, int);
        void charge() const;
        ~Minotaur();
    private:
        int aggro;
        int damFactor;
};

class Harpy : public Creature {
    public:
        Harpy();
        Harpy(int, float);
        void soar() const;
        ~Harpy();
    private:
        float time;
        int hp;
        float speed;
};