#include <iostream>

using namespace std;

int main() {
    // Declare and initialize pointer
    // initalize integer
    int x = 5;
    // initialize pointer, which is address to x
    int* y = &x;
    
    cout << x << endl;
    cout << y << endl;

    // change pointer address

    int z = 7;
    y = &z;
    cout << x << endl;
    cout << y << endl;

    // read value from pointer
    cout << *y << endl;

    // pointer to character
    const char* name = "Hello There";
    cout << name << endl;
    
    // Dynamic Memory Allocation
    // store in Heap memory

    int* number = nullptr;
    // Allocate memory
    number = new int;
    // Writing into allocated memory
    *number = 77;
    cout<< *number << endl;

    // return memory to computer
    delete number;
    number = nullptr;

    



}