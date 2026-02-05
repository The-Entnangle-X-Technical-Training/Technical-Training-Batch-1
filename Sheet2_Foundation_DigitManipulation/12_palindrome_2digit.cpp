//Palindrome Number
#include<iostream>
using namespace std;

int main(){

    int inputNumber = 0;
    int firstDigit = 0;
    int secondDigit = 0;

    cout<<"Enter a two digit number: ";
    cin>>inputNumber;

    secondDigit = inputNumber % 10;
    firstDigit = inputNumber / 10;

    if(firstDigit == secondDigit){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
    return 0;


}