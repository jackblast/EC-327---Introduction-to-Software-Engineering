#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

Student::Student(){
    first = "Jane";
    last = "Doe";
    id = 0;
    setGpa(0.0);    
}
Student::Student(string f, string l, int i, float g){
    first = f;
    last = l;
    id = i;
    setGpa(g);
}
void Student::setGpa(float g){
    gpa = g;
}
float Student::getGpa(){
    return gpa;
}
void Student::display(){
    cout << first << " " << last << " " << id << " " << gpa << endl;
}

