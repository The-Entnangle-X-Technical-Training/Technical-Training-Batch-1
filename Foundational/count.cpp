//coutn digit 

#include <iostream>
using namespace std;

int countDigitOccurrences(int number, int digit) 
{
    int count = 0;
    if (digit < 0 || digit > 9) return 0;
    if (number == 0 && digit == 0) return 1;
    number = abs(number);
    while (number > 0) {
        if (number % 10 == digit) count++;
        number /= 10;
    }
    return count;
}


