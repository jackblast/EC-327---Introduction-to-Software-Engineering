#include <iostream>
#include <cmath>

using namespace std;

float getNorm(float **matrx, int N){
    float sum;
    sum = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            sum = sum + abs(matrx[i][j]);
        }
    }
    return sum;
}
