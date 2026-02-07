// Problem 12: Area of Triangle
// Write a program that calculates the area of a triangle using the formula: Area = (base × height) / 2

#include <iostream>
using namespace std;

int main(){
    int base =0;
    int height =0 ;
    int area =0;

    cout << "enter the base of triangle ";
    cin >> base;

    cout << "enter the height of triangle ";
    cin >> height;

    area = (base * height) / 2;

    cout << "the area of triangle is " << area << endl;
    return 0;
    
}