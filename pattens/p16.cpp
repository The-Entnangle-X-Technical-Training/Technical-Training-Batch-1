// Vertical Line of Stars

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter number of stars: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        cout << "*" << endl;   // new line after each star
    }

    return 0;
}
