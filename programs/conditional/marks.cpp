// Write a program that takes a student's marks (out of 100) as input and displays "Pass" if marks ≥ 40,
// otherwise displays "Fail"

#include <iostream>
using namespace std;

int main() {
    double marks = 0;

    cout << "enter your marks: ";
    cin >> marks;

    if (marks >= 40){
        cout << " you're pass";
    }else {
        cout << " better luck next time";
    }

    return 0;

}