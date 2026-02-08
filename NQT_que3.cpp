// Write a program that accepts two integers, n and m , and prints all prime numbers
//  between n and m (inclusive) such that the sum of their digits is also a prime number.

#include<iostream>
using namespace std;

int sumOfDigits(int number){
    if(number < 10){
        return number;
    }
    else{
        int temp = number;
        int sum = 0;
        while(temp % 10 != 0 ){
            int digit = temp % 10;
            temp = temp / 10;
            sum = sum + digit;
        }
        return sum;
    }
}

int main(){

    int start = 0;
    int stop = 0;
    int sumPrime = 0;
    bool isPrime = true;

    cout<<"Enter the first number : ";
    cin>>start;
    cout<<"Enter the second number : ";
    cin>>stop;

    if(start > stop){
        int temp = stop;
        stop = start;
        start = temp;
    }

    for(int i = start; i<= stop; i++){
        int num = i;
        for(int j=2; j<num; j++){
            if(num % j == 0){
                isPrime = false;
                break;
            }
            else{
                isPrime = true;
            }
        }
      if(isPrime == true){

        sumPrime = sumOfDigits(num);

        for(int k=2; k<sumPrime; k++){
            if(sumPrime % k == 0){
                isPrime = false;
                break;
            }
            else{
                isPrime = true;
            }
        }
        if(isPrime == true){
        cout<<"Prime Number : "<<num<<endl;

        }
    }
    }

    return 0;
}

