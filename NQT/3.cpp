#include<iostream>
using namespace std;

int main(){
    int num1 = 0;
    int num2 = 0;
    int start =0;
    int stop = 0;
    int isPrime = 0;
    int digit = 0;
    int sumOfDigit = 0;

    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;

    if(num1>num2){
        start = num2;
        stop = num1;
    }
    else{
        start = num1;
        stop = num2;
    }

    if(num1 ==2){
        isPrime =1;
    }
    isPrime = 0;

    for(int i = start; i<= stop; i++){
        for(int j = 2; j<i; j++){
            if(i % j != 0){
                isPrime = 1;
            }
            else{
                isPrime = 0;
                break;
            }
        }

        if( isPrime == 1){
            cout<<i<<endl;
            }
            }
        
    
    
    return 0;
}

