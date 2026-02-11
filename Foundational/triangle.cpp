//check if triangle is acute, right, obtuse

#include <iostream>
using namespace std;

int main()
 {
    double a, b, c;
    cout << "Enter the three angles of the triangle (in degrees): ";
    cin >> a >> b >> c;

    // Check for valid triangle angles
    if (a + b + c != 180 || a <= 0 || b <= 0 || c <= 0) {
        cout << "Invalid triangle angles." << endl;
        return 1;
    }

    // Compare angles to determine triangle type
    if (a == 90 || b == 90 || c == 90) {
        cout << "Right triangle" << endl;
    } else if (a > 90 || b > 90 || c > 90) {
        cout << "Obtuse triangle" << endl;
    } else {
        cout << "Acute triangle" << endl;
    }

    return 0;
}