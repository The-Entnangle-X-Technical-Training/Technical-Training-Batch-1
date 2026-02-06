#include<iostream>
using namespace std;

int main(){

    int inputNumber = 0;

    cout<<"Enter a number to create a table : ";
    cin>> inputNumber;

    for (int i = 1;i<= 10; i++){
        cout<< i * inputNumber<<endl;
    }

    int i = 1;
    while(i<= 10){
        cout<< i * inputNumber<<endl;
        i++;
    }

    return 0;
}