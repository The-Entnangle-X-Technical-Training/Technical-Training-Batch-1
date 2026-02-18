//Problem 9: Check Divisibility by 10

#include<iostream>
using namespace std;

int main(){

    int number=0;
    cout<<"number=";
    cin>>number;

    if(number%10==0){
        cout<<"Divisible";
    }
    else{
        cout<<"Not Divisible";
    }
return 0;
}