//Write a program that takes N and prints N stars in a single line

#include <iostream>
using namespace std;

int main() {
    int numberOfStars;

    cout << "Enter the number of stars (N): ";
    cin >> numberOfStars;

    for (int i = 0; i < numberOfStars; i++) { 
        cout << "* "; 
    }
    cout << endl;

    return 0;
}