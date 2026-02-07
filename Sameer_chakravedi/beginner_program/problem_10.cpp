// Problem 10: Area of Rectangle
// Write a program that calculates the area of a rectangle by taking length and width as input.

#include <iostream>
using namespace std;

int main(){
    int length =0;
    int width = 0;
    cout <<"enter length of rectangle(in cm): ";
    cin >> length;
    cout <<"enter width of rectangle(in cm): ";
    cin >> width;
    cout <<"area of rectangle = " << length * width << " cm^2" << endl;
    return 0;
}