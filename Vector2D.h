#pragma once
#include "Point2D.h"

// ���� ³�����
class Vector2D
{
public:
	// ����������� � �����������
	Vector2D(Point2D a, Point2D b);

	//	������ ������� �� ���� ����
	//		getters / setters

	Point2D getA();
	Point2D getB();

	void setA(Point2D a);
	void setB(Point2D b);

private:
	// �� �����
	Point2D a;
	Point2D b;
};

// ������������ ��������� ���������
// �������� ���������
Vector2D operator+ (Vector2D v1, Vector2D v2);
// �������� ��������
Vector2D operator* (Vector2D v1, Vector2D v2);
// �� ������� �������� �������
// ������� ���������
Vector2D add(Vector2D v1, Vector2D v2);
// ������� ��������
Vector2D mult(Vector2D v1, Vector2D v2);
// ������� ����������� ���������� �������
double multS(Vector2D v1, Vector2D v2);
