//Write a program that takes marks (0-100) as input and displays grade: A (90-100), B (80-89), C (70-79),
//D (60-69), E (40-59), F (0-39).

#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter marks (0-100): ";
    cin >> marks;

    if(marks >= 90 && marks <= 100) {
        cout << "Grade A";
    }
    else if(marks >= 80) {
        cout << "Grade B";
    }
    else if(marks >= 70) {
        cout << "Grade C";
    }
    else if(marks >= 60) {
        cout << "Grade D";
    }
    else if(marks >= 40) {
        cout << "Grade E";
    }
    else {
        cout << "Grade F";
    }

    return 0;
}
