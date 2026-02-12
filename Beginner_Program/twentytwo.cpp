// calculate subtotal , tax , total price of quantity and price :
#include<iostream>
using namespace std;
int main(){
    int subTotal = 0 , Tax = 0 , totalPrice = 0;
    int Price = 0;
    int Quantity = 0;
    int taxPercentage = 0;
    cout<<"Enter Price :";
    cin>>Price;
    cout<<"Enter Quantity :";
    cin>>Quantity;
    cout<<"Enter taxPercentage :";
    cin>>taxPercentage;

    subTotal = Price * Quantity ;
    Tax = subTotal * taxPercentage / 100 ;
    totalPrice = subTotal + Tax ;

    cout<<"The Subtotal is :"<<subTotal<<endl;
    cout<<"The Tax is :"<<Tax<<endl;
    cout<<"The Total Price is :"<<totalPrice;

    return 0;
}