#include <iostream>
using namespace std ;

int main () {
    int number,digit, product = 1;

    cout<<"enter a number : ";
    cin>>number;
    while (number!=0){
        digit = number % 10;
        product = product * digit;
        number=number/10;
    }

    cout<<"product of digit = "<<product;
    return 0;

}