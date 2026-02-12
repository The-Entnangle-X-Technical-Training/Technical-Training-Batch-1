#include<iostream>
using namespace std;
int main(){
int number=0,lastDigit,firstDigit,reverse,removesecondlast,secondlast,middleDigit,remove,sum;


    cout<<"entre the 3digit number";
    cin>>number;

    lastDigit=number%10;
    firstDigit=number/1000;
    remove=number/10;
    middleDigit=remove%10;
    //removesecondlast=number/100;
    //secondlast=removesecondlast%10;
   sum=firstDigit+lastDigit+middleDigit;
    if(number/sum){
        cout<<"niven no";
    }
    else{
        cout<<"not";
    }

    
    return 0;
}