// Problem 11: Area of Circle
// Write a program that calculates the area of a circle by taking radius as input. Use formula: Area = π × r²
// (use π = 3.14159)

#include <iostream>
using namespace std;

int main(){
    int radius=0;
    cout <<"enter radius of circle: ";
    cin >> radius;
    float pie = 3.14159;
    cout <<"area of circle = " << pie * radius * radius << endl;
    return 0;
}

