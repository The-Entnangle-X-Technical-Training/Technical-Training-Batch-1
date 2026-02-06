#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int fact = 1;

    cout<<"Enter a number : ";
    cin>>inputNumber;

    for(int i = 1; i<= inputNumber; i++){
        fact = fact * i;
    }
    cout<<"Factorial : "<<fact<<endl;

    int i = 1;
    fact = 1;

    while(i<= inputNumber){
        fact = fact * i;
        i++;
    }
    cout<<"Factorial : "<<fact<<endl;
    
    return 0;


}