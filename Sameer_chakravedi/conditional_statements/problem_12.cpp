// Problem 12: Profit, Loss, or No Profit No Loss
// Write a program that takes cost price and selling price as input and displays whether there is profit, loss,
// or no profit no loss.

#include <iostream>
using namespace std;

int main(){
    int CostPrice = 0;
    int SellingPrice = 0;
    cout << "Enter Cost Price: ";
    cin >> CostPrice;
    cout << "Enter Selling Price: ";
    cin >> SellingPrice;
    if(CostPrice< SellingPrice){
        cout << "Profit: " << SellingPrice - CostPrice << endl;
    }
    else if(CostPrice > SellingPrice){
        cout << "Loss: " << CostPrice - SellingPrice << endl;
    }else{
        cout <<"no profit no loss ";
    }
    return 0;
}