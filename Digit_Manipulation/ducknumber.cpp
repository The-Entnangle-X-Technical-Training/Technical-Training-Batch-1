//duck number checker(4-digit)

#include<iostream>
using namespace std;
int main()
{
        int number, digitOne, digitTwo, digitThree, digitFour;
        cout<<"Enter a four digit number:";
        cin>>number;

        digitOne=number/1000;
        digitTwo=(number%1000)/100;
        digitThree=(number%100)/10;
        digitFour=number%10;

        if(digitOne==0 && digitTwo !=0 && digitThree!=0 && digitFour!=0)
        {
            cout<<"The number is a Duck number"<<endl;
        }
        else
        {
            cout<<"The number is not a Duck number"<<endl;
        }
        return 0;
}