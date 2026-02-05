//Palindrome number 3 digits
#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int firstDigit = 0;
    int middleDigit = 0;
    int lastDigit = 0;

    cout<< "Enter a three digit number : ";
    cin>> inputNumber;

    lastDigit = inputNumber% 10;
    firstDigit = inputNumber/ 100;

    if(firstDigit == lastDigit){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }

    return 0;


}