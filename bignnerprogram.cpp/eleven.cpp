#include <iostream>
using namespace std;

int main() {

    int area = 0;
    double radius = 0.0;
    const double PI = 3.14159;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = PI * radius * radius;

    cout << "Area of the circle: " << area << endl;
    return 0;
}