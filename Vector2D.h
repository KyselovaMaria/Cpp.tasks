#pragma once
#include "Point2D.h"
#include <ostream>
using std::ostream;


class Vector2D
{
public:
	// default constructor
	Vector2D() = default;
	// constructor with parameters 
	Vector2D(Point2D a, Point2D b);

	// methods of access and change of fields
	//		getters / setters

	Point2D getA();
	Point2D getB();

	void setA(Point2D a);
	void setB(Point2D b);

private:
	// two points
	Point2D a;
	Point2D b;
};

// overloaded standard operators
// add operator
Vector2D operator+ (Vector2D v1, Vector2D v2);
// multiplication operator
Vector2D operator* (Vector2D v1, Vector2D v2);
// and created similar functions
// add function
Vector2D add(Vector2D v1, Vector2D v2);
// multiplication function
Vector2D mult(Vector2D v1, Vector2D v2);
// function of finding a scalar product
double multS(Vector2D v1, Vector2D v2);
// function to output values ​​to the console
ostream& operator<<(ostream& out, Vector2D vector);