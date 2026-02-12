// Swap First and Last Digit of 3-Digit Number


#include<iostream>
using namespace std;
int main(){

    int digit = 0 ;
    int lastdigit = 0 ;
    int firstdigit = 0 ;
    int swapdigit= 0 ;

    cout<<"enter the digit:";
    cin>>digit;

    lastdigit=digit%10;
    firstdigit=digit/100;
    swapdigit=digit/10%10;
    

    swapdigit =(lastdigit*100)+(swapdigit*10)+(firstdigit);
    
    cout<<"swapdigit"<<swapdigit;
    

    return 0 ;
}
