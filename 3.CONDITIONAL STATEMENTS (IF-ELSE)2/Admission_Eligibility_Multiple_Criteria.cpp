#include <iostream>
using namespace std;

int main() {
    int maths, physics, chemistry;
    int total;

    cout << "Enter Maths marks: ";
    cin >> maths;

    cout << "Enter Physics marks: ";
    cin >> physics;

    cout << "Enter Chemistry marks: ";
    cin >> chemistry;

    total = maths + physics + chemistry;

    if (maths >= 80 && physics >= 75 && chemistry >= 75 && total >= 240) {
        cout << "Eligible for Admission" << endl;
    } else {
        cout << "Not Eligible for Admission" << endl;
    }

    return 0;
}
