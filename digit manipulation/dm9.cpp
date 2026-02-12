// average of first and last digit


#include<iostream>
using namespace std;
int main(){

    int digit = 0 ;
    int lastdigit = 0 ;
    int firstdigit = 0 ;
    int averagedigit= 0 ;

    cout<<"enter the digit:";
    cin>>digit;

    lastdigit=digit%10;
    firstdigit=digit/1000;
    
    
    averagedigit = (firstdigit + lastdigit) / 2 ;
    cout<<"average"<<averagedigit;
    

    return 0 ;
}
