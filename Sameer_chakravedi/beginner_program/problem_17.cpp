// Problem 17: Seconds to Hours:Minutes:Seconds Converter
// Write a program that converts total seconds into hours, minutes, and seconds format and displays the
// result.
#include <iostream>
using namespace std;

int main() {
    int NumberOfsecond = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    cout << "Enter number of seconds: ";
    cin >> NumberOfsecond;
    hours = NumberOfsecond / 3600;
    minutes = (NumberOfsecond % 3600) / 60;
    seconds = (NumberOfsecond % 3600)% 60;
    cout  << hours << ":" << minutes << ":" << seconds << endl;
    return 0;
}