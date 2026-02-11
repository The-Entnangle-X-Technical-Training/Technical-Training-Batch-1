#include<iostream>
using namespace std;

int main()
{
    char character;
    cout<<"Enter the character : ";
    cin>>character;

    if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
        {
            cout<<"The character is an alphabet.";
        }
    else if(character >= '0' && character <= '9')
        {
            cout<<"The character is a number.";
        }
    else
        {
            cout<<"The character is a special character.";
        }
}