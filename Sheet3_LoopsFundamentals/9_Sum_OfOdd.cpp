#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int sum = 0;

    cout<<"Enter a number : ";
    cin>>inputNumber;

    for(int i = 1; i<= inputNumber; i= i+2){
        sum = sum + i;
    }
    cout<<"Sum : "<<sum<<endl;

    int i = 1;
    sum = 0;

    while(i<= inputNumber){
        sum = sum + i;
        i = i+2;
    }
    cout<<"Sum : "<<sum<<endl;
    
    return 0;


}