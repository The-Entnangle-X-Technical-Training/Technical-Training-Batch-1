//Write a program that prints all multiples of 5 from 1 to 50.

#include<iostream>
using namespace std;

int main() {

    for(int i = 1; i<=50; i++) {
        if (i % 5 == 0) {
            cout << i << endl;
        
        }
    }
}