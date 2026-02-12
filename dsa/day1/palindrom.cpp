#include<iostream>
using namespace std;

int main(){
   // int number=0,lastDigit,firstDigit,reverse;

    //cout<<"entre the 2digit number";
    //cin>>number;

    //lastDigit=number%10;
    //firstDigit=number/10;
    //reverse=lastDigit*10+firstDigit;

    //if(number==reverse){
      //  cout<<"palindrom number";
   // }
    //else{
      //  cout<<"not palindrom";
    //}
    
int number=0,lastDigit,firstDigit,reverse,middle,remove;

    cout<<"entre the 3digit number";
    cin>>number;

    lastDigit=number%10;
    firstDigit=number/100;
    remove=number/10;
    middle=remove%10;
    reverse=lastDigit*100+middle*10+firstDigit;

    if(number==reverse){
        cout<<"palindrom number";
    }
    else{
        cout<<"not palindrom";
    }

    return 0;
}