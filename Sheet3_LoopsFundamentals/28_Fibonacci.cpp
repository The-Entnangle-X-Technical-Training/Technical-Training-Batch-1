//Fibonacci Series
#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int num1 = 0;
    int num2 = 1;
    int num3 = 0;

    cout<<"Enter the number of terms for fibonacci series : ";
    cin>>inputNumber;

    cout<<0<<" "<<1<<" ";

    for(int i = 1; i <= inputNumber - 2; i++){
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        cout<<num3<<" ";
    }

    return 0;
}