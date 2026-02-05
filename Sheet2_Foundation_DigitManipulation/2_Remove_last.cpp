// Remove last digit
#include <iostream>
using namespace std;

int main() {
    int inputNumber = 0;
    int newNumber = 0;

    cout<<"Enter the number: ";
    cin>>inputNumber;

    newNumber = inputNumber/10;
    
    cout<<"The New Number is: "<<newNumber;


    return 0;
}
