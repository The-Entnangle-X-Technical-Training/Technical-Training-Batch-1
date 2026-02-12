// Write a program that calculates the area of a circle by taking radius as input. Use formula: Area = π × r²
// (use π = 3.14159
#include<iostream>
using namespace std;
int main(){

int radius=0;
int width=0,area,pie;
pie=3.14159;
cout<<"entre the radius:";
cin>>radius;
// cout<<"entre the width:";
// cin>>width;

area=pie*radius^2;
cout<<"area:"<<area<<endl;

return 0;}