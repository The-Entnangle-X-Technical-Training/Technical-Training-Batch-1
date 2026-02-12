#include <iostream>
using namespace std;
int main() {
    int num,count=0,number = 0;
    cout << "Enter number: ";
    cin >> num;
     while(count < num) {
        cout << number << " ";
        number = number + 2;
        count++;
    }
    return 0;
}