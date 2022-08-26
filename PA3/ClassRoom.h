#include <iostream>
#include "Building.h"
#ifndef CLASSROOM_H
#define CLASSROOM_H

using namespace std;

enum ClassRoomStates{
    NOT_PASSED = 0,
    PASSED = 1;
}

class ClassRoom : public Building{
    private: 
        unsigned int num_assignments remaining;
        unsigned int max_number_of_assignments;
        unsigned int antibody_cost_per_assignment;
        double dollar_cost_per_assignment;
        unsigned int credits_per_assignment;
};


#endif