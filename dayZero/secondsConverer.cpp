#include<iostream>
using namespace std;

int main()
{
    int seconds, minutes, hours;

    cout<<"Enter seconds : ";
    cin>>seconds;

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;

    cout<<"Hours : "<<hours<<endl;
    cout<<"Minutes : "<<minutes<<endl;
    cout<<"Seconds : "<<seconds;

    return 0;
}