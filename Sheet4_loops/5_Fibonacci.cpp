// Fibonacci Series (first N terms)
#include<iostream>
using namespace std;

void genrateFibonacciTill(int);

int main(){

    int inputNumber = 0;

    cout<<"Enter the range of Fbonacci Series : ";
    cin>>inputNumber;

    genrateFibonacciTill(inputNumber);

    return 0;
}


void genrateFibonacciTill(int number){
    int num1 = 0;
    int num2 = 1;
    int num3 = 0;

    if(number == 0){
        cout<< "Enter number greater than 0";
    }

    else if(number == 1){
        cout<< num1;
    }
    else{
        cout<<num1<<" "<<num2<<" ";

        for(int i = 1; i < number-1; i++){
            num3 = num1 + num2;
            num1 = num2;
            num2= num3;

            cout<<num3<<" ";
    }
    }
}