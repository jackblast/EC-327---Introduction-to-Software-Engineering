#ifndef POINT2D_H
#define POINT2D_H
#include "Vector2D.h"

#include <iostream>

using namespace std;

class Point2D{
    public:
        double x;
        double y;
        Point2D();
        Point2D(double in_x, double in_y);
        // Non Member Functions with Point2D
        friend double GetDistanceBetween(Point2D p1, Point2D p2);
        // Produces output in (x, y) format
        friend ostream& operator<<(ostream& os, const Point2D& p1);

        // Addition Operator
        friend Point2D operator+(const Point2D &p1, const Vector2D &p2);

        // Subtraction Operator
        friend Vector2D operator-(const Point2D &p1, const Point2D &p2);
};


#endif