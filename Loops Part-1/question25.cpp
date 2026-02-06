// Write a program that takes a number as input and prints all its factors using a loop.

#include <iostream>
using namespace std;

int main(){

    int firstValue=0;
    int factor=0;
     int a=2;
    cout<<"enter a number";
    cin>>firstValue;

    while(firstValue!=1){
       
        if(firstValue%a==0){
            cout<<a<<endl;
            firstValue/=a;
        }
            a++;
    }
}