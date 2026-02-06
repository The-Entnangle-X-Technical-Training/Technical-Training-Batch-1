//LCM
// product of numbers / GCD = LCM
#include<iostream>
using namespace std;

int main(){

    int firstNumber = 0;
    int secondNumber = 0;
    int reminder = 0;
    int num1 = 0;
    int num2 = 0;
    int lcm = 0;

    cout<<"Enter the first number : ";
    cin>>firstNumber;
    cout<<"Enter the second number : ";
    cin>>secondNumber;

    if(firstNumber > secondNumber){
        num2 = firstNumber;
        num1 = secondNumber;
    }
    else{
        num2 = secondNumber;
        num1 = firstNumber;
    }

    while(num2 % num1 != 0){
        reminder = num2 % num1;
        num2 = num1;
        num1 = reminder;
    }

    lcm = (firstNumber * secondNumber) / num1;

    cout<<"LCM : "<<lcm;


    return 0;
}