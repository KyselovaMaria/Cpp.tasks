#pragma once
#include "Point2D.h"
#include "Segment2D.h"
// ���� ������
class Polyline2D
{
public:
	// ����������� � �����������
	Polyline2D(Point2D* points, int count);

	//	������ ������� �� ���� ����
	//		getters / setters

	Point2D* getPoints();
    int getCount();

	void setPoints(Point2D* points);
    void setCount(int count);

	// ����� �������� �� � � ������ ������������
	Point2D check_polyline_self();
private:
	// ����� �����
	Point2D* points = nullptr;
    // ������� �����
    int count;
};
