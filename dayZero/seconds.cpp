#include <iostream>
using namespace std;

int main()
{
    int inputSeconds, hours, minutes, seconds;

    cout << "Enter total seconds: ";
    cin >> inputSeconds;

    hours = inputSeconds / 3600;
    minutes = (inputSeconds % 3600) / 60;
    seconds = inputSeconds % 60;

    cout << "Hours = " << hours << endl;
    cout << "Minutes = " << minutes << endl;
    cout << "Seconds = " << seconds << endl;

    return 0;
}

