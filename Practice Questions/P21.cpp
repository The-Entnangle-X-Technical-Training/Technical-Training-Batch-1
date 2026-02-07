// Discount price calculator
//(V)-Final price,discount,original price
//(O1)- input final price,discount
//(O2)-final price = original-(original price*discount%)/100
//O3)- display final price after discount percentage

#include<iostream>
using namespace std;

int main(){
    int finalPrice=0;
    int discountPercentage=0;
    int originalPrice=0;


    cout<<"Discount Percentage=";
    cin>>discountPercentage;

    cout<<"Original Price=";
    cin>>originalPrice;

    finalPrice=originalPrice-(discountPercentage*originalPrice)/100;
    cout<<"Final Price="<<finalPrice<<endl;

}