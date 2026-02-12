//18: Factorial of a Number

#include <iostream>
using namespace std;

int main() {
    int N;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> N;

    //if (N < 0) {
        //cout << "Factorial not defined for negative numbers";
        //return 0;
    //}

    int i = 1;
    while (i <= N) {
        factorial = factorial * i;
        i++;
    }
    cout << "Factorial= " << factorial;
    return 0;
}
