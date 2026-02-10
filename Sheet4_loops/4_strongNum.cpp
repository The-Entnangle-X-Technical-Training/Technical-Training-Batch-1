// Strong Number Checker
// 145 = 1! + 4! + 5!

#include<iostream>
using namespace std;

int computeFact(int);

int main(){

    int inputNumber = 0;
    int sumOfDigits = 0;

    cout<<"Enter a number : ";
    cin>>inputNumber;

    int originalNumber = inputNumber;

    while(inputNumber > 0){
        int temp = inputNumber % 10;
        inputNumber = inputNumber /10;

        int fact = computeFact(temp);
        
        sumOfDigits = sumOfDigits + fact;
    }

    if(sumOfDigits == originalNumber){
        cout<<"It's a Strong Number";
    }
    else{
        cout<<"It's not a Strong Number";
    }

    return 0;
}

int computeFact(int num){
    int fact = 1;

    for(int i = 1; i<= num; i++){
        fact = fact * i;
    }
    return fact;
}

