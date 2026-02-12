#include <iostream>
using namespace std;

int main() {
     
    int numberOne = 0;
    int numberTwo = 0;
    int temp = 0;

    cout << "Enter first number: ";
    cin >> numberOne;
    cout << "Enter second number: ";
    cin >> numberTwo;

    temp = numberOne;
    numberOne = numberTwo;
    numberTwo = temp;

    cout << "After swapping, first number is: " << numberOne << endl;
    cout << "After swapping, second number is: " << numberTwo << endl;
    return 0;
    
}