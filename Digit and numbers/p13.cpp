//Palindrome Number Checker (3-digit)
#include<iostream>
using namespace std;

int main(){

    int number;//3-digit
    int firstDigit;
    int middleDigit;
    int lastDigit;

    cout<<"number=";
    cin>>number;

    number/100;
    firstDigit=number/100;


    number%10;
    lastDigit=number%10;


    if(firstDigit==lastDigit){
    
        cout<<"Palindrome Number";
    }
    else{
        cout<<"Not Palindrome";
    }
}