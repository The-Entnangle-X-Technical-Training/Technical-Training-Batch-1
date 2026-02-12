// Extract middle digit of 3 digit number

#include<iostream>
using namespace std;
int main(){

    int number = 0 ;
    int middledigit = 0;


    cout<<"enter the number:";
    cin>>number;

    number=number/10;
    number=number%10;

    middledigit = number%10;
    cout<<"middledigit:"<<middledigit;

    return 0 ;
}

    
