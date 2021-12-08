#pragma once
#include "Point2D.h"
#include "Segment2D.h"
// ���� �����
class Line2D
{
public:
	// ����������� �� �������������
	Line2D();
	// ����������� � �����������
	Line2D(double a, double b, double c);

	//	������ ������� �� ���� ����
	//		getters / setters

	double getA();
	double getB();
	double getC();

	void setA(double a);
	void setB(double b);
	void setC(double c);

	// ����� ����������� ����� �������� �� �����
	Point2D check_lines_pt(Line2D other);
	
	// ����� ����������� ����� �������� �� ��� �� �������
	Point2D check_line_seg_pt(Segment2D s2);
	
private:
	// �����������, �� ������� �����
	double a;
	double b;
	double c;
};
