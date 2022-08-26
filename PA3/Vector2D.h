#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>

using namespace std;

//Vector Class
class Vector2D{
    public:
        double x;
        double y;
        Vector2D();
        Vector2D(double in_x, double in_y);
        // Multiplication operator for vector
        friend Vector2D operator*(const Vector2D& v1, const double& d);
        // Division Operator
        friend Vector2D operator/(const Vector2D& v1, const double& d);
        // Output Vector
        friend ostream& operator<<(ostream& os, const Vector2D& v1);
};





#endif