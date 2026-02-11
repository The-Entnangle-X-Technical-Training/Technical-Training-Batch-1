//extract last digit

#include<iostream>
using namespace std;
int main()
{
        int number, digit;
        cout<<"Enter a number:";
        cin>>number;
    digit=number%10;
    cout<<"The last digit is :"<<digit<<endl;
    return 0;

}