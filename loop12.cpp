#include <iostream>
using namespace std;
int main() {
    int number;
    long long sum = 0;
    cout << "Enter number: ";
    cin >> number;
    for(int i = 1; i <= number; i++) {
        sum = sum + (i * i);
    }
    cout << "sum of series = "<< sum ;
    return 0;
}