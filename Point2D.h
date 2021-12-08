#pragma once
#include <cmath>
// клас Точка
class Point2D
{
public:
	//		конструктори
	 
	// конструктор за замовчуванням
	Point2D();
	// конструктор з параметрами
	Point2D(double x, double y);

	//	методи доступу та зміни полів
	//		getters / setters

	double getX();
	double getY();

	void setX(double x);
	void setY(double y);

	// метод обрахунку відстані між точками
	double distance(Point2D other);
	
private:
	// координати точки
	double x;
	double y;
};

