//Percentage Calculator

#include <iostream>
using namespace std;

int main() {
    int marksOne = 0;
    int marksTwo = 0;
    int marksThree = 0;
    int totalMarks = 0;
    double percentage = 0.0;

    cout << " enter marks of first subject";
    cin >> marksOne;
    
    cout << " enter marks of second subject";
    cin >> marksTwo;

    cout << " enter marks of Third subject";
    cin >> marksThree;

    totalMarks = marksOne + marksTwo + marksThree;
    percentage = (totalMarks / 300.0) * 100;

    cout << "total Marks" << totalMarks << endl;
    cout << "Percentage" << percentage << " " <<endl;

    return 0;

}