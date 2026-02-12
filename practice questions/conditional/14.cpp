// Write a program that takes three numbers as input and displays the smallest among them
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
if(numberOne<numberTwo&&numberOne<numberthree){
    cout<<"numberOne is smaller";
}

else if(numberOne>numberTwo&&numberthree>numberTwo){
    cout<<"numberTwo is smaller";
}
else{
    cout<<"numberThree is smaller";
}
return 0;}