// Write a program that takes the side of a square as input and calculates both its area and perimeter, then
// displays both results
#include<iostream>
using namespace std;
int main(){

int side=0;
int hight=0,area,parameter;

cout<<"entre the side:";
cin>>side;
// cout<<"entre the hight:";
// cin>>hight;

area=side*side;
cout<<"area:"<<area<<endl;
parameter=4*side;
cout<<"parameter:"<<parameter<<endl;
return 0;}