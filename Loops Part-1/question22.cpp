// Write a program that takes a number and checks whether it is prime or not using a loop.

#include <iostream>
using namespace std;

int main(){

    int firstValue=0;
    int primeValue=0;
    int count=0;
    int isPrime =1;

    cout<<"enter a number";
    cin>>firstValue;

    for(int i=2;i<=firstValue-1;i++){

        if(firstValue%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime==1){
        cout<<"this is prime number: "<<firstValue<<endl;
    }
    else{
        cout<<"not a prime number";
    }
}