// Strong Number Checker
// 145 = 1! + 4! + 5!

#include<iostream>
using namespace std;

int computeFact(int);
int computeStrongNumber(int);

int main(){

    int inputNumber = 0;
    int sumOfDigits = 0;

    cout<<"Enter a number : ";
    cin>>inputNumber;

    for(int i= 1; i<= inputNumber ; i++){
        int strongNum = computeStrongNumber(i);

        cout<<"Strong Number : "<<strongNum<<endl;
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

int computeStrongNumber(int number){
    int originalNumber = number;
    int sumOfDigits = 0;

    while(number > 0){
        int temp = number % 10;
        number = number /10;

        int fact = computeFact(temp);
        
        sumOfDigits = sumOfDigits + fact;
    }

    if(sumOfDigits == originalNumber){
        return originalNumber;
    }
    else{
        return 0;
    }
}

