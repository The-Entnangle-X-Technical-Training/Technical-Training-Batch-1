//sum of digit(3-digit number)

#include<iostream>
using namespace std;
int main()
{
    int number,firstDigit,secondDigit,thirdDigit,product=1;

    cout<<"Entera number:";
    cin>>number;

    firstDigit=number/100;
    secondDigit=(number%100)/10;
    thirdDigit=number%10;
    product= firstDigit*secondDigit*thirdDigit;

    cout<<"The product of all digits is:"<<product<<endl;
    
    return 0;

}
