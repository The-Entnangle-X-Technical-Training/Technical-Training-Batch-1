//Greatest Common Factor
#include<iostream>
using namespace std;

int computeGCF(int, int);

int main(){

    int firstNumber = 0;
    int secondNumber = 0;

    cout<<"Enter the first number : ";
    cin>>firstNumber;
    cout<<"Enter the second number : ";
    cin>>secondNumber;

    int GCF = computeGCF(firstNumber, secondNumber);

    cout<<"The Greatest Common Factor is : "<< GCF;

    return 0;
}

int computeGCF(int num1,int num2){
    int remainder = 0;

    while(num1 % num2 !=0){
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    return num2;
}