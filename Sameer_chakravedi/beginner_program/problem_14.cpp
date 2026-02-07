// Problem 14: Area and Perimeter of Rectangle
// Write a program that takes length and width of a rectangle as input and calculates both its area and
// perimeter, then displays both results.

#include <iostream>
using namespace std;

int main() {
    float length =0;
    float width = 0;
    float area =0;
    float perimeter=0;


    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;

    area = length * width;
    perimeter = 2 * (length + width);

    cout << "Area of rectangle = " << area << endl;
    cout << "Perimeter of rectangle = " << perimeter << endl;

    return 0;
}
