#include <iostream>
using namespace std ;

int main () {
    int number,digit, sum = 0, original;

    cout<<"enter a number : ";
    cin>>number;
    original = number;
    while (number!=0){
        digit = number % 10;
        sum = sum + (digit * digit * digit);
        number=number/10;
    }
    if (sum == original) {
        cout<< "number is armstrong ";
    } else {
        cout << "number is not armstrong ";
    }
    return 0;

}