#include <iostream>
using namespace std;

int main()
{
    int totalSeconds;
    int hours, minutes, seconds;

    cout << "Enter total seconds: ";
    cin >> totalSeconds;

    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    cout << "Time = " << hours << " hours "
         << minutes << " minutes "
         << seconds << " seconds" << endl;

    return 0;
}
