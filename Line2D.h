#pragma once
#include "Point2D.h"
#include "Segment2D.h"
// клас Пряма
class Line2D
{
public:
	// конструктор за замовчуванням
	Line2D();
	// конструктор з параметрами
	Line2D(double a, double b, double c);

	//	методи доступу та зміни полів
	//		getters / setters

	double getA();
	double getB();
	double getC();

	void setA(double a);
	void setB(double b);
	void setC(double c);

	// метод знаходження точки перетину між лініями
	Point2D check_lines_pt(Line2D other);
	
	// метод знаходження точки перетину між лінією та відрізком
	Point2D check_line_seg_pt(Segment2D s2);
	
private:
	// коефіцієнти, що задають пряму
	double a;
	double b;
	double c;
};
