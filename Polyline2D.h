#pragma once
#include "Point2D.h"
#include "Segment2D.h"
// клас Ламана
class Polyline2D
{
public:
	// constructor with parameters
	Polyline2D(Point2D* points, int count);

	// methods of access and change of fields
	//		getters / setters

	Point2D* getPoints();
    int getCount();

	void setPoints(Point2D* points);
    void setCount(int count);

	// method of checking whether there is a broken self-section
	Point2D check_polyline_self();
private:
	// масив точок
	Point2D* points = nullptr;
    // array of points
    int count;
};
