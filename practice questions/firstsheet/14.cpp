// Write a program that takes length and width of a rectangle as input and calculates both its area and
// perimeter, then displays both results.
#include<iostream>
using namespace std;
int main(){

int length=0;
int width=0,area,parameter;

cout<<"entre the length:";
cin>>length;
cout<<"entre the width:";
cin>>width;

area=length*width;
cout<<"area:"<<area<<endl;
parameter=2*(length+width);
cout<<"parameter:"<<parameter<<endl;

return 0;}