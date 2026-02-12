//Write a program that checks if a number is a strong number (sum of factorial of digits equals the number).

#include <iostream>
using namespace std;
int main() {
    int n, temp, sum, digit = 0;

    cout << "enter a number:";
    cin >> n;

    temp = n;

    while (temp!=0){
        digit = temp % 10;

        int fact = 1;
        for (int i = 1; i<=digit; i++) {
            fact = fact * i;
        }

        sum = sum + factorial;
        temp = temp / 10;
    }

    if(sum == n) {
        cout << "strong number";
    }
    else {
        cout << "not a strong number";
    }

    return 0;
}
