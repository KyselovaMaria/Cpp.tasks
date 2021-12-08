#include "Polyline2D.h"

Polyline2D::Polyline2D(Point2D* points, int count)
{
	this->points = points;
	this->count = count;
}

Point2D* Polyline2D::getPoints()
{
	return points;
}

int Polyline2D::getCount()
{
	return count;
}

void Polyline2D::setPoints(Point2D* points)
{
	this->points = points;
}

void Polyline2D::setCount(int count)
{
	this->count = count;
}

Point2D Polyline2D::check_polyline_self()
{
	int f = 1;
	Point2D* list = points;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			Point2D res;
			Segment2D s_1;
			s_1.setA(list[i]);
			s_1.setB(list[i + 1]);
			if ((i != j) && ((i + 1) != j) && (i != (j + 1)))
			{
				Segment2D s_2;
				s_2.setA(list[j]);
				s_2.setB(list[j + 1]);
				res = s_1.intersect(s_2);
				return res;
			}
		}
	}
	return Point2D();
}

