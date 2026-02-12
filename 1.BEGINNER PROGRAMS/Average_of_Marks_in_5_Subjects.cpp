#include <iostream>
using namespace std;

int main()
{
    float m1, m2, m3, m4, m5;
    float total, average;

    cout << "Enter marks of subject 1: ";
    cin >> m1;

    cout << "Enter marks of subject 2: ";
    cin >> m2;

    cout << "Enter marks of subject 3: ";
    cin >> m3;

    cout << "Enter marks of subject 4: ";
    cin >> m4;

    cout << "Enter marks of subject 5: ";
    cin >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5;

    cout << "Total Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;

    return 0;
}
