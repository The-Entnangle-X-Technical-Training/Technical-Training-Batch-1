//Find Largest Digit in a Number

#include<iostream>
using namespace std;

int main(){
    int number;//4-digit
    int firstDigit;
    int secondDigit;
    int thirdDigit;
    int fourthDigit;

    cout<<"number=";
    cin>>number;

    firstDigit= number/1000;
    secondDigit = (number%1000)/100;
    thirdDigit= (number%100)/10;
    fourthDigit= number %10;


    if(firstDigit>secondDigit && firstDigit>thirdDigit && firstDigit>fourthDigit){
        cout<<"firstDigit";
    }
    else if(secondDigit>firstDigit && firstDigit>thirdDigit && firstDigit>fourthDigit){
        cout<<"secondDigit";
    }   
    else if(thirdDigit>firstDigit && thirdDigit>secondDigit && thirdDigit>fourthDigit){
        cout<<"thirdDigit";
    }
    else {
        cout<<"fourthDigit";
    }
    
}
