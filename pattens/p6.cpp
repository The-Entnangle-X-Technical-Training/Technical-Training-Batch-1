//  Print N Stars in One Line

#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"enter n:";
    cin>>n;
    
    for(int i = 1; i <= n; i++) {     // rows
        cout << "* ";
        }
        cout << endl;
    
    return 0;
}