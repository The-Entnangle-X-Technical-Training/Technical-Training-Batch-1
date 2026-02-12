//Write a program that takes a number and counts how many digits it has using a loop.

#include <iostream>
using namespace std;
int main() {
    int n, count = 0;

    cout << "enter a number:";
    cin >> n;

    while (n!=0) {
        n/=10;
        count ++;
    }

    cout << "it has " << count << "digit" << endl;

    return 0;

}