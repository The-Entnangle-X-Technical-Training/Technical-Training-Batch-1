//Seconds to Hours:Minutes:Seconds Converter

#include <iostream>
using namespace std;

int main() {
    int totalSeconds, hours, minutes, seconds, remainingSeconds;

    cout << "Enter total seconds: ";
    cin >> totalSeconds;

    hours = totalSeconds / 3600;
    remainingSeconds = totalSeconds % 3600;

    minutes = remainingSeconds / 60;
    seconds = remainingSeconds % 60;

    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;

    return 0;
}