#pragma once
#include <ostream>
#include <cmath>
using namespace std;


class Point2D
{
public:
	// constructors

        // default constructor
	Point2D();
	// constructor with parameters
	Point2D(double x, double y);

	// methods of access and change of fields
	//		getters / setters

	double getX();
	double getY();

	void setX(double x);
	void setY(double y);

	// method of calculating the distance between points
	double distance(Point2D other);
	
	// function to output values ​​to the console
	friend ostream& operator<<(ostream& out, Point2D point);
	
	// function of entering values ​​into the object from the console
	friend istream& operator>>(istream& in, Point2D& point);
private:
	// coordinates of the point
	double x;
	double y;
};