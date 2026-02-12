//Write a program that converts total seconds into hours, minutes, and seconds format and displays the
//result

#include <iostream>
using namespace std;

int main() {
    int totalSeconds, hours, minutes, seconds;

    cout << "Enter total seconds: ";
    cin >> totalSeconds;

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    cout << "Time = " << hours << " hours "
         << minutes << " minutes "
         << seconds << " seconds";

    return 0;
}
