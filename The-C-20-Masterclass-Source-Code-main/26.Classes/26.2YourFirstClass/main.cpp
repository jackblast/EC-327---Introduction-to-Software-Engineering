#include <iostream>


using namespace std;

/*
const double PI {3.1415926535897932384626433832795};

class Cylinder {
    public : 
        //Functions (methods)
        double volume(){
            return PI * base_radius * base_radius * height;
        }

    public : 
        //Member variables
        double base_radius{1};
        double height{1};
};


int main(){

    Cylinder cylinder1; // Objects
    std::cout << "volume : " << cylinder1.volume() << std::endl;

    //Change the member variables
    cylinder1.base_radius = 10;
    cylinder1.height = 3;

    std::cout << "volume : " << cylinder1.volume() << std::endl;

    cylinder1.height =8;

    std::cout << "volume : " << cylinder1.volume() << std::endl;
   
    return 0;
}
*/

const double PI = 3.1415926535897932384626433832795;


class Cylinder{
    public:
        double volume(){
            return PI * base_radius * base_radius * height;
        }
    public: 
        double base_radius = 1;
        double height = 1;

};


int main(){
    Cylinder cylinder1;
    cout << cylinder1.volume() << endl;
    cylinder1.height = 10;
    cout << cylinder1.volume() << endl;
}