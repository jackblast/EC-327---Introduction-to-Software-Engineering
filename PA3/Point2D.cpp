#include "Point2D.h"

#include <cmath>

//Point Class

Point2D::Point2D(){
    x = 0.0;
    y = 0.0;
}
Point2D::Point2D(double in_x, double in_y){
    x = in_x;
    y = in_y;
} 

// Non Member Functions with Point2D
double GetDistanceBetween(Point2D p1, Point2D p2)
{
    return sqrt(pow(p1.x-p2.x, 2.0)+pow(p1.y - p2.y, 2.0));
}
// Produces output in (x, y) format
ostream& operator<<(ostream& os, const Point2D& p1)
{
    os << '(' << p1.x << ',' << ' ' << p1.y << ')';
    return os;
}

// Addition Operator
Point2D operator+(const Point2D &p1, const Vector2D &p2)
{
    return Point2D(p1.x+p2.x, p1.y+p2.y);
}

// Subtraction Operator
Vector2D operator-(const Point2D &p1, const Point2D &p2)
{
    return Vector2D(p1.x-p2.x, p1.y-p2.y);
}

