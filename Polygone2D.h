#pragma once
#include <iostream>
#include <vector>

#include "Point2D.h"
#include "Triangle2D.h"
#include "PolygonTriangulate.h"

using std::vector;


class Polygone2D
{
public:
	// constructor with parameters
	Polygone2D(Point2D* points, int count);

	// methods of access and change of fields
	//		getters / setters

	Point2D* getPoints();
	int getCount();

	void setPoints(Point2D* points);
	void setCount(int count);

	// method of checking whether the polygon is convex
	bool is_convex();
	
	// method of triangulation
	vector<Triangle2D> triangulation();

	// method of finding the area
	double calculateArea();
	
private:
	// array of points
	Point2D* points = nullptr;
	// number of points
	int count;
};


