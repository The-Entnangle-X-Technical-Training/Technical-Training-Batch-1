#include<iostream>
using namespace std;

int main()
{
    int number, digitOne, digitTwo, digitThree, digitFour, largest;
    cout << "Enter a four-digit number: ";
    cin >> number;
    
    digitOne = number / 1000;
    digitTwo = (number / 100) % 10;
    digitThree = (number / 10) % 10;
    digitFour = number % 10;

    if(digitOne > digitTwo && digitOne > digitThree && digitOne > digitFour)
    {
        cout<<"The largest digit is : "<<digitOne<<endl;
    }
    else if(digitTwo > digitOne && digitTwo > digitThree && digitTwo > digitFour)
    {
        cout<<"The largest digit is : "<<digitTwo<<endl;
    }
    else if(digitThree > digitOne && digitThree > digitTwo && digitThree > digitFour)
    {
        cout<<"The largest digit is : "<<digitThree<<endl;
    }
    else
    {
        cout<<"The largest digit is : "<<digitFour<<endl;
    }

    return 0;
}