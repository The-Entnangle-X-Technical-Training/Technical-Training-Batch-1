#include <iostream>
using namespace std;

int main()
    {
        int num;
        cout << "Enter a number: ";
        cin >> num;

        num = abs(num); // Handle negative numbers

        while (num >= 10)
        {
            num /= 10;
        }

        cout << "First digit: " << num << endl;
        return 0;
    }