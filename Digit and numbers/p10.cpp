//10: Product of All Digits

#include<iostream>
using namespace std;

int main(){

    int number;//3digit
    int firstDigit;
    int middleDigit;
    int lastDigit;
    double product;

    cout<<"number=";
    cin>>number;

    number/100;
    firstDigit=number/100;
    cout<<"firstDigit"<<firstDigit<<endl;

    number=number/10;
    number=number%10;
    middleDigit=number%10;
    cout<<"middleDigit"<<middleDigit<<endl;
    

    number%10;
    lastDigit=number%10;
    cout<<"lastDigit"<<lastDigit<<endl;
    
    product=firstDigit*middleDigit*lastDigit;
    cout<<"product"<<product;
    
}




