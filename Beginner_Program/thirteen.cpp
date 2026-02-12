//area of triangle using formula : area = (base * height)/2 .
#include<iostream>
using namespace std;
int main(){
    int area ,base , height;
    cout<<"enter base :";
    cin>>base;
    cout<<"enter height :";
    cin>>height;
    area = (base * height)/2;
    cout<<"the area of triangle is :"<<area;
    return 0;
}