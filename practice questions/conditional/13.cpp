// Write a program that takes three numbers as input and displays the greatest among them.
#include<iostream>
using namespace std;
int main(){

int numberOne=0;
int numberTwo=0;
int numberthree=0;

cout<<"entre the first number:";
cin>>numberOne;
cout<<"entre the second number:";
cin>>numberTwo;
cout<<"entre the third number:";
cin>>numberthree;
if(numberOne>numberTwo&&numberOne>numberthree){
    cout<<"numberOne is greater:";
}

else if(numberOne<numberTwo&&numberthree<numberTwo){
    cout<<"numberTwo is grater:";
}
else{
    cout<<"numberThree is greater";
}
return 0;}