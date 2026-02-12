//prime number checker

#include<iostream>
using namespace std;
int main()
{
    int number, numOne=0 , numtwo=1, next;

        cout<<"Enter the number:";
        cin>>number;

    cout<<"Fibonacci series: ";

    for (int i =1;i <=number; i++)
    {
        cout<<numOne<<" ";
        next = numOne+numtwo;
        numOne=numtwo;
        numtwo=next;
    }
    cout<<endl;
    return 0;
}