// Problem 18: Average of Marks in 5 Subjects
// Write a program that takes marks obtained in 5 subjects as input, calculates the total marks and average
// marks, and displays both.
#include <iostream>
using namespace std;


int main() {
    int subject1 = 0;
    int subject2 = 0;
    int subject3 = 0;
    int subject4 = 0;
    int subject5 = 0;
    int  total_marks =0;

    cout << "Enter marks for subject 1: ";
    cin >> subject1;
    cout << "Enter marks for subject 2: ";
    cin >> subject2;
    cout << "Enter marks for subject 3: ";
    cin >> subject3;
    cout << "Enter marks for subject 4: ";
    cin >> subject4;
    cout << "Enter marks for subject 5: ";
    cin >> subject5;

    total_marks = subject1 + subject2 + subject3 + subject4 + subject5;
    cout << "Total marks of student out of 500: " << total_marks << endl;
    cout << "Percentage of student: " << (total_marks * 100) / 500 << "%" << endl;

    return 0;
}