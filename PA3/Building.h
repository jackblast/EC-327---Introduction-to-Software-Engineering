#ifndef BUILDING_H
#define BUILDING_H

#include <iostream>
#include "Point2D.h"
#include "GameObject.h"
#include <cmath>

using namespace std;

class Building : public GameObject{
    private:
        unsigned int student_count;
    public:
        Building();
        Building(char in_code, int in_id, Point2D in_loc);
        void AddOneStudent();
        void RemoveOneStudent();
        void ShowStatus();
        bool ShouldBeVisible();
};

#endif