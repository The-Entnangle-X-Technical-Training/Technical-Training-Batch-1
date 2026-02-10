// Check if Number is Fibonacci Number
// Write a program that checks if a given number exists in the Fibonacci series by generating terms until
// reaching or exceeding the number.

#include<iostream>
using namespace std;

int genrateFibonacci(int);

int main(){

    int inputNum = 0;

    cout<<"Enter a number : ";
    cin>>inputNum;

        int fib = genrateFibonacci(inputNum);

    cout<<"FIB : "<<fib;
    return 0;
}

int genrateFibonacci(int number){
    int num1= 0;
    int num2 = 1;
    int num3 = 0;
    
    if(number <= 0){
        return num1;
    }

    else if(number == 1){
        return num1;
    }
    else if(number == 2){
        return num2;
    }
    else{
        int temp = number;
        for(int i = 1; i < number-1; i++){
            num3 = num1 + num2;
            num1 = num2;
            num2 = num3;
        }
        return num3;
    }
}