#include "Triangle2D.h"

Triangle2D::Triangle2D(Point2D a, Point2D b, Point2D c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

void Triangle2D::setA(Point2D a)
{
	this->a = a;
}

void Triangle2D::setB(Point2D b)
{
	this->b = b;
}

void Triangle2D::setC(Point2D c)
{
	this->c = c;
}

Point2D Triangle2D::getA()
{
	return a;
}

Point2D Triangle2D::getB()
{
	return b;
}

Point2D Triangle2D::getC()
{
	return c;
}

ostream& operator<<(ostream& out, Triangle2D triangle)
{
	out << triangle.getA() << " | " << triangle.getB() << " | " << triangle.getC();
	return out;
}
