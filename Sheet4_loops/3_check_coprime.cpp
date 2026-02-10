//Check if Two Numbers are Co-Prime
// co-prime (GCD = 1)

#include<iostream>
using namespace std;

int computeGCD(int, int);

int main(){

    int firstNumber = 0;
    int secondNumber = 0;

    cout<<"Enter the first number : ";
    cin>>firstNumber;
    cout<<"Enter the second number : ";
    cin>>secondNumber;

    int GCD = computeGCD(firstNumber, secondNumber);

    if(GCD == 1){
        cout<<" THe numbers are Co-Prime";
    }
    else{
        cout<<"The numbers are not Co-Prime";
    }

    return 0;
}


int computeGCD(int num1, int num2){
    int remainder = 0;

    while(num1 % num2 != 0){
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    return num2;
}