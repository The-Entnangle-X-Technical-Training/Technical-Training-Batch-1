#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number : ";
    cin>>number;

    for (int i = 2; i < number; i++)
    {
        if(number % i == 0)
        {
            cout<<"Number is not prime.";
            break;
        }
        else{
            cout<<"Number is prime.";
            break;
        }
    }
    return 0;
}