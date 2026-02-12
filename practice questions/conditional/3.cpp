// Write a program that takes two numbers as input and displays which one is greater

#include<iostream>
using namespace std;
int main(){

int numberOne=0;
int numberTwo=0;

cout<<"entre the first number:";
cin>>numberOne;
cout<<"entre the second number:";
cin>>numberTwo;
if(numberOne>numberTwo){
    cout<<"numberOne is greater:";
}

else{
    cout<<"numberTwo is grater:";
}
return 0;}