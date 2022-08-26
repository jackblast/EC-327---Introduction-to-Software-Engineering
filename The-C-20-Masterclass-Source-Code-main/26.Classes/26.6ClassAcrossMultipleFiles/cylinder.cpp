#include "cylinder.h"

cylinder::cylinder(double rad_param,double height_param){
    base_radius = rad_param;
    height = height_param;
}

double cylinder::volume(){
    return PI * base_radius * base_radius * height;
}

//Setter and getter methods
double cylinder::get_base_radius(){
    return base_radius;
}
double cylinder::get_height(){
    return height;
}

void cylinder::set_base_radius(double rad_param){
    base_radius = rad_param;
}

void cylinder::set_height(double height_param){
    height = height_param;
}