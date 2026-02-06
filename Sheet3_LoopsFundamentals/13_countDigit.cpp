#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int counter = 1;

    cout<<"Enter a number : ";
    cin>>inputNumber;

    while(inputNumber / 10 != 0){
        inputNumber = inputNumber /10;
        counter++;
    }

    cout<<counter;

    return  0;

}