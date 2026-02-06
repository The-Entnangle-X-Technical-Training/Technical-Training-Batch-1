#include <iostream>
using namespace std;


// Write a program that takes N and calculates the sum: 1² + 2² + 3² + ... + N².

int main(){

    int firstValue=0;
    int sumValue=0;

    cout<<"enter a number"<<endl;
    cin>>firstValue;
    for(int i=1;i<=firstValue;i++){

        sumValue+= i*i; 

    }
    cout<<sumValue;


}