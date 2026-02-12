// Write a program that calculates the final price after applying a discount percentage on the original price.

#include <iostream>
using namespace std;

int main() {
    float originalPrice, discountPercentage;
    float discountAmount, finalPrice;

    cout<< "enter price: ";
    cin >> originalPrice;

    cout << "discount: ";
    cin >> discountPercentage;

    discountAmount = (originalPrice * discountPercentage) / 100;
    finalPrice = originalPrice - discountAmount;

    cout << "Discount Amount = " << discountAmount << endl;
    cout << "Final Price after Discount = " << finalPrice << endl;

    return 0 ;

}