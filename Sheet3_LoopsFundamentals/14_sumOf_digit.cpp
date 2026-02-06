#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int sum = 0;
    int temp = 0;

    cout<<"enter a number : ";
    cin>>inputNumber;

    while(inputNumber > 0){
        temp = inputNumber % 10;
        inputNumber = inputNumber / 10;
        sum = sum + temp;
    }
    cout<<"Sum :"<<sum;

    return 0;
}