// Write a program that takes a number and calculates the sum of its digits using a loop.
#include <iostream>
using namespace std;

int main(){

    int firstValue=0;
    int sumValue=0;

    cout<<"enter a number"<<endl;
    cin>>firstValue;

    // for(int i=1;i<=5;i++){
    while (firstValue!=0){
    
        sumValue+= firstValue%10;
        firstValue=firstValue/10;
    }
    cout<<sumValue;

}