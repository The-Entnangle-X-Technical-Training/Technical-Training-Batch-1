#include <iostream>
using namespace std;

int main() {
    int num, sum=0;
    cout << "Enter number: ";
    cin >> num;

    int temp = num;
    sum += temp % 10;
    temp /= 10;
    sum += temp % 10;
    temp /= 10;
    sum += temp % 10;

    if (num % sum == 0)
        cout << "Divisible by 3";
    else
        cout << "Not Divisible by 3";

    return 0;
}
