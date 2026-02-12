//Check Divisibility by 3 Using Digit Sum

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
    cout<<"sum:"<<sum<<endl;

    if(number%3==0){
        cout<<"divisible";
    }
    else{
        cout<<"not divisible";
    }
    
}