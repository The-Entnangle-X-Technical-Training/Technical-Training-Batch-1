//Harshad/Niven Number Checker (3-digit)

#include<iostream>
using namespace std;

int main(){
    int number=0;
    int sum;
    int digit1;
    int digit2;
    int digit3;

    cout<<"number=";
    cin>>number;

    digit1= number/100;
    digit2 = number%100/10;
    digit3= number % 10; 


    sum=digit1+digit2+digit3;
    cout<<"sum="<<sum<<endl;

    if(number%sum==0){
        cout<<"Harshad Number";
    }
    else{
        cout<<"Not Harshad Number";
    }
}
    