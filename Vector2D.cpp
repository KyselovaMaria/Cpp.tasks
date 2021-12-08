#include "Vector2D.h"
#include <ostream>
using namespace std;

Vector2D::Vector2D(Point2D a, Point2D b)
{
	this->a = a;
	this->b = b;
}

Point2D Vector2D::getA()
{
	return a;
}

Point2D Vector2D::getB()
{
	return b;
}

void Vector2D::setA(Point2D a)
{
	this->a = a;
}

void Vector2D::setB(Point2D b)
{
	this->b = b;
}

Vector2D operator+(Vector2D v1, Vector2D v2)
{
	return add(v1, v2);
}

Vector2D operator*(Vector2D v1, Vector2D v2)
{
	return mult(v1, v2);
}

Vector2D add(Vector2D v1, Vector2D v2)
{
    Point2D a(v1.getA().getX() + v2.getA().getX(), v1.getA().getY() + v2.getA().getY());
    Point2D b(v1.getB().getX() + v2.getB().getX(), v1.getB().getY() + v2.getB().getY());
	return Vector2D(a, b);
}

Vector2D mult(Vector2D v1, Vector2D v2)
{
    Point2D a(v1.getA().getX() * v2.getB().getX(), v1.getA().getY() * v2.getB().getY());
    Point2D b(v1.getB().getX() * v2.getA().getX(), v1.getB().getY() * v2.getA().getY());
    return Vector2D(a, b);
}

double multS(Vector2D v1, Vector2D v2)
{
	return v1.getA().getX() * v2.getA().getX() + v1.getA().getY() * v2.getA().getY();
}

ostream& operator<<(ostream& out, Vector2D vector)
{
	out << "a["<<vector.getA().getX() <<"; "<< vector.getA().getY() <<"]  b["<<vector.getB().getX() <<"; "<< vector.getB().getY() <<"]\n";
	return out;
}
