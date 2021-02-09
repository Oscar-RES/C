class Vector{
    private:
        int size;
        double *pr;
    public:
        //constructors
        Vector();
        Vector(int, double*);
        Vector(const Vector&); //copy constructor
        ~Vector();
        //setters and getters 
        void setSize(int nsize);
        void setPr(double* nptr);
        int getSize() const;
        double* getPrt() const;
        //methods
        void print() const;
        double norm() const;
        Vector add(const Vector& v) const;
        Vector subtract(const Vector& v) const;
        double product(const Vector& v) const;
};