#include<iostream>
using namespace std;

int main(){

    int inputNumber = 0;
    int product = 1;
    int temp = 0;

    cout<<"Enter a number : ";
    cin>>inputNumber;

    while(inputNumber > 0){
        temp = inputNumber % 10;
        inputNumber = inputNumber / 10;

        product = product * temp;
    }
    cout<<"Product of digits : "<<product;

    return 0;
}

