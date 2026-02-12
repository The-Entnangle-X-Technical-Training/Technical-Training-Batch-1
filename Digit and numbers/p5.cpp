//Sum of Digits (3-digit number)

#include<iostream>
using namespace std;

int main(){

    int number;
    int sum;
    int digit1;
    int digit2;
    int digit3;
    
    cout<<"number=";
    cin>>number;

    digit1= number/100;
    digit2 = number /10%10;
    digit3= number % 10; 

    sum=digit1+ digit2+digit3;
    cout<<"sum:"<<sum;
    
}
     //digit1= number/100;
    //digit2 = (number % 100)/10;
    //digit3= (number %10); 

    //number=digit1+ digit2+digit3;
    //cout<<"sum:"<<number;
    