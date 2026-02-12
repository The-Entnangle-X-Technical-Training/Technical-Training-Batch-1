// reverse three digit number


#include<iostream>
using namespace std;
int main(){

    int digit = 0 ;
    int lastdigit = 0 ;
    int firstdigit = 0 ;
    int middledigit = 0 ;
    int reversedigit= 0 ;

    cout<<"enter the digit:";
    cin>>digit;

    lastdigit=digit%10;
    firstdigit=digit/100;
    middledigit=digit/10%10;
    

    reversedigit =(lastdigit*100)+(middledigit*10)+(firstdigit);
    
    cout<<"reversedigit"<<reversedigit;
    

    return 0 ;
}
