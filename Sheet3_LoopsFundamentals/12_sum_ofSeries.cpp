#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int sum = 0;
    int temp = 1;

    cout<<"Enter a number : ";
    cin>>inputNumber;

    for(int i = 1; i <= inputNumber; i++){
        temp = i;
        temp = temp * temp;
        sum = sum + temp;
    }
    cout<<"Sum of "<<inputNumber<<" natural numbers : "<<sum<<endl;

    int i = 1;
    temp = 1;
    sum = 0;
    while(i<= inputNumber){
        temp = i;
        temp = temp* temp;
        sum = sum + temp;
        i++;
    }
    cout<<"Sum of "<<inputNumber<<" natural numbers : "<<sum<<endl;


    return 0;
}