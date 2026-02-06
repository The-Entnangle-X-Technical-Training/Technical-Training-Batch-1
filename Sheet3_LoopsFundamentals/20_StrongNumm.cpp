//Strong number 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145
#include<iostream>
using namespace std;

int main(){

    int inputNumber = 0;
    int temp = 0;
    int fact = 0;
    int sumOfFact = 0;
    int originalNumber = 0;

    cout<<"Enter a number to check for Strong number : ";
    cin>>inputNumber;

    originalNumber = inputNumber;

    while(inputNumber > 0){
        temp = inputNumber % 10;
        inputNumber = inputNumber / 10;

        fact = temp;

        for(int i = 1; i < temp; i++){
            cout<<i<<endl;
            fact = i * fact;
        }
        sumOfFact = sumOfFact + fact;
    }

    if(sumOfFact == originalNumber){
        cout<<"Strong Number!";
    }
    else{
        cout<<"Not a Strong number";
    }
    return 0;
}