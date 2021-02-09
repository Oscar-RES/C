/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  
		//setters and getters
		void setName(std::string& n);
		std::string getName();
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
		//setters and getters
		void setX(double dx);
		void setY(double dy);
		double getX();
		double getY();
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		//constructors
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(int);//for rectangle default construct
		RegularPolygon(const RegularPolygon&);
		//setters and getters
		void setEdge(int e);
		int getEdge();
};

class Rectangle : public RegularPolygon{
	private:
		double width;
		double height;
	public: 
		//constructors
		Rectangle();
		Rectangle(const std::string& n, double nx, double ny, double nwidth,
		double nheight);
		Rectangle(const Rectangle&);//copy constructor
		//methods
		double perimeter(double width,double height);
		double area(double width, double height);
		//setters and getters
		void setWidth(double w);
		void setHeight(double h);
		double getWidth();
		double getHeight();

};

class Square : public Rectangle{
	private:
		double size;//all dimensions of a square are the same
	public:
		//constructors
		Square();
		Square(const std::string& n, double nx, double ny, double nside);
		Square(const Square&); //copy constructor
		//methods
		double perimeter(double n);
		double area(double n);
		//getters and setters
		void setSize(double s);
		double getSize();


};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		//constructors
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
		//methods
		double perimeter(double r);
		double area(double r);
		//setters and getters
		void setRadius(double r);
		double getRadius();
};
    
#endif