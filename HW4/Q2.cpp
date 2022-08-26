#include <iostream>

using namespace std;


string* reverseString(string &s){
    string *ptr;
    ptr = new string[s.length()];
    int len = s.length();
    int i = len + 1;
    while(i != 0){
        i = i - 1;
        ptr[0] = ptr[0] + s[i];
    }
    return ptr;
}

