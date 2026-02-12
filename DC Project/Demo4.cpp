//Sum and average of three number

#include<iostream>
using namespace std;
int main(){
    int numberOne = 0;
    int numberTwo = 0;
    int numberThree = 0;
    int sum, average;

    cout<<"Enter numberOne: ";
    cin>>numberOne;

    cout<<"Enter numberTwo: ";
    cin>>numberTwo;

    cout<<"Enter numberThree: ";
    cin>>numberThree;

    sum = numberOne+numberTwo+numberThree;
    cout<<"Sum is :"<<sum;

    average = sum/3;
    cout<<"Average is :"<<average;

    return 0;
}