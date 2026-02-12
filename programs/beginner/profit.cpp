//Write a program that takes cost price and selling price as input, then determines and displays whether it's
//profit or loss and calculates the amount.

#include <iostream>
using namespace std;

int main() {
    float costPrice, sellingPrice;
    float Profit, loss;

    cout<< "enter the cost price";
    cin >> costPrice;

    cout << "enter the selling price";
    cin >> sellingPrice;

    if (sellingPrice > costPrice){
        amount = sellingPrice - costPrice;
        cout<< "profit =" << amount << endl;
    }
    else if(costPrice > sellingPrice) {
        amount = costPrice - sellingPrice;
        cout << "Loss = " << amount << endl;
    }
    else {
        cout << "No Profit, No Loss" << endl;
    }

    return 0;
}
