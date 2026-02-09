#include <iostream>
using namespace std;

int main() {
    float price, taxPercent;
    int quantity;
    float subtotal, taxAmount, finalTotal;

    cout<<"Enter price of one item: ";
    cin>>price;
    cout<<"Enter quantity of items: ";
    cin>>quantity;
    cout<<"Enter tax percentage: ";
    cin>>taxPercent;

    subtotal = price * quantity;
    cout<<"Subtotal = " <<subtotal<<endl;
    
    taxAmount = (subtotal * taxPercent) / 100;
    cout<<"Tax Amount = "<<taxAmount<<endl;

    finalTotal = subtotal + taxAmount;
    cout<<"Final Total Amount = "<<finalTotal<<endl;

}
