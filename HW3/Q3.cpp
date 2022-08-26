#include <iostream>
#include <fstream>

using namespace std;

float calculateAverage(string class1, string filename){
    string ID;
    string Course;
    float num;
    float avg;
    ifstream file;
    file.open(filename);
    float sum = 0;
    float i = 0;
    while(!file.eof()){
        file >> ID >> Course >> num ;
        if(Course == class1){
            sum = sum + num;
            i = i+1;
        }
    }
    avg = sum /i;
    file.close();
    return avg;
}
