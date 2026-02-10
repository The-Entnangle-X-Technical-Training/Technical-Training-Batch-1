//LCM
// product of numbers / GCD = LCM

#include<iostream>
using namespace std;

int computeGCD(int, int);
int product(int, int);

int main(){

    int firstNumber = 0;
    int secondNumber = 0;

    cout<<"Enter the first number : ";
    cin>>firstNumber;
    cout<<"Enter the second number : ";
    cin>>secondNumber;

    int productOfDigits = product(firstNumber,secondNumber);
    int GCD = computeGCD(firstNumber,secondNumber);

    cout<<"Least Common Facor is : "<< productOfDigits / GCD;

    return 0;
}

int computeGCD(int num1, int num2){
    int remainder = 0;

    while(num1 % num2 != 0){    
        remainder = num1 %num2;
        num1 = num2;
        num2 = remainder;
    }

    return num2;
}

int product(int num1, int num2){
    return num1 * num2;
}