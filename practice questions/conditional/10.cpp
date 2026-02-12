// Write a program that takes two numbers as input and displays which one is smaller
#include<iostream>
using namespace std;
int main(){

int numberOne=0;
int numberTwo=0;

cout<<"entre the first number:";
cin>>numberOne;
cout<<"entre the second number:";
cin>>numberTwo;
if(numberOne<numberTwo){
    cout<<"numberOne is smaller:";
}

else{
    cout<<"numberTwo is smaller:";
}
return 0;}