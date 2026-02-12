#include <iostream>
using namespace std;

int main() {
    float side1, side2, side3;

    cout << "Enter first side: ";
    cin >> side1;
    cout << "Enter second side: ";
    cin >> side2;
    cout << "Enter third side: ";
    cin >> side3;

    
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        // Determine type
        if (side1 == side2 && side2 == side3) {
            cout << "Equilateral Triangle" << endl;
        } 
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "Isosceles Triangle" << endl;
        } 
        else {
            cout << "Scalene Triangle" << endl;
        }
    } 
    else {
        cout << "Not a valid triangle" << endl;
    }

    return 0;
}
