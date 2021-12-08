#pragma once
#include "Point2D.h"

// клас Відрізок
class Segment2D
{
public:
	Segment2D() = default;
	// конструктор з параметрами
	Segment2D(Point2D a, Point2D b);

	//	методи доступу та зміни полів
	//		getters / setters

	Point2D getA();
	Point2D getB();

	void setA(Point2D a);
	void setB(Point2D b);

	// метод знаходження точки перетину двох відрізків
	Point2D intersect(Segment2D other);
	
private:
	// дві точки
	Point2D a;
	Point2D b;
};