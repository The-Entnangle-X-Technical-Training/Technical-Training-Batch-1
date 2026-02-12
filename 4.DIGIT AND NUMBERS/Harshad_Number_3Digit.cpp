#include <iostream>
using namespace std;

int main() {
    int n, sum;
    cout << "Enter 3-digit number: ";
    cin >> n;

    sum = (n/100) + (n/10)%10 + (n%10);

    if(n % sum == 0)
        cout << "Harshad Number";
    else
        cout << "Not Harshad Number";

    return 0;
}
