#include <string>
using namespace std;

class City{
private:
    string name;
    double population;
    string mayor;
    double area;
public: 
    //setters
    void setName(string newnaname);
    void setPopulation(double npopulation);
    void setMayor(string cmayor);
    void setArea(double narea);
    //getters
    int getPopulation();
    int getArea();
    //printer
    void print();
};