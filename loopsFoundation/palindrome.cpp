#include<iostream>
using namespace std;
int main()
{
    int number, digit, palindrome = 0, originalNumber;
    cout<<"Enter a number : ";
    cin>>number;
    originalNumber = number;

    for(number; number>0; number = number / 10)
    {
        digit = number % 10;
        palindrome = palindrome * 10 + digit;
    }
    cout<<"Palindrome of the number = "<<palindrome;

    if(palindrome == originalNumber)
    {
        cout<<endl<<"The given number is a palindrome.";
    }
    else
    {
        cout<<endl<<"The given number is not a palindrome.";
    }

    return 0;
}