// Ascending or Descending order using three numbers

#include<iostream>
using namespace std;

int main(){
    int number1=0;
    int number2;
    int number3;

    cout<<"Enter a Number1:";
    cin>>number1;

    cout<<"Enter a Number2:";
    cin>>number2;

    cout<<"Enter a Number3:";
    cin>>number3;

    if(number1<number2 && number1<number3 || number2<number3 && number2>number1 ||
    number3>number1 && number3>number2){
        cout<<"Ascending order";
    }
    else if(number1>number2 && number1>number3 || number2>number3 && number2>number1 ||
    number3>number1 && number3>number2){
        cout<<"Descending order";
    }
    else{
        cout<<"neither ascending nor descending";
    }
}