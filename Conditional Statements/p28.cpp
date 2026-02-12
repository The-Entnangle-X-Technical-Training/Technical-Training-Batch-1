//Check if number is Divisible  by both 3, 5

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"number=";
    cin>>number;

    if(number%3==0 && number%5==0 ){
        cout<<"divisible by both ";
    }
    else if(number%3==0){
        cout<<"divisible by 3";
    }
    else if(number%5==0){
        cout<<"divisible by 5";
    }
    else{
        cout<<"not divisible by 3 or 5";
    }
}