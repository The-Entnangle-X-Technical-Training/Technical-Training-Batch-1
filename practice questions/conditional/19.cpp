// Write a program that checks if a number is a single digit (0-9). Display "Single Digit" or "Not Single
// Digit".
#include<iostream>
using namespace std;
int main(){

int number=0;

cout<<"entre the number:";
cin>>number;
if(number>=0&&number<=9){
    cout<<"single digit";
}

else{
    cout<<"not single digit";
}
return 0;}