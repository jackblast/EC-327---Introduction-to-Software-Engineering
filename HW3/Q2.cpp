#include <iostream>

using namespace std;

void replace(string &s, char c1, char c2){
    int len = s.length();
    for(int i = 0; i < len; i++){
        if(s[i] == c1){
            s[i] = c2;
        }
    }
}

