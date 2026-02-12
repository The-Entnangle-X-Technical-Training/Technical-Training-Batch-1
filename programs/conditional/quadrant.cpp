//Write a program that takes x and y coordinates as input and displays which quadrant the point lies in (I,
//II, III, IV), or if it lies on an axis or origin.

#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    if(x == 0 && y == 0) {
        cout << "Point is at Origin";
    }
    else if(x == 0) {
        cout << "Point lies on Y-axis";
    }
    else if(y == 0) {
        cout << "Point lies on X-axis";
    }
    else if(x > 0 && y > 0) {
        cout << "Point lies in Quadrant I";
    }
    else if(x < 0 && y > 0) {
        cout << "Point lies in Quadrant II";
    }
    else if(x < 0 && y < 0) {
        cout << "Point lies in Quadrant III";
    }
    else {
        cout << "Point lies in Quadrant IV";
    }

    return 0;
}
