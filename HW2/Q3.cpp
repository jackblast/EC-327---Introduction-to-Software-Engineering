#include <iostream>

using namespace std;

int main()
{
    char First, Third;
    int Second;
    cout << "Enter a character: ";
    cin >> First;
    do{
        cout << "Enter a height (between 1 and 20): ";
        cin >> Second;
        if(Second > 20 || Second < 1 || cin.fail()){
            cin.clear();
            cin.ignore(55, '\n');
            cout << "Error! You specified an invalid height!" << endl;
        }
    }while(Second > 20 || Second < 1);

    do{
        cout << "Enter pyramid shape (U for upright/I for inverted): ";
        cin >> Third;
        if(Third != 'U' && Third != 'I'){
            cout << "Error! You specified an invalid pyramid shape!" << endl;
        }
    }while(Third != 'U' && Third != 'I');
    

    int i = 1;
    int j = Second;
    while(i <= Second){
        if(Third == 'U'){
            cout << string(i, First) << endl;
        }else{
            cout << string(j, First) << endl;
        }
        i = i+1;
        j = j-1;
    }
    return 0;
}