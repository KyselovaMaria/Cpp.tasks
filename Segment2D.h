#pragma once
#include "Point2D.h"


class Segment2D
{
public:
	Segment2D() = default;
	// constructor with parameters 
	Segment2D(Point2D a, Point2D b);

	// methods of access and change of fields
	//		getters / setters

	Point2D getA();
	Point2D getB();

	void setA(Point2D a);
	void setB(Point2D b);

	// method of finding the point of intersection of two segments
	Point2D intersect(Segment2D other);
	
private:
	// two points
	Point2D a;
	Point2D b;
};