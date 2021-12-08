#include "Polygone2D.h"

Polygone2D::Polygone2D(Point2D* points, int count)
{
	this->points = points;
	this->count = count;
}

Point2D* Polygone2D::getPoints()
{
	return points;
}

int Polygone2D::getCount()
{
	return count;
}

void Polygone2D::setPoints(Point2D* points)
{
	this->points = points;
}

void Polygone2D::setCount(int count)
{
	this->count = count;
}

bool Polygone2D::is_convex()
{
	Point2D* list = points;
	bool f = true;
	for (int i = -2; i < count - 1; i++)
	{
		double a = list[i].distance(list[i + 1]);
		double b = list[i + 1].distance(list[i + 2]);
		double c = list[i].distance(list[i + 2]);
		if (a * a + b * b > c * c)
			f = false;
	}
	return f;
}
