// Write a program that takes marks (0-100) as input and displays grade:
// A if marks >= 90
// B if marks >= 70
// C if marks >= 40
// F if marks < 40
#include<iostream>
using namespace std;
int main(){

int marks=0;

cout<<"entre your marks out of 100:";
cin>>marks;
if(marks>=90){
    cout<<"A";
}
else if(marks>=70){
    cout<<"B";
}
else if(marks>=40){
    cout<<"C";
}

else{
    cout<<"fail:";
}
return 0;}