#include<iostream>
using namespace std;
int main()
{
    int number, digit, count = 0, exponent, armstrong = 0, originalNumber, power =1;
    cout<<"Enter a number : ";
    cin>>number;
    originalNumber = number;

    for(number; number > 0; number = number / 10)
    {
        digit = number % 10;
        count = count + 1;

        for (exponent = 1; exponent <= count; exponent++)
        {
            power = power * digit;
        }
        armstrong = armstrong + power;
    }

    cout<<count<<endl;
    cout<<"Calculating the Armstrong number = "<<armstrong<<endl;
    if(armstrong == originalNumber)
    {
        cout<<originalNumber<<" is an Armstrong number.";
    }
    else
    {
        cout<<originalNumber<<" is not an Armstrong number.";
    }
}