#include <iostream>
#include <vector>
#include <fstream>

#include "Line2D.h"
#include "Point2D.h"
#include "Polygone2D.h"
#include "Polyline2D.h"
#include "Segment2D.h"
#include "PolygonTriangulate.h"
#include "Vector2D.h"

// declare a line so as not to print a string each time and use a constant
#define LINE cout<<"-----------------------------------------------------\n";

using namespace std;

void inputVectors(Vector2D& v1, Vector2D& v2);
Point2D* inputPoints(int& size);

int main()
{
	// find the sum of vectors using functions
	Vector2D vectorA;
	Vector2D vectorB;
	inputVectors(vectorA, vectorB);

	cout << "Vectors sum using functions:\n";
	cout << add(vectorA, vectorB) << endl;
	LINE

        // find the product of vectors of vectors using functions
	cout << "Vectors mult using functions:\n";
	cout << mult(vectorA, vectorB) << endl;
	LINE

	// find the sum of vectors using operators
	cout << "Vectors sum using operators:\n";
	cout << vectorA + vectorB << endl;
	LINE

	// find the product of vectors using operators
	cout << "Vectors mult using operators\n";
	cout << vectorA * vectorB << endl;
	LINE

	// finding the scalar product of vectors
	cout << "Calculating vectors scalar:\n";
	cout << "Scalar is: " << multS(vectorA, vectorB) << endl;
	LINE
	
	
        // find the point of intersection of lines
	cout << "Lines intersecting:\n";
	Line2D lineA(5, -2, -16);
	Line2D lineB(2, -5, -19);
	Point2D lineIntersect = lineA.check_lines_pt(lineB);
	
	cout << "Point: " << lineIntersect << endl;
	LINE

	// find the point of intersection of segments

	cout << "Segments intersecting:\n";
	Segment2D segmentA(Point2D(1, 1), Point2D(7, 2));
	Segment2D segmentB(Point2D(7, 3), Point2D(5, 6));
	Point2D segmentIntersect;
	segmentIntersect = segmentA.intersect(segmentB);
	cout << "Point: " << segmentIntersect << endl;
	LINE

	
        // find the point of intersection of line and segment
	cout << "Line and segment intersecting: \n";
	Line2D line(5, -2, -16);
	Segment2D segment(Point2D(7, 3), Point2D(5, 6));
	Point2D lineSegmentIntersect = line.check_line_seg_pt(segment);
	cout << "Point: " << lineSegmentIntersect << endl;
	LINE

	// Check if polyline has self intersecting

	cout << "Check if polyline has self intersecting: \n";
	Point2D* points = new Point2D[5]
	{
		Point2D(-1,1),
		Point2D(1,4),
		Point2D(3,0),
		Point2D(1,-1),
		Point2D(-2,2)
	};
	Polyline2D polyline(points, 5);
	Point2D polylinePoint = polyline.check_polyline_self();
	cout << "Point: " << polylinePoint << endl;
	delete[] points;
	LINE


	// Check if polygone is convex
	cout << "Check if polygone is convex:\n";
	int size = 0;
	Point2D* pointsPolygone = inputPoints(size);
	Polygone2D polygone(pointsPolygone, size);
	cout << "Polygon is convex: " << boolalpha << polygone.is_convex() << endl;
	LINE

	//polygone area

	cout << "Calculating polygone area:\n";

	cout << "Polygon area is " << polygone.calculateArea() << endl;
	LINE

	// Triangulation

	cout << "Triangulation:\n\n";

	vector<Triangle2D> triangles = polygone.triangulation();
	for (size_t i = 0; i < triangles.size(); i++)
	{
		cout << i + 1 << ". " << triangles[i] << endl;
	}
	LINE

	system("pause");
	return 0;
}

void inputVectors(Vector2D& v1, Vector2D& v2)
{
	Point2D vA1, vA2, vB1, vB2;
	char choise;
	cout << "Do you want to input points?\n[Y]\\[y] | [N]\\[n]\n>";
	cin >> choise;
	if (choise == 'Y' || choise == 'y')
	{
		Point2D p;
		cout << "\tEnter 1st vector start point\n";
		cin >> p;
		vA1 = p;
		cout << "\tEnter 1st vector end point\n";
		cin >> p;
		vA2 = p;
		cout << "\tEnter 2nd vector start point\n";
		cin >> p;
		vB1 = p;
		cout << "\tEnter 2nd vector end point\n";
		cin >> p;
		vB2 = p;
	}
	else
	{
		vA1 = Point2D(2, 3);
		vA2 = Point2D(5, 2);
		vB1 = Point2D(1, 5);
		vB2 = Point2D(2, 4);
	}
	v1 = Vector2D(vA1, vA2);
	v2 = Vector2D(vB1, vB2);
}

Point2D* inputPoints(int& size)
{
	Point2D* points;
	char choise;
	cout << "Do you want to input points?\n[Y]\\[y] | [N]\\[n]\n>";
	cin >> choise;
	if (choise == 'Y' || choise == 'y')
	{
		cout << "Enter count of points: ";
		cin >> size;
		points = new Point2D[size];
		Point2D p;
		for (int i = 0; i < size; i++)
		{
			cout << "\tEnter [" << i + 1 << "] point coordinates\n";
			cin >> p;
			points[i] = p;
		}
	}
	else 
	{
		double x, y;
		ifstream ifsX("x.txt");
		ifstream ifsY("y.txt");
		int sizeX, sizeY;
		ifsX >> sizeX;
		ifsY >> sizeY;
		if (sizeX != sizeY)
		{
			cout << "There is a different count of points in files.";
			exit(-1);
		}
		size = sizeX;
		points = new Point2D[size];

		for (int i = 0; i < size; i++)
		{
			ifsX >> x;
			ifsY >> y;
			points[i].setX(x);
			points[i].setY(y);
		}
		ifsX.close();
		ifsY.close();
	}
	return points;
}
