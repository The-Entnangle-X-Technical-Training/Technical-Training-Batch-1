// Problem 25: Number Range Classifier
// Write a program that takes a number and classifies it into ranges: 1-10, 11-50, 51-100, 101-500, 501
// 1000, or above 1000. Display the range.

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    cout << "enter a number : ";
    cin >> number;
    if(number >=1 && number <=10){
        cout <<number <<" is in the range of 1-10 ";
    }else if(number >=11 && number <=50){
        cout <<number <<" is in the range of 11-50 ";
    }else if(number >=51 && number <=100){
        cout <<number <<" is in the range of 51-100 ";
    }else if(number >=101 && number <=500){
        cout <<number <<" is in the range of 101-500 ";
    }else if(number >=501 && number <=1000){
        cout <<number <<" is in the range of 501-1000 ";
    }else if(number >1000){
        cout <<number <<" is above 1000 ";
    }else{
        cout <<"invalid number";
    }
    return 0;
}