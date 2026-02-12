#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter 3-digit number: ";
    cin >> n;

    int a=n/100, b=(n/10)%10, c=n%10;

    if(a<b && b<c)
        cout << "Ascending Order";
    else
        cout << "Not Ascending";

    return 0;
}
