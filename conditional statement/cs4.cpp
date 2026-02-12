// DIVISIBILITY CHECK

// variable = dividend , divisor
// O1 = input dividend , divisor
// O2 = if the dividend/divisor==0
// O3 = display divisible
// O4 = else 
// O5 = not divisible

#include <iostream>
using namespace std;
int main(){

    int dividend = 0;
    int divisor = 0;

    cout<<"enter a dividend:";
    cin>>dividend;

    cout<<"enter a divisor:";
    cin>>divisor;


    if(dividend / divisor == 0){
        cout<< "divisible:";
    }

    else{
        cout<<"not divisible:";
    }

    return 0;
}

