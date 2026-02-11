//seconds converter

#include <iostream>
using namespace std;

    void convertSeconds(int totalSeconds)
    {
        int hours = totalSeconds / 3600;
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;

        cout << totalSeconds << " seconds = "
                << hours << " hours, "
                << minutes << " minutes, "
                << seconds << " seconds." << std::endl;
    }

    int main()
     {
        int totalSeconds;
        cout << "Enter total seconds: ";
        cin >> totalSeconds;

        if (totalSeconds < 0)
        {
            std::cout << "Please enter a non-negative value." << std::endl;
            return 1;
        }

        convertSeconds(totalSeconds);

        return 0;
}