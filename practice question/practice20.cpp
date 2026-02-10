// PROFIT OR LOSS CALCULATOR

// variable = cost price , selling price , profit , loss
// O1 = input cost price , selling price
// O1 = profit = selling price -  cost price
// O2 = loss = cost price - selling price
// O3 = if the selling price > cost price
// O4 = display profit
// O5 = if the selling price < cost price 
// O6 = display loss
// O7 = display profit , loss
// O8 = calculate the amount

#include <iostream>
using namespace std;
int main(){

    double sellingprice = 0;
    double costprice = 0 ;
    double profit = 0 ;
    double loss = 0 ;

    cout<<"sellingprice:";
    cin>>sellingprice;

    cout<<"costprice:";
    cin>>costprice;

    // profit = sellingprice - costprice;
    // loss = costprice + sellingprice;

    if (sellingprice > costprice){
        profit = sellingprice - costprice;
        cout<<"profit"<<profit<<endl;
    }


    else if (sellingprice < costprice){
        loss = costprice + sellingprice;
        cout<<"loss"<<loss<<endl;
    }
    else{
        cout<<"not profit no loss"<<endl;
    }

    return 0;
}
