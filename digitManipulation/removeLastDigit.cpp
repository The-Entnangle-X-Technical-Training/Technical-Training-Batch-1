#include<iostream>
using namespace std;
int main()
{
    int number, newNumber;
    cout<<"Enter a number : ";
    cin>>number;

    newNumber = number / 10;

    cout<<"Number before removing the last digit = "<<number<<endl;
    cout<<"Number after removing the last digit = "<<newNumber;
}