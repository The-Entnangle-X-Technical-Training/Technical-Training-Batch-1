// Write a program that takes two numbers as input, swaps them without using any third variable (use
// arithmetic operations), and displays values before and after swapping
#include<iostream>
using namespace std;
int main(){
int numberOne=0;
int numberTwo=0,temp;

cout<<"entre the first number:";
cin>>numberOne;
cout<<"entre second number:";
cin>>numberTwo;

numberOne=numberOne+numberTwo;
numberTwo=numberOne-numberTwo;
numberOne=numberOne-numberTwo;

cout<<numberOne<<numberTwo;
return 0;
}
