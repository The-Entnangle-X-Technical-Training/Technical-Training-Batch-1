// Problem 13: Area and Perimeter of Square
// Write a program that takes the side of a square as input and calculates both its area and perimeter, then
// displays both results.

#include <iostream>
using namespace std;

int main() {
    float side =0;
    float area =0;
    float perimeter=0;


    cout << "Enter side of the square: ";
    cin >> side;

    area = side * side;
    perimeter = 4 * side;

    cout << "Area of square = " << area << endl;
    cout << "Perimeter of square = " << perimeter << endl;

    return 0;
}
