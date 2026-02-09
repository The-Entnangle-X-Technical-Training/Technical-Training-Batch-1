// Problem 21: Discount Price Calculator
// Write a program that calculates the final price after applying a discount percentage on the original price

#include <iostream>
using namespace std;

int main(){
    double OriginalPrice = 0.0;
    double DiscountPercent = 0.0;
    double FinalPrice = 0.0;
    cout << "Enter Original Price: ";
    cin >> OriginalPrice;
    cout << "Enter Discount Percent: ";
    cin >> DiscountPercent;
    FinalPrice = OriginalPrice * (1- (DiscountPercent / 100));
    cout << "Final Price: " << FinalPrice << endl;
}