#pragma once
#include "Point2D.h"
#include <iostream>

// ���� ������������
class Polygone2D
{
public:
	// ����������� � �����������
	Polygone2D(Point2D* points, int count);

	//	������ ������� �� ���� ����
	//		getters / setters

	Point2D* getPoints();
	int getCount();

	void setPoints(Point2D* points);
	void setCount(int count);

	// ����� ��������, �� � ����������� ��������
	bool is_convex();
	
private:
	// ����� �����
	Point2D* points = nullptr;
	// ������� �����
	int count;
};


