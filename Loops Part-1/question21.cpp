// Write a program that takes a number and finds the largest digit in it using a loop.

#include <iostream>
using namespace std;

int main(){

    int fristValue=0;
    int largeValue=0;
    int tempValue=0;
    cout<<"enter a number";
    cin>>fristValue;

    while (fristValue!=0)
    {
        tempValue= fristValue%10;
        if(tempValue>largeValue){
            largeValue= tempValue;
        }
        fristValue/=10;
    }
    cout<<largeValue;
    
}