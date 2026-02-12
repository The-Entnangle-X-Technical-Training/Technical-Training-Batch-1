#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter 4-digit number: ";
    cin >> n;

    int a=n/1000, b=(n/100)%10, c=(n/10)%10, d=n%10;
    int min = a;
    if(b<min) min=b;
    if(c<min) min=c;
    if(d<min) min=d;

    cout << "Smallest digit: " << min;
    return 0;
}
