#include <iostream>
using namespace std;

int main() {
    int angle1, angle2, angle3;


    cout << "Enter first angle: ";
    cin >> angle1;
    cout << "Enter second angle: ";
    cin >> angle2;
    cout << "Enter third angle: ";
    cin >> angle3;

    int sum = angle1 + angle2 + angle3;

    if (sum != 180 || angle1 <= 0 || angle2 <= 0 || angle3 <= 0) {
        cout << "Invalid Triangle" << endl;
    } else {
        
        if (angle1 < 90 && angle2 < 90 && angle3 < 90) {
            cout << "Acute Triangle" << endl;
        } else if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
            cout << "Right Triangle" << endl;
        } else { // One angle > 90
            cout << "Obtuse Triangle" << endl;
        }
    }

    return 0;
}
