#include <iostream>

using namespace std;


int main()
{
    int Guess;
    srand (time(NULL));
    int Actua = rand() % 10 + 1; 
    do{
        cout << "Please guess the number: ";
        cin >> Guess;
        if(cin.fail()){
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Error! You didn't insert a number! \n";
        }else if(Guess > Actua){
            cout << "Sorry, your guess is incorrect. Your guess was too high. \n";
        }else if(Guess < Actua){
            cout << "Sorry, your guess is incorrect. Your guess was too low. \n";
        }
    }while(Guess != Actua);
    cout << "Congratulations, your guess is correct!";
    return 0;
}