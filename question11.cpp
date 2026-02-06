#include <iostream>
using namespace std;

// Write a program that takes two numbers base and exponent, and calculates base^exponent using a loop


int main(){

     int baseValue =0;
     int exponentValue =0;
     int finalValue =1;

     cout<<"enter a base value"<<endl;
     cin>>baseValue;
     cout<<"enter a exponent Value"<<endl;
     cin>>exponentValue;

 for(int i=1; i<=exponentValue;i++){

    finalValue*=baseValue;


 }
 cout<<finalValue;

}