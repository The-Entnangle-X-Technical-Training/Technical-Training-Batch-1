#include<iostream>
using namespace std;

int main(){

    int inputNumber = 0;
    int temp = 0;
    int largestDigit = 0;

    cout<<"Enter a number to find largest digit : ";
    cin>>inputNumber;
    
    while(inputNumber > 0){
        temp = inputNumber % 10;
        inputNumber = inputNumber / 10;

        if(temp > largestDigit){
            largestDigit = temp;
        }
    }

    cout<<"Largest Digit : "<<largestDigit;

    return 0;
}