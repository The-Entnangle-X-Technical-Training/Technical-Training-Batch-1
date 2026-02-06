#include <iostream>
using namespace std;


// Write a program that takes a number and counts how many digits it has using a loop.(5 digit number)

int main(){

    int firstValue=0;
    int count=0;

    cout<<"enter a number"<<endl;
    cin>>firstValue;

    // for(int i=1;i<=5;i++){
    while (firstValue!=0){
    count++;
       firstValue= firstValue/10;
       
    }
    cout<<count;

}