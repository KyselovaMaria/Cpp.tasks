#pragma once
#include "Point2D.h"

// ���� ³�����
class Segment2D
{
public:
	Segment2D() = default;
	// ����������� � �����������
	Segment2D(Point2D a, Point2D b);

	//	������ ������� �� ���� ����
	//		getters / setters

	Point2D getA();
	Point2D getB();

	void setA(Point2D a);
	void setB(Point2D b);

	// ����� ����������� ����� �������� ���� ������
	Point2D intersect(Segment2D other);
	
private:
	// �� �����
	Point2D a;
	Point2D b;
};