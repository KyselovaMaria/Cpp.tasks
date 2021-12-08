#pragma once
#include <cmath>
// ���� �����
class Point2D
{
public:
	//		������������
	 
	// ����������� �� �������������
	Point2D();
	// ����������� � �����������
	Point2D(double x, double y);

	//	������ ������� �� ���� ����
	//		getters / setters

	double getX();
	double getY();

	void setX(double x);
	void setY(double y);

	// ����� ��������� ������ �� �������
	double distance(Point2D other);
	
private:
	// ���������� �����
	double x;
	double y;
};

