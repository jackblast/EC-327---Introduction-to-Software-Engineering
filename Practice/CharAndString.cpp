#include <iostream>


// character manipulation
using namespace std;

void AgeLim(int age); //Declaration


int main(){
    int Age = 20;
    AgeLim(Age);
    AgeLim(15);

}

void AgeLim(int age){  // Defitnition
    if (age > 18){
        cout << "Over Age" << endl;

    }else{
        cout << "Under Age" << endl;
    }
}