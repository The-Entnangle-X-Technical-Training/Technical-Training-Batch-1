#include <iostream>
using namespace std;
int main() {
    int number,factorial = 1;
    cout << "Enter number: ";
    cin >> number;
    for(int i = 1; i <= number; i++) {

        factorial = factorial * i;
    }
    cout  << "factorial = "<< factorial;
    return 0;
}