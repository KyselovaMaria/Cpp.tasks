#pragma once
#include "Point2D.h"
#include "Segment2D.h"
// клас Ламана
class Polyline2D
{
public:
	// конструктор з параметрами
	Polyline2D(Point2D* points, int count);

	//	методи доступу та зміни полів
	//		getters / setters

	Point2D* getPoints();
    int getCount();

	void setPoints(Point2D* points);
    void setCount(int count);

	// метод перевірки чи є в ламаній самоперетини
	Point2D check_polyline_self();
private:
	// масив точок
	Point2D* points = nullptr;
    // кількість точок
    int count;
};
