#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter 4-digit number: ";
    cin >> n;

    int temp = n % 1000; // ignore first digit
    if(temp%10==0 || (temp/10)%10==0 || (temp/100)%10==0)
        cout << "Duck Number";
    else
        cout << "Not Duck Number";

    return 0;
}
