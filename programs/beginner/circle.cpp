#include <iostream>
using namespace std;

int main() {
    int area = 0;
    double radius = 0.0;
    const double PI = 3.14;

    cout << "enter the radius of circle";
    cin >> radius;

    area = PI * radius * radius;

    cout << "area of the circle" << area << endl;
    return 0;
}