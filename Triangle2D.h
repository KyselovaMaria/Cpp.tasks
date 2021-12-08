#pragma once
#include "Point2D.h"
class Triangle2D
{
public:
	// constructor with parameters  
	Triangle2D(Point2D a, Point2D b, Point2D c);

	// methods of access and change of fields
	//		getters / setters

	void setA(Point2D a);
	void setB(Point2D b);
	void setC(Point2D c);

	Point2D getA();
	Point2D getB();
	Point2D getC();

private:
	// triangle points
	Point2D a;
	Point2D b;
	Point2D c;
};

// function to output values 
ostream& operator<<(ostream& out, Triangle2D triangle);