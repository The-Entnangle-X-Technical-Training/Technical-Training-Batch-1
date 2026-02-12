#include<iostream>
using namespace std;
int main(){
int number=0,lastDigit,firstDigit,reverse,removesecondlast,secondlast,middleDigit,remove;

    cout<<"entre the 4digit number";
    cin>>number;

    lastDigit=number%10;
    firstDigit=number/1000;
    remove=number/10;
    middleDigit=remove%10;
    removesecondlast=number/100;
    secondlast=removesecondlast%10;
   

    if(firstDigit<secondlast&&firstDigit<middleDigit&&firstDigit<lastDigit){
        cout<<"firstDigit is small";
    }
     else if(firstDigit>secondlast&&secondlast<middleDigit&&secondlast<lastDigit){
        cout<<"secondlast is small";
    }
     else if(middleDigit<secondlast&&firstDigit<middleDigit&&middleDigit<lastDigit){
        cout<<"middleDigit is small";
    }
     else{
        cout<<"lastDigit is small";
    }
    return 0;
}