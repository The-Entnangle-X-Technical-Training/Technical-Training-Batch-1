// Write a program that takes a number and prints it in reverse using a loop.
#include <iostream>
using namespace std;

int main(){

    int firstValue=0;
    int reverseValue=0;
    int newValue=0;
    
    cout<<"enter a number";
    cin>>firstValue;

while (firstValue!=0){
    
    newValue= newValue*10+ (firstValue%10);
    firstValue/=10;
    

}
cout<<newValue;


}