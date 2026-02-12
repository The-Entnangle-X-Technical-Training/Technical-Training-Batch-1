// Write a program that checks if a number is between 1 and 10 (inclusive). Display "Yes" or "No"
#include<iostream>
using namespace std;
int main(){

int number=0;

cout<<"entre the number:";
cin>>number;
if(number>=1&&number<=10){
    cout<<"yes";
}

else{
    cout<<"no";
}
return 0;}