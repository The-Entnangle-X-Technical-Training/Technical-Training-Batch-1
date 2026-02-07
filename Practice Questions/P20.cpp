//Profit or Loss Calculator
//(V)- cost price, selling price,profit,loss,amount
//(O1)- input cost price, selling price
//(O2)- Profit=selling price - cost price
//(O3)- Losss=cost price - selling price
//(O4)- if selling price > cost price display profit
//(O5)- else if cost price > selling price display loss
//(O4)-display profit or loss
//(O5)- calculate amount

#include<iostream>
using namespace std;

int main(){
    double sellingPrice;
    double costPrice;
    double profit;
    double loss;

    cout<<"Enter selling price=";
    cin>>sellingPrice;

    cout<<"Enter cost price=";
    cin>>costPrice;

   
    if(sellingPrice > costPrice){
        profit= sellingPrice - costPrice;
        cout<<"It is a Profit."<<endl;
        cout<<"Amount of Profit="<<profit<<endl;
    }
      
      else if(costPrice > sellingPrice){
        loss= costPrice - sellingPrice;
        cout<<"It is a Loss."<<loss<<endl;
        cout<<"Amount of Loss="<<loss<<endl;
    }
    else{
        cout<<"Its neither profit nor loss"<<endl;
    }
}
