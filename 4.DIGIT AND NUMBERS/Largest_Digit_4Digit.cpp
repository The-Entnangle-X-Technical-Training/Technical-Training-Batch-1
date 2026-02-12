#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter 4-digit number: ";
    cin >> n;

    int a=n/1000, b=(n/100)%10, c=(n/10)%10, d=n%10;
    int max = a;
    if(b>max) max=b;
    if(c>max) max=c;
    if(d>max) max=d;

    cout << "Largest digit: " << max;
    return 0;
}
