//Check if Digits are in Ascending Order

#include<iostream>
using namespace std;

int main(){

    int number=0;
    int digit1;
    int digit2;
    int digit3;

    cout<<"number=";
    cin>>number;

    digit1= number/100;
    digit2 = (number %100)/10;
    digit3= number % 10; 
    

    if(digit1<digit2 && digit1<digit3 || digit2>digit1 && digit2<digit3 || digit3>digit1 && digit3>digit2){

        cout<<"Ascending Order";
    }
    else{
        cout<<"Descending order";
    }

}