#include <iostream>
#include "Point2D.h"
#include "Vector2D.h"
#include "GameObject.h"
#include "Building.h"
#include "DoctorsOffice.h"

using namespace std;

int main()
{
    /*
    Point2D p1(7.5, 4.5);
    Point2D p2(3.2, 4.0);
    Vector2D v1(5.2, 4.4);
    Vector2D v2(5.4, 3.9);
    double d = 5;
    Point2D sump1v1 = p1+v1;
    cout << sump1v1 << endl;
    Vector2D subp1p2 = p1-p2;
    cout << subp1p2 << endl;
    Vector2D mulv1d = v1*d;
    cout << mulv1d << endl;
    Vector2D divv1d = v1/d;
    cout << divv1d << endl;
    GameObject g1('a');
    g1.ShowStatus();
    GameObject g2(p1, 5, 'A');
    g2.ShowStatus();
    
    Building b1;
    Point2D p2(3.2, 4.0);
    b1.ShowStatus();
    Building b2('E', 5, p2);
    b2.ShowStatus();
    b2.AddOneStudent();
    b2.ShowStatus();
    b2.RemoveOneStudent();
    b2.ShowStatus();
    */
    Point2D p2(3.2, 4.0);
    DoctorsOffice d1(5, 10.0, 50, p2);
    d1.ShowStatus();
    d1.Update();
}