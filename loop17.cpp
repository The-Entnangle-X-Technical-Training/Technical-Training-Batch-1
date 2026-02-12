#include <iostream>
using namespace std ;

int main () {
    int number,digit, reverse = 0, original;

    cout<<"enter a number : ";
    cin>>number;
    original = number;
    while (number!=0){
        digit = number % 10;
        reverse = reverse *10 + digit;
        number=number/10;
    }
    if (original==reverse) {
        cout<< "number is palindrome ";
    } else {
        cout << "number is not palindrome ";
    }
    return 0;

}