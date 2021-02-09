using namespace std;
class Box{
    private:
        double depth;
        double width;
        double height;
    public:
    //Constructors
        Box();
        Box(double depth, double width, double height);
        Box(const Box&);
    //setters
        void setDepth(double ndepth);
        void setWidth(double nwidth);
        void setHeight(double nheight);
    //getters
        double getDepth();
        double getWidth();
        double getHeight();
    //service methods
        void print();
        double calcVolume();
    //Destructors 
    ~Box();
};