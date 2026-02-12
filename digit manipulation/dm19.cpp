// Harshad / Niven number checker (3-digit)



#include<iostream>
using namespace std;
int main(){

    int number = 0 ;
    int sumofdigit = 0 ;
    int digit1 = 0;
    int digit2 =0;
    int digit3 = 0;

    cout<<"enter the number:";
    cin>>number;

    digit1=number/100;
    digit2=number/10%10;
    digit3=number%10;

    sumofdigit=digit1 + digit2 + digit3 ;
    cout<<"sumofdigit"<<sumofdigit<<endl;

    if (number % sumofdigit==0 ){
        cout<<"number is harshad:";
    }
    else{
        
        cout<<"number is not harshad:";
    }
    

    return 0 ;
}
