//Palindrome Number Checker (2-digit)

#include<iostream>
using namespace std;

int main(){

    int number;//2-digit
    int firstDigit;
    int secondDigit;

    cout<<"number=";
    cin>>number;

    number/10;
    firstDigit=number/10;

    number%10;
    secondDigit=number%10;


    if(firstDigit==secondDigit){
    
        cout<<"Palindrome Number";
    }
  
    else{
        cout<<"Not Palindrome";
    }
}