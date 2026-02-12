//Write a program that takes two numbers N and M. Count how many multiples of M exist from 1 to N.
//Example: If N=20 and M=3, multiples are 3, 6, 9, 12, 15, 18, so count = 6

#include<iostream>
using namespace std;

int main() {
    int N, M, count = 0;

    cout <<" enter N and M:";
    cin >> N >> M;

    for(int i = 1; i <= N; ++i) {
        if (i % M == 0) {
            count++;
        }

    }
    cout << "Count of multiples of " << M << " from 1 to " << N << " is: " << count << endl;

}