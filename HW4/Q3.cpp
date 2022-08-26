#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main(){
	//First case
	Student defaultstudent; // Create default student with default constructor
	cout<<"Default student looks like this "<<endl;
	defaultstudent.display();  // Print default student
	defaultstudent.setGpa(3.8);// Default student's GPA was increased
	cout<<"After increasing the student's GPA "<<endl;
	defaultstudent.display();
	//Second case
	Student secondstudent("Robert","Brown",5834,4.0);
	cout<<"Printing custom student info"<<endl;
	secondstudent.display();
	secondstudent.setGpa(3.95);
	cout<<"Custom student GPA has now decreased to "<<secondstudent.getGpa()<<endl;
	cout<<"Final updated info of second student"<<endl;
	secondstudent.display();

	return 0;
}