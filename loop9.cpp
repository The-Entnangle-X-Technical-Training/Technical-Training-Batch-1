#include <iostream>
using namespace std;

int main() {
    int number, count = 0, num = 1,sum =0;

    cout << "Enter Number: ";
    cin >> number;

    while(count < number) {
        sum = sum + number;
        num = num + 2;
        count++;
    }
    cout << sum << " ";

    return 0;
}
