#include <iostream>
using namespace std;

int main()
{
    int numberOne, numberTwo, temp;

    cout<<"Enter first number : ";
    cin>>numberOne;
    
    cout<<"Enter second number : ";
    cin>>numberTwo;

    cout<<"Before swapping : First Number = "<<numberOne<<", Number Two = "<<numberTwo<<endl;

    temp = numberOne;
    numberOne = numberTwo;
    numberTwo = temp;

    cout<<"After swapping : First Number = "<<numberOne<<", Number Two = "<<numberTwo;

}