#include <iostream>
using namespace std;
int main() {
    int number,table;
    cout << "Enter number: ";
    cin >> number;
    for(int i = 1; i <= 10; i++) {
        table = i*number;
        cout << i << " "<<"*"<< " "<<number<<" = "<< " "<<table<<endl;
    }
    return 0;
}