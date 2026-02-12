//Find Smallest Digit in a Number

#include<iostream>
using namespace std;

int main(){
    int number;//4-digit
    int digit1;
    int digit2;
    int digit3;
    int digit4;

    cout<<"number=";
    cin>>number;

    digit1= number/1000;
    digit2 = (number%1000)/100;
    digit3= (number%100)/10;
    digit4= number %10;



    if(digit1<digit2==0 && digit1<digit3==0 && digit1<digit4==0){
        cout<<"digit1 is smallest";
    }
    else if(digit2<digit1==0 && digit2<digit3==0 && digit2<digit4==0){
        cout<<"digit2 is smallest";
    }
    else if(digit3<digit1==0 && digit3<digit2==0 && digit4<digit3==0){
        cout<<"digit3 is smallest";
    }
    else{
        cout<<"digit4 is smallest";
    }
}