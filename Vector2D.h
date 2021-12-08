#pragma once
#include "Point2D.h"

// клас Відрізок
class Vector2D
{
public:
	// конструктор з параметрами
	Vector2D(Point2D a, Point2D b);

	//	методи доступу та зміни полів
	//		getters / setters

	Point2D getA();
	Point2D getB();

	void setA(Point2D a);
	void setB(Point2D b);

private:
	// дві точки
	Point2D a;
	Point2D b;
};

// перевантажені стандартні оператори
// оператор додавання
Vector2D operator+ (Vector2D v1, Vector2D v2);
// оператор множення
Vector2D operator* (Vector2D v1, Vector2D v2);
// та створені аналогічні функції
// функція додавання
Vector2D add(Vector2D v1, Vector2D v2);
// функція множення
Vector2D mult(Vector2D v1, Vector2D v2);
// функція знаходження скалярного добутку
double multS(Vector2D v1, Vector2D v2);
