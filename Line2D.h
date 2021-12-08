#pragma once
#include "Point2D.h"
#include "Segment2D.h"

class Line2D
{
public:
	// default constructor
	Line2D();
	// constructor with parameters
	Line2D(double a, double b, double c);

	// methods of access and change of fields
	//		getters / setters

	double getA();
	double getB();
	double getC();

	void setA(double a);
	void setB(double b);
	void setC(double c);

     // method of finding the point of intersection between lines
	Point2D check_lines_pt(Line2D other);
	
         // method of finding the point of intersection between a line and a segment
	Point2D check_line_seg_pt(Segment2D s2);
	
private:
   // coefficients specifying the line
	double a;
	double b;
	double c;
};
