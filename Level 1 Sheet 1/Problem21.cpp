#include <iostream>
using namespace std;

int main() {
    float originalPrice, discountPercent, discountAmount, finalPrice;

    cout<<"Enter original price: ";
    cin>>originalPrice;
    cout<<"Enter discount percentage: ";
    cin>>discountPercent;

    discountAmount = (originalPrice * discountPercent) / 100;
    finalPrice = originalPrice - discountAmount;

    cout<<"Discount Amount = " << discountAmount << endl;
    cout<<"Final Price after discount = " << finalPrice << endl;
    
}
