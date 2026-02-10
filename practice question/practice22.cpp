// TOTAL COST CALCULATOR WITH TAX

// variable = total cost , price , quantity , and tax percentage , subtotal , tax amount , final total amount
// O1 = input price , quantity , tax percentage
// O2 = total cost item1 + item2 + item3
// O3 = calculate subtotal = sum of all item price
// O4 = calculate tax amount = (subtotal * tax rate ) / 100
// O5 = calculate final total amount
// O6 = display subtotal , taxamount, final total amount

# include <iostream>
using namespace std;
int main(){

    
    int subtotal = 0;
    int price = 0;
    int quantity = 0;
    int taxpercentage =0;
    int taxamount = 0;
    int finaltotalamount =0;

    cout<<"price:";
    cin>>price;

    cout<<"quantity:";
    cin>>quantity;

    cout<<"taxpercentage:";
    cin>>taxpercentage;

    

    subtotal = price * quantity;
    taxamount = (subtotal * taxpercentage) /100 ;
    finaltotalamount= subtotal + taxamount;

    cout<<"subtotal"<<subtotal<<endl;
    cout<<"taxamount"<<taxamount<<endl;
    cout<<"finaltotalamount"<<finaltotalamount<<endl;

    return 0;

}