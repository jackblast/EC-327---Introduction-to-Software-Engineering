#include <iostream>

using namespace std;

int triangular(int num){
    int i = 1;
    int sum = 0;
    while(i <= num){
        sum = sum + i;
        i = i+1;
    }
    return sum;
}
