// Problem 20: Profit or Loss Calculator
// Write a program that takes cost price and selling price as input, then determines and displays whether it's
// profit or loss and calculates the amount.

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
    else{
        cout << "Loss: " << CostPrice - SellingPrice << endl;
    }
    
    

    return 0;
}