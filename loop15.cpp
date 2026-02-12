#include <iostream>
using namespace std ;

int main () {
    int number,digit, reverse = 0;

    cout<<"enter a number : ";
    cin>>number;
    while (number!=0){
        digit = number % 10;
        reverse = reverse *10 + digit;
        number=number/10;
    }

    cout<<"reverse number = "<< reverse;
    return 0;

}