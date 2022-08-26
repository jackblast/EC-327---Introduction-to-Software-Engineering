#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <iostream>
#include "Point2D.h"

using namespace std;



//GameObject Class
class GameObject{
    protected:
        Point2D location;
        int id_num;
        char display_code;
        char state;
    public:
        GameObject(char in_code);
        GameObject(Point2D in_loc, int in_id, char in_code);
        Point2D Getlocation();
        int GetId();
        char GetState();
        void ShowStatus();
};

#endif