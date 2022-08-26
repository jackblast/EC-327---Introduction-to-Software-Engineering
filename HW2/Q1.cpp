#include<iostream>


using namespace std;

int main()
{   
    int num1, num2;
    string operato;
    cout << "Enter an expression to evaluate: ";
    cin >> num1 >> operato >> num2 ;
    
    if(cin.fail()){
        cout << "Error! You did not provide two numerals as operands.";
    }
    else if(operato == "+"){
        cout <<"Result: "<< num1 + num2;
    }else if(operato == "-"){
        cout << "Result: "<< num1 - num2;
    }else if(operato == "/" && num2 != 0){
        float ans = (float)num1/(float)num2;
        cout << "Result: "<< ans;
    }else if(operato == "*"){
        cout <<"Result: "<< num1 * num2;
    }else if(operato == "/" && num2 == 0){
        cout << "Error! You can't divide a number by 0!";
    }else if(operato != "+" && operato != "-" && operato != "*" && operato != "/"){
        cout << "Error! " << "'"<< operato << "'"<< " is not a supported operator.";
    }
    return 0;
}