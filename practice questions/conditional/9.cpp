// Write a program that takes a number and checks if it is divisible by 10. Display "Divisible" or "Not
// Divisible"
#include<iostream>
using namespace std;
int main(){

int number=0;

cout<<"entre the number:";
cin>>number;
if(number/10){
    cout<<"divisible";
}

else{
    cout<<"not divisible";
}
return 0;}