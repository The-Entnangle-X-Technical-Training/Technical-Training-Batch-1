#include <iostream>
using namespace std;

int main()
{
    int numberOne, numberTwo, numberThree, temp;

    cout<<"Enter first number : ";
    cin>>numberOne;
    
    cout<<"Enter second number : ";
    cin>>numberTwo;

    cout<<"Enter third number : ";
    cin>>numberThree;

    cout<<"Before swapping : First Number = "<<numberOne<<", Number Two = "<<numberTwo<<", Number Three = "<<numberThree<<endl;

    temp = numberThree;
    numberThree = numberTwo;
    numberTwo = numberOne;
    numberOne = temp;

    cout<<"After swapping : First Number = "<<numberOne<<", Number Two = "<<numberTwo<<", Number Three = "<<numberThree;

    return 0;

}