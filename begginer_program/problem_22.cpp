// Problem 22: Total Cost Calculator with Tax
// Write a program that calculates total cost of items: input price, quantity, and tax percentage, then calculate
// and display subtotal, tax amount, and final total amount.

#include <iostream>
using namespace std;

int main(){
    
    int price = 0;
    int quantity = 0;
    double tax_percentage = 0;
    int subtotal = 0;
    double tax_amount =0 ;
    
    cout << "enter the price of item ";
    cin >>price;
    cout <<"enter the quantity of item ";
    cin >> quantity;
    cout << "Enter the tax percentage " ;
    cin >> tax_percentage;
    
    subtotal =price * quantity;
    tax_amount =(subtotal * tax_percentage)/100;
    cout << "subtotal : " << subtotal<< endl;
    cout << "Tax amount : "<<tax_amount <<endl ;
    cout << " Final_amount " << subtotal + tax_amount;
    

}