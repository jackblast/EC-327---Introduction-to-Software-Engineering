#include <iostream>

using namespace std;

int main(){
    // Declare and reference variable
    int number1 = 5;
    double number2 = 5.5;
    // references
    int& number1ref = number1;
    double& number2ref = number2;

    //print stuff out
    cout << number1 << endl;
    cout << number2 << endl;
    cout << number1ref << endl;
    cout << number2ref << endl;
    cout << &number1 << endl;
    cout << &number2 << endl;
    cout << &number1ref << endl;
    cout << &number2ref << endl;

    // modify data
    number1 = 10;
    number2 = 10.5;

    //print stuff out, 
    cout << number1 << endl;
    cout << number2 << endl;
    cout << number1ref << endl;
    cout << number2ref << endl;
    cout << &number1 << endl;
    cout << &number2 << endl;
    cout << &number1ref << endl;
    cout << &number2ref << endl;

    //modify data 

    number1ref = 100;
    number2ref = 120.5;

    //print stuff out, 
    cout << number1 << endl;
    cout << number2 << endl;
    cout << number1ref << endl;
    cout << number2ref << endl;
    cout << &number1 << endl;
    cout << &number2 << endl;
    cout << &number1ref << endl;
    cout << &number2ref << endl;

    // compairing references and pointers
    double number3 = 5.60;
    double& number3ref = number3;
    double* number3point = &number3;

    cout << number3 << endl;
    cout << number3ref << endl;
    cout << number3point << endl;
    cout << *number3point << endl;

    // writing through pointer
    *number3point = 2.95;

    cout << number3 << endl;
    cout << number3ref << endl;
    cout << number3point << endl;
    cout << *number3point << endl;

    //writing through reference

    number3ref = 13.55;

    cout << number3 << endl;
    cout << number3ref << endl;
    cout << number3point << endl;
    cout << *number3point << endl;


}