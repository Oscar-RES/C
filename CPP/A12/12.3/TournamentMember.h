#ifndef __TOURNAMENT_MEMBER_H
#define __TOURNAMENT_MEMBER_H
#include <cstring>

class TournamentMember{
    private:
        char first_name[36];
        char last_name[36];
        char birth_date[11];
        static char location[36];
        int age;
        double height;
        char nickname[36];
    public:
        //constructors
        TournamentMember();
        TournamentMember(char[],char[],char[],int,double,char[]);
        TournamentMember(const TournamentMember&); //copy
        ~TournamentMember();//destructor

        //setters and getters
        void setFname(char fname[]){ strncpy(first_name,fname,36); }
        void setLname(char lname[]){ strncpy(last_name,lname,36); }
        void setBday(char bday[11]){ strncpy(birth_date,bday,11); }
        void setNickname(char nick[]){strncpy(nickname,nick,36); }
        void setAge(int a){ age = a; }
        void setHeight(double h){ height = h; }

        inline char* getFname();
        inline char* getLname();
        inline char* getBday();
        inline char* getLocation();
        inline char* getNickname();
        int getAge() const{ return age; }
        double getHeight() const{ return height; }
    
        //methods
        void printInfo();
        void changeLocation(char l[]);
};

class Player : public TournamentMember{
    private:
        int number;
        int goals;
        std::string position;
        std::string foot;
    public:
        //constructors
        Player();
        Player(char[],char[],char[],int,double,char[],int,int,std::string,std::string);
        Player(const Player&);
        ~Player();
        //setters and getters
        void setNumber(int n){ number = n; }
        void setPos(std::string p){ position = p; }
        void setFoot(std::string f){ foot = f; }

        int getNumber() const { return number; }
        int getGoals() const { return goals; }
        std::string getPos() const { return position; }
        std::string getFoot() const { return foot; }

        //methods
        void playerInfo();
        void addGoal(int inc);

};

#endif