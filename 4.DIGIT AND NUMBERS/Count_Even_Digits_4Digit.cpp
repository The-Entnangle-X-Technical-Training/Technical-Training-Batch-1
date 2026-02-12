#include <iostream>
using namespace std;

int main() {
    int n, count=0;
    cout << "Enter 4-digit number: ";
    cin >> n;

    for(int i=0;i<4;i++){
        if((n%10)%2==0) count++;
        n/=10;
    }

    cout << "Even digits count: " << count;
    return 0;
}
