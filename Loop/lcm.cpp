//LCM

#include <iostream>
using namespace std;

    int main() 
    {
        int numOne, numTwo, gcd, lcm ;

        cout<<"Enter first number: ";
        cin >> numOne;

        cout<<"Enter second number: ";
        cin>> numTwo;

        for(int i=1; i<numOne && i<numTwo;i++)
        {
        if(numOne%i==0 && numTwo%i==0)
        gcd=i;
        
        }
        if(gcd==1)
        {
        lcm=(numOne*numTwo)/gcd;
        } 
        cout<<lcm;
        return 0;
}