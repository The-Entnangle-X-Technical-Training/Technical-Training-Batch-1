//Print all factorials of a number
#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;

    cout<<"Enter a Number to calculate Factorials : ";
    cin>>inputNumber;

    for(int i = 1; i< inputNumber; i++){
        
        if(inputNumber % i == 0){
            cout<<i<<endl;
        }
    }

    return 0;
}