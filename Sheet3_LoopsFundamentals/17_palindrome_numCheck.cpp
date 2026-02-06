#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int temp = 0;
    int originalNumber = 0;
    int reverseNumber = 0;

    cout<<"Enter a number to check :";
    cin>>inputNumber;

    originalNumber = inputNumber;

    while(inputNumber > 0){

        temp = inputNumber % 10;
        inputNumber = inputNumber / 10;
        reverseNumber = reverseNumber*10 +temp;
    }
    if(reverseNumber == originalNumber){
        cout<<"Palindrome number!";
    }
    else{
        cout<<"Not a palindroeme number";
    }


      return 0;
    
}