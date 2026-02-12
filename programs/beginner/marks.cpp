//Write a program that takes marks obtained in 5 subjects as input, calculates the total marks and average
//marks, and displays both.

#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3, m4, m5, total, average;

    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5;

    cout << "Total marks = " << total << endl;
    cout << "Average marks = " << average << endl;

    return 0;
}
