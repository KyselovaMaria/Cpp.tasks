#include "Segment2D.h"

Segment2D::Segment2D(Point2D a, Point2D b)
{
	this->a = a;
	this->b = b;
}

Point2D Segment2D::getA()
{
	return a;
}

Point2D Segment2D::getB()
{
	return b;
}

void Segment2D::setA(Point2D a)
{
	this->a = a;
}

void Segment2D::setB(Point2D b)
{
	this->b = b;
}

Point2D Segment2D::intersect(Segment2D other)
{
	Point2D crossPoint;
	double n;
	if (b.getY() - a.getY() != 0)
	{
		double q = (b.getX() - a.getX()) / (a.getY() - b.getY());
		double sn = (other.a.getX() - other.b.getX()) + (other.a.getY() - other.b.getY()) * q;
		if (!sn)
		{
			return crossPoint;
		}
		double fn = (other.a.getX() - a.getX()) + (other.a.getY() - a.getY()) * q;
		n = fn / sn;

	}
	else {
		if (!(other.a.getY() - other.b.getY()))
		{
			return crossPoint;
		}
		n = (other.a.getY() - a.getY()) / (other.a.getY() - other.b.getY());
	}
	crossPoint.setX(other.a.getX() + (other.b.getX() - other.a.getX()) * n);
	crossPoint.setY(other.a.getY() + (other.b.getY() - other.a.getY()) * n);
	return crossPoint;

}
