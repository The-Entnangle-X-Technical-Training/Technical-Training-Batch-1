#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;

    cout<<"Enter a number : ";
    cin>>inputNumber;

    for(int i = 1; i<= inputNumber; i= i+2){
        cout<<i<<endl;

    }
    int i = 1;

    while(i<= inputNumber){
        cout<<i<<endl;
        i = i+2;
    }
    
    return 0;


}