#pragma once
#include "Point2D.h"
#include <iostream>

// клас Багатокутник
class Polygone2D
{
public:
	// конструктор з параметрами
	Polygone2D(Point2D* points, int count);

	//	методи доступу та зміни полів
	//		getters / setters

	Point2D* getPoints();
	int getCount();

	void setPoints(Point2D* points);
	void setCount(int count);

	// метод перевірки, чи є многокутник випуклим
	bool is_convex();
	
private:
	// масив точок
	Point2D* points = nullptr;
	// кількість точок
	int count;
};


