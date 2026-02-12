#include <iostream>
using namespace std;

int main() {
    double bmi;

    
    cout << "Enter your BMI value: ";
    cin >> bmi;

    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } 
    else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Normal" << endl;
    } 
    else if (bmi >= 25 && bmi <= 29.9) {
        cout << "Overweight" << endl;
    } 
    else { // bmi >= 30
        cout << "Obese" << endl;
    }

    return 0;
}
