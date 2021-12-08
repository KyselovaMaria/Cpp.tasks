#include "Line2D.h"
#include "Point2D.h"

Line2D::Line2D()
{
	a = 0;
	b = 0;
	c = 0;
}

Line2D::Line2D(double a, double b, double c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

double Line2D::getA()
{
	return a;
}

double Line2D::getB()
{
	return b;
}

double Line2D::getC()
{
	return c;
}

void Line2D::setA(double a)
{
	this->a = a;
}

void Line2D::setB(double b)
{
	this->b = b;
}

void Line2D::setC(double c)
{
	this->c = c;
}

Point2D Line2D::check_lines_pt(Line2D other)
{
	Point2D result;
	result.setX((c * other.getB() - other.getC() * b) / (other.getA() * b - a * other.getB()));
	result.setY((-c - a * result.getX()) / b);
	return result;
}

Point2D Line2D::check_line_seg_pt(Segment2D s2)
{
	Point2D result;
	Line2D line_s2;
	line_s2.setA(s2.getB().getY() - s2.getA().getY());
	line_s2.setB(s2.getA().getX() - s2.getB().getX());
	line_s2.setC(s2.getB().getX() * s2.getA().getY() - s2.getA().getX() * s2.getB().getY());
	result = check_lines_pt(line_s2);
	if (s2.getA().getX() <= s2.getB().getX())
	{
		if (s2.getA().getX() <= result.getX() <= s2.getB().getX())
		{
			return result;
		}
	}
	if (s2.getB().getX() <= s2.getA().getX())
	{
		if (s2.getB().getX() <= result.getX() <= s2.getA().getX())
		{
			return result;
		}
	}
	return result;
}
