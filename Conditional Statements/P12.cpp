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
        cout<<"Profit."<<endl;
        cout<<"Amount of Profit="<<profit<<endl;
    }
      
      else if(costPrice > sellingPrice){
        loss= costPrice - sellingPrice;
        cout<<"Loss."<<endl;
        cout<<"Amount of Loss="<<loss<<endl;
    }
    else{
        cout<<"Its neither profit nor loss"<<endl;
    }
}
