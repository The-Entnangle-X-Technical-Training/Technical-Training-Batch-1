//Prime Number
#include<iostream>
using namespace std;

int main(){

    int inputNumber = 0;
    int isPrimeNumber = 0;

    cout<<"Enter a number to check for prime number : ";
    cin>>inputNumber;
    
    for(int i = 2; i< inputNumber; i++){
        if(inputNumber % i != 0){
            isPrimeNumber = 1;
        }
        else{
            isPrimeNumber = 0;
            break;
        }    
    }

    if(isPrimeNumber == 1|| inputNumber == 2){
        cout<<inputNumber<<" is a Prime Number";
    }
    else if(inputNumber == 1 || inputNumber == 0){
        cout<<"Neither Prime or composite number";
    }
    else{
        cout<<"Not a Prime Number";
    }
    return 0;
}
