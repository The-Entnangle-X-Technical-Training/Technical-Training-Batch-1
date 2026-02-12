//Write a program that prints squares of numbers from 1 to 10 (1², 2², 3²...).

#include <iostream>
using namespace std;

int main() {
    for(int i=1; i<=10; i++) {
       cout << "sqaure of" << i << "=" << i * i << endl;
    }

    return 0 ;
}