#include <iostream>

using namespace std;

int gcd(int x, int y){
    int GCD;
    if(x >= 1 && y >= 1){
        int z = min(x, y);
        while(z != 0){
            if(x % z == 0 && y % z == 0){
                GCD = z;
                break;
            }
            z = z-1;
        }
    }
    return GCD;
}
