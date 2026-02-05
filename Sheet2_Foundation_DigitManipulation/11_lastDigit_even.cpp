//Check if last digit is even
#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int lastDigit = 0;


    cout<< "Enter a number : ";
    cin>> inputNumber;

    if(!(inputNumber>= -9 && inputNumber<= 9)){
        lastDigit = inputNumber;
    }
    else{
       lastDigit = inputNumber % 10; 
    }

    if(lastDigit % 2 == 0){
        cout<<" The last digit is even.";
    }
    else{
        cout<<"Last digit is odd.";
    }

    return 0;

}