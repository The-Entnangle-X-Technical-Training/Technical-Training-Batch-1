//check if number is multiple of 3 :
#include<iostream>
using namespace std;

int main(){
    int Number = 0;
    cout<<"Enter Number :";
    cin>>Number;
    if(Number % 3 == 0 ){
        cout<<"Multiple of 3";
    }
    else{
        cout<<"Not Multiple of 3";
    }
    return 0;
}