//Extract middle number

#include<iostream>
using namespace std;
int main(){

    int numberOne = 456, lastDigit = 0, middleDigit = 0;
    
    lastDigit = numberOne % 10;
    middleDigit = 456 / 10;
    middleDigit = 45 % 10;

    cout<<lastDigit<<endl;
    cout<<middleDigit<<endl;

    return 0;



}