#include <iostream>
#include "Line2D.h"
#include "Point2D.h"
#include "Polygone2D.h"
#include "Polyline2D.h"
#include "Segment2D.h"
#include "PolygonTriangulate.h"
#include "Vector2D.h"
using namespace std;

// декларуємо лінію, щоб кожного разу не виводити рядок і скористатись константою
#define LINE cout<<"-----------------------------------------------------\n";

int main()
{
	// знаходження суми векторів
	Vector2D vectorA(Point2D(2, 3), Point2D(5, 2));
	Vector2D vectorB(Point2D(1, 5), Point2D(2, 4));

	//cout << "\t- Vectors sum using functions -\n";
	Vector2D sumFunc = add(vectorA, vectorB);

	// знаходження точки перетину ліній

	cout << "Lines intersecting\n";
	Line2D lineA(5, -2, -16);
	Line2D lineB(2, -5, -19);
	Point2D lineIntersect = lineA.check_lines_pt(lineB);
	cout << "Point: [" << lineIntersect.getX() << "; " << lineIntersect.getY() << "]"<< endl;
	LINE

	// знаходження точки перетину відрізків

	cout << "Segments intersecting:\n";
	Segment2D segmentA(Point2D(1, 1), Point2D(7, 2));
	Segment2D segmentB(Point2D(7, 3), Point2D(5, 6));
	Point2D segmentIntersect;
	segmentIntersect = segmentA.intersect(segmentB);
	cout << "Point: [" << segmentIntersect.getX() << "; " << segmentIntersect.getY() << "]" << endl;
	LINE

	// знаходження точки перетину лінії та відрізка

	cout << "Line and segment intersecting:\n";
	Line2D line(5, -2, -16);
	Segment2D segment(Point2D(7, 3), Point2D(5, 6));
	Point2D lineSegmentIntersect = line.check_line_seg_pt(segment);
	cout << "Point: [" << lineSegmentIntersect.getX() << "; " << lineSegmentIntersect.getY() << "]" << endl;
	LINE

	// перевірка, чи містить ламана самоперетини

	cout << "Check if polyline has self intersecting:\n";
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
	cout << "Point: [" << polylinePoint.getX() << "; " << polylinePoint.getY() << "]" << endl;
	LINE

	// перевірка, чи багатокутник є опуклим

	cout << "Check if polygone is convex:\n";
	Polygone2D polygone(points, 5);
	cout << "Polygon is convex: " << boolalpha << polygone.is_convex() << endl;
	LINE

	// знаходження площі багатокутника

	cout << "Calculating polygone area:\n";
	int n = 10;
	double x[10] = {
	  8.0, 7.0, 6.0, 5.0, 4.0,
	  3.0, 2.0, 1.0, 0.0, 4.0 };
	double y[10] = {
	  0.0, 10.0,  0.0, 10.0,  0.0,
	 10.0,  0.0, 10.0,  0.0, -2.0 };

	double area = polygon_area(n, x, y);

	cout << "Polygon area is " << area << endl;
	LINE

	// тріангуляція багатокутника

	cout << "Triangulation:\n";
	int* triangles;

	cout<<"Polygon triangulate:\n";

	triangles = polygon_triangulate(n, x, y);

	i4mat_transpose_print(3, n - 2, triangles, "  Triangles");

	delete[] triangles;
	LINE

	system("pause");
	return 0;
}