// Problem 38: Discount Calculator with Multiple Conditions
// Write a program that calculates discount based on: Purchase amount > ₹10000: 20% discount, > ₹5000:
// 15%, > ₹2000: 10%, else no discount. If customer is a member, add 5% extra discount. Display final price
// after discount.

#include <iostream>
using namespace std;

int main(){
    int PurchaseAmount =0 ;
    char member = 0;
    cout << " Enter the Purchase amount : ";
    cin >> PurchaseAmount;
    cout << " You are a member if yes enter y otherwise n : ";
    cin >> member;
    if(PurchaseAmount>10000 && member =='y'){
        cout <<" Final amount After Discount : " << PurchaseAmount *0.75;
    }else if(PurchaseAmount >5000 && member =='y'){
        cout <<" Final amount After Discount : " << PurchaseAmount *0.80;
    }else if (PurchaseAmount >=2000 && member == 'y'){
        cout <<" Final amount After Discount : " << PurchaseAmount *0.85;
    }else if(PurchaseAmount >10000){
        cout <<" Final amount After Discount : " << PurchaseAmount *0.80;
    }else if(PurchaseAmount >5000){
        cout <<" Final amount After Discount : " << PurchaseAmount *0.85;
    }else if (PurchaseAmount >=2000 ){
        cout <<" Final amount After Discount : " << PurchaseAmount *0.90;
    }else{
        cout << " NO Discount ";
    }
    return 0;   

}