#include <iostream>
using namespace std;

int main()
{
    int sub1, sub2, sub3;
    int total;
    float percentage;

    cout << "Enter marks of subject 1: ";
    cin >> sub1;

    cout << "Enter marks of subject 2: ";
    cin >> sub2;

    cout << "Enter marks of subject 3: ";
    cin >> sub3;

    total = sub1 + sub2 + sub3;
    percentage = (total / 300.0) * 100;

    cout << "Total Marks = " << total << " out of 300" << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    return 0;
}
