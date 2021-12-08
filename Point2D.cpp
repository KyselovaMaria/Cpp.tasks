#include "Point2D.h"
#include <iostream>
using namespace std;

Point2D::Point2D()
{
	this->x = 0;
	this->y = 0;
}

Point2D::Point2D(double x, double y)
{
	this->x = x;
	this->y = y;
}

double Point2D::getX()
{
	return x;
}

double Point2D::getY()
{
	return y;
}

void Point2D::setX(double x)
{
	this->x = x;
}

void Point2D::setY(double y)
{
	this->y = y;
}

double Point2D::distance(Point2D other)
{
	return (sqrt((other.getX() - x) * (other.getX() - x) + (other.getY() - y) * (other.getY() - y)));
}
