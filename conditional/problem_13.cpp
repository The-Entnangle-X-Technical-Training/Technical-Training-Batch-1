// Problem 13: Greatest of Three Numbers
// Write a program that takes three numbers as input and displays the greatest among them.

#include <iostream>
using namespace std;

int main(){
    int firstNumber = 0;
    int SecondNumber = 0;
    int ThirdNumber = 0;
    cout << "enter First Number : ";
    cin >>firstNumber;
    cout << "enter second Number : ";
    cin >> SecondNumber;
    cout << "enter Third Number : ";
    cin >> ThirdNumber;

    if(firstNumber > SecondNumber){
        if(firstNumber > ThirdNumber){
            cout << firstNumber << " first Number is greatest ";
        }
        else if(firstNumber <ThirdNumber){
            cout <<ThirdNumber <<" third number is greatest";
        }
    }else if(firstNumber < SecondNumber){
        if(SecondNumber >ThirdNumber){
            cout << SecondNumber<<" Second number is greatest ";
        }else if(SecondNumber < ThirdNumber){
            cout << ThirdNumber<< " Third number is greatest ";
        }
    }else{
        cout << " all are equal";
    }
    return 0;

}