//Write a program that takes a number and counts how many digits it has.

#include <iostream>
using namespace std;

int main() {
    int n, counts = 0;

    cout<<"enter a number";
    cin >> n;

    if (n==0){
        count = 1;
    }
    else {
        while( n!= 0) {
            n = n / 10;
            count ++;
        }
    }

    cout << "number of digit = " << count;

    return 0;

}

    