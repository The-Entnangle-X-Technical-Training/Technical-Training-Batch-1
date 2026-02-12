//Write a program that takes a 4-digit number as input and counts how many of its digits are even, then
//displays the count.

#include <iostream>
using namespace std;
int main() {
    int num, digit, evenCount = 0;

    cout << "enter a 4 digit number";
    cin >> num;

    for (int i = 0, i < 4; i++){
        digit = num % 10;
        if (digit % 2 == 0){
            evenCount++;
        }
        num = num / 10;
    }

    cout << " number of even digtis:" <<evenCount << endl;

    return 0;

}