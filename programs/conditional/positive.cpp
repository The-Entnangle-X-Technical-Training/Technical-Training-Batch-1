//Write a program that takes a number as input and displays whether it is positive, negative, or zero

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int positive = 0;
    int negative = 0;
    int zero = 0;

    cout<<"enter the number:";
    cin >> number;

    if(number > 0 ){
        cout << "this is positive number" << endl;
    } else if (number < 0) {
        cout << " this is negative number" << endl;
    } else {
        cout << " this is a zero" << endl;
    }

    return 0;
    

}