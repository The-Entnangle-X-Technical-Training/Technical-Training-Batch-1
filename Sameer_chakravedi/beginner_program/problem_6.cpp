// Problem 6: Percentage Calculator
// Write a program that takes marks in 3 subjects (out of 100 each) as input, calculates total marks out of
// 300 and percentage, then displays both.

#include <iostream>
using namespace std;

int percentage(int total_marks) {
    return (total_marks * 100) / 300;
}

int main() {
    int subject1 = 0;
    int subject2 = 0;
    int subject3 = 0;
    int  total_marks =0;

    cout << "Enter marks for subject 1: ";
    cin >> subject1;
    cout << "Enter marks for subject 2: ";
    cin >> subject2;
    cout << "Enter marks for subject 3: ";
    cin >> subject3;
    total_marks = subject1 + subject2 + subject3;
    cout << "Total marks of student out of 300: " << total_marks << endl;
    cout << "Percentage of student: " << percentage(total_marks) << "%" << endl;

    return 0;
}