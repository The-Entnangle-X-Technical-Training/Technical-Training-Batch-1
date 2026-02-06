#include<iostream>
using namespace std;

int main(){

    int inputNumber = 0;

    cout<<"Enter a number : ";
    cin>> inputNumber;

    for(int i = inputNumber; i >= 1; i--){
        cout<<i<<endl;
    }

    while(inputNumber >= 1){
        cout<<inputNumber<<endl;
        inputNumber--;
    }

    return 0;
}