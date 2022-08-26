#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>


using namespace std;

class Student
{
    private:
        float gpa;
    public:
        string first, last;
        int id; 
        float x;
        Student();
        Student(string f, string l, int i, float g);
        void setGpa(float g);
        float getGpa();
        void display();
};

#endif