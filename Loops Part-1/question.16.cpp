// Write a program that checks if a number is a palindrome (reads same forwards and backwards).

#include <iostream>
using namespace std;

int main(){

    int firstValue=0;
    int reverseValue=0;
    int newValue=0;
    int mainValue=0;
    cout<<"enter a number";
    cin>>firstValue;
    mainValue=firstValue;

while (firstValue!=0){
    
    newValue= newValue*10+ (firstValue%10);
    firstValue/=10;
    

}

 if (mainValue==newValue){
    cout<< "this number is palindrome";
}

}