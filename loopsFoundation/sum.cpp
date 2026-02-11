#include<iostream>
using namespace std;

int main()
{
    int number, digit, sum = 0;
    cout<<"Enter the number : ";
    cin>>number;

    for(number; number>0; number = number / 10)
    {
        digit = number % 10;
        sum = sum + digit;
    }
    cout<<"Sum of digits = "<<sum;

    // while(number>0){
    //     digit = number % 10;
    //     sum = sum + digit;
    //     number = number / 10;
    // }
    // cout<<sum;

    return 0;

}