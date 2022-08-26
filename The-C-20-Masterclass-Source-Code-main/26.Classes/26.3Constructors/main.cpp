#include <iostream>

using namespace std;

const double PI = 3.1415926535897932384626433832795;

class Cylinder {
    public : 
        //Constctors, without parameter
        Cylinder(){
            base_radius = 2.0;
            height = 2.0;
        }
        // constructors with parameter
        Cylinder(double rad_param, double height_param){
            base_radius = rad_param;
            height = height_param;
        }
   
        //Functions (methods)
        double volume(){
            return PI * base_radius * base_radius * height;
        }

    private : 
        //Member variables, cannot access outside of class
        double base_radius = 1;
        double height = 1;
};


int main(){
    //Cylinder cylinder1(10,4); // Object
    Cylinder cylinder1(10, 4); //object
    std::cout << "volume : " << cylinder1.volume() << std::endl;
    return 0;
}