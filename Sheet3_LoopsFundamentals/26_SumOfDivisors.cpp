//Print all factorials of a number
#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int sum = 0;

    cout<<"Enter a Number : ";
    cin>>inputNumber;

    for(int i = 1; i< inputNumber; i++){
        
        if(inputNumber % i == 0){
            sum = sum + i;
        }
    }
    cout<<"Sum of Divisors : "<<sum;

    return 0;
}