// Reverse a 2-Digit Number

#include<iostream>
using namespace std;
int main(){

    int digit = 0 ;
    int lastdigit = 0 ;
    int firstdigit = 0 ;
    int reversedigit= 0 ;

    cout<<"enter the digit:";
    cin>>digit;

    lastdigit=digit%10;
    firstdigit=digit/10;
    

    reversedigit =(lastdigit*10)+firstdigit;
    
    cout<<"reversedigit"<<reversedigit;
    

    return 0 ;
}
