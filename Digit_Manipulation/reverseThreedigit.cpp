//reverse three digit number

#include<iostream>
using namespace std;
int main()
    {
        int number, firstDigit, secondDigit, thirdDigit, reverse=0;
        
        cout<<"Enter a number:";
        cin>>number;

        firstDigit=number%10;
        secondDigit=(number/10)%10;
        thirdDigit=(number/100)%10;
        reverse= firstDigit*100+secondDigit*10+thirdDigit;

        cout<<"The reverse of Three digit number is:"<<reverse<<endl;
        
        return 0;

}