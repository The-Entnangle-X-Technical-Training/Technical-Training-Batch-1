// Write a program that checks if a number is a multiple of 3. Display "Multiple of 3" or "Not Multiple of
// 3"
#include<iostream>
using namespace std;
int main(){

int number=0;

cout<<"entre the number:";
cin>>number;
if(number%3==0){
    cout<<"multiple";
}

else{
    cout<<"not multiple";
}
return 0;}