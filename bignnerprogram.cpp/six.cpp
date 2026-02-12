#include <iostream>
using namespace std;

int main() {
    
    int marksOne = 0;
    int marksTwo = 0;
    int marksThree = 0;
    int totalMarks = 0;
    double percentage = 0.0;

    cout << "Enter marks of first subject: ";
    cin >> marksOne;
    cout << "Enter marks of second subject: ";
    cin >> marksTwo;
    cout << "Enter marks of third subject: ";
    cin >> marksThree;

    totalMarks = marksOne + marksTwo + marksThree;
    percentage = (totalMarks / 300.0) * 100;

    cout << "Total Marks: " << totalMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    return 0;
}