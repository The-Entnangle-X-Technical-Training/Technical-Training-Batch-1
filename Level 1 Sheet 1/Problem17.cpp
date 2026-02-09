#include <iostream>
using namespace std;

int main() {
    int totalSeconds;
    int hours, minutes, seconds;

    cout << "Enter total seconds: ";
    cin >> totalSeconds;

    hours = totalSeconds / 3600;

    seconds = totalSeconds % 3600;

    minutes = seconds / 60;

    seconds = seconds % 60;

    cout << "Hours = " << hours << endl;
    cout << "Minutes = " << minutes << endl;
    cout << "Seconds = " << seconds << endl;

    return 0;
}
