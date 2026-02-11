//validating if angles can formm a tringle or not 
#include <iostream>
using namespace std;
int main() {
    int angle1, angle2, angle3, sum;
    cout << "Enter the three angles of the triangle: " << endl;
    cin >> angle1 >> angle2 >> angle3;

    sum = angle1 + angle2 + angle3;

    if (sum == 180) {
        cout << "The angles form a valid triangle." << endl;
    } else {
        cout << "The angles do not form a valid triangle." << endl;
    }

    return 0;
}