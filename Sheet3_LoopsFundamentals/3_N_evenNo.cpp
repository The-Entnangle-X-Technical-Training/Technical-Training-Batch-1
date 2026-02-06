#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;

    cout<<"Enter a number : ";
    cin>>inputNumber;

    for(int i = 2; i<= inputNumber; i= i+2){
        cout<<i<<endl;

    }
    int i = 2;

    while(i<= inputNumber){
        cout<<i<<endl;
        i ++;
    }
    
    return 0;


}