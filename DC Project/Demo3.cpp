//Simple Calculator

#include<iostream>
using namespace std;
int main(){
    int numberOne = 0;
    int numberTwo = 0;
    int addition, subtraction, multiplication, division, remainder;

    cout<<"Enter numberOne: ";
    cin>>numberOne;

    cout<<"Enter numberTwo: ";
    cin>>numberTwo;

    addition = numberOne + numberTwo;
    cout<<"Addition is :"<<addition;

    subtraction = numberOne - numberTwo;
    cout<<"Subtraction is :"<<subtraction;

    multiplication = numberOne * numberTwo;
    cout<<"Multiplication is :"<<multiplication;

    division = numberOne / numberTwo;
    cout<<"Division is :"<<division;

    remainder = numberOne % numberTwo;
    cout<<"Remainder is :"<<remainder;

    cout<<addition <<endl<<subtraction <<endl<<multiplication <<endl<<division <<endl<<remainder <<endl;

    return 0;
}