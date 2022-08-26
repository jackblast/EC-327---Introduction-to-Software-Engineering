#include "Vector2D.h"

//Vector Class

Vector2D::Vector2D(){
    x = 0.0;
    y = 0.0;
}
Vector2D::Vector2D(double in_x, double in_y){
    x = in_x;
    y = in_y;
}

// Multiplication operator for vector
Vector2D operator*(const Vector2D& v1, const double& d)
{
    return Vector2D(v1.x * d, v1.y * d);
}

// Division Operator
Vector2D operator/(const Vector2D& v1, const double& d)
{
    if (d != 0){
        return Vector2D(v1.x / d, v1.y / d);
    }else{
        return Vector2D(v1.x , v1.y);
    }
       
}
// Output Vector
ostream& operator<<(ostream& os, const Vector2D& v1)
{
    os << '<' << v1.x << ',' << ' ' << v1.y << '>';
    return os;
}
