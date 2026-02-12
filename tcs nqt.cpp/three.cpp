#include<iostream>
using namespace std;

int main() {

int n, m;
cout << "Enter two integers: ";
cin >> n >> m;

cout << "Prime numbers between " << n << " and " << m << " are: ";

for (int i = n; i <= m; i++) {
    bool isPrime = true;
    
    if (i < 2) {
        isPrime = false;
    } else {
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
    }
    
    if (isPrime) {
        cout << i << " ";
    }
}

return 0;

}