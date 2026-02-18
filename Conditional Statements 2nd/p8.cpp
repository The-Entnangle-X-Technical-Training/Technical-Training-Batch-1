//Problem 8: Check Divisibility by 5

#include<iostream>
using namespace std;

int main(){

    int number=0;
    cout<<"number=";
    cin>>number;

    if(number%5==0){
        cout<<"Divisible";
    }
    else{
        cout<<"Not Divisible";
    }
return 0;
}