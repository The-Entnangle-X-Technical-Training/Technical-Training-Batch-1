//find largest digit in a number

#include<iostream>
using namespace std;
int main()
{
    int number,digit, largest=0;
    cout<<"Enter a number:";
    cin>>number;

    while(number>0)
    {
        digit=number%10;

        if(digit>largest){
            largest=digit;
        }
        number/=10;

    }
        cout<<"Largest digit is:"<<largest<<endl;

        return 0;
}
