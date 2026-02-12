//Write a program that takes three sides of a triangle as input and checks if it forms an Equilateral (all sides
//equal), Isosceles (two sides equal), or Scalene (all sides different) triangle.

#include <iostream>
using namespace std;

int main() {
    float s1, s2, s3;

    cout << "Enter three sides of triangle: ";
    cin >> s1 >> s2 >> s3;

    if(s1 == s2 && s2 == s3) {
        cout << "Equilateral Triangle";
    }
    else if(s1 == s2 || s2 == s3 || s1 == s3) {
        cout << "Isosceles Triangle";
    }
    else {
        cout << "Scalene Triangle";
    }

    return 0;
}
