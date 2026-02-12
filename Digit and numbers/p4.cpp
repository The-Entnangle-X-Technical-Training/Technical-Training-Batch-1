//Extract Middle Digit of 3-Digit Number

#include<iostream>
using namespace std;

int main(){

    int number=0;
    int middleDigit;

    cout<<"number=";
    cin>>number;

    number/10;//6
    number%10;//5
    
    number=number/10;
    number=number%10;
    middleDigit=number%10;
    cout<<"middle digit:"<<middleDigit;


}
