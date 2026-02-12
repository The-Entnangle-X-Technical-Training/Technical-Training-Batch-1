//Check if Last Digit is Even

#include<iostream>
using namespace std;

int main(){
    int number;
    int lastDigit;
    int even;
    int odd;

    cout<<"number=";
    cin>>number;

    number%10;
    lastDigit=number%10;
    
    if(lastDigit%2==0){
    
       cout<<"Even"<<endl;
    }
    else{
        lastDigit;
        cout<<"Odd";
    }

}