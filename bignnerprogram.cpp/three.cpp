#include <iostream>
using namespace std;

int main(){

    int numberOne = 0;
    int numberTwo = 0;
    int substraction =0;
    int multiplication = 0;
    int division = 0;
    int modulus = 0;
    int addition = 0;

    cout << "Enter first number: ";
    cin >> numberOne;

    cout << "Enter second number:";
    cin >> numberTwo;

    substraction = numberOne - numberTwo;
    multiplication = numberOne * numberTwo;
    division = numberOne / numberTwo;
    modulus = numberOne % numberTwo;
    addition = numberOne + numberTwo;

    cout << "Substration: " << substraction << endl;
    cout << "Multiplication:" << multiplication << endl;
    cout << "Division: " << division << endl;
    cout << "Modulus: " << modulus << endl;
    cout << "Addition: " << addition << endl;

    return 0;



}