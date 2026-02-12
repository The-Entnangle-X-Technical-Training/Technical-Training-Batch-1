// Write a program that takes a number as input and displays whether it is positive or negative.
#include<iostream>
using namespace std;
int main(){

int number=0;

cout<<"entre the first number:";
cin>>number;
if(number>0){
    cout<<"the number is positive:";
}
else if(number<0){
    cout<<"the number is negative:";
}
else{
    cout<<"the number is zero:";
}
return 0;}