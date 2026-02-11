//reverse two digit number

#include<iostream>
using namespace std;
int main()
{
    int number,firstDigit,secondDigit,reverse=0;

    cout<<"Enter a number:";
    cin>>number;

    firstDigit=number%10;
    secondDigit=(number/10)%10;
    reverse= firstDigit*10+secondDigit;

    cout<<"The reverse of Two number is:"<<reverse<<endl;
    
    return 0;

}
