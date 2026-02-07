// Total cost calculator with tax
//(V)- total cost of items,price, quantity, tax percentage ,subtotal, tax amount, and final total amount.
//(O1)-input price, quantity, and tax percentage
//(O3)-Tax Amount = Original Price×Tax Percentage
//(O2)-Total Cost=Original price + tax amount
//(O4)- Final total amount=original Price+Tax Amount
//(O3)-Subtotal=Original Price

#include<iostream>
using namespace std;

int main(){

    float price;
    int quantity;
    float taxPercentage;
    float totalCost;
    float subtotal;
    float taxAmount;
    float finalTotalAmount;

    cout<<"Price=";
    cin>>price;

    cout<<"Quantity=";
    cin>>quantity;

    cout<<"Tax Percentage=";
    cin>>taxPercentage;

    subtotal=price*quantity;
    cout<<"Subtotal of items="<<subtotal<<endl;

    taxAmount = subtotal * taxPercentage/100;
    cout<<"Total amount of items="<<taxAmount<<endl;

    totalCost= price + taxAmount;
    cout<<"Total cost of items="<<totalCost<<endl;

    finalTotalAmount = price+taxAmount;
    cout<<"Final Total Amount="<<finalTotalAmount<<endl;
return 0; 
}
