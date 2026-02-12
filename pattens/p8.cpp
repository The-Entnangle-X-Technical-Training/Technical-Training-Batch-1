// Inverted right triangle


#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"enter n:";
    cin>>n;

    
    for(int i = n; i >= 1; i--) {      // rows
        for(int j = 1; j <= i; j++) {  // columns
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}