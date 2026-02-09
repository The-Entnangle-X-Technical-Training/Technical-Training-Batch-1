#include<iostream>
using namespace std;

int main(){
    
    int sellingPrice, costPrice;
    int Profit, Loss;

    cout<<"Enter the selling price = ";
    cin>>sellingPrice;  
    cout<<"Enter the cost price = ";
    cin>>costPrice;

    Profit = sellingPrice - costPrice;
    Loss = costPrice - sellingPrice;

    if(Profit > 0){
        cout<<"The profit is = "<<Profit<<endl;
    }
    else if(Loss > 0){
        cout<<"The loss is = "<<Loss<<endl;
    }
    else{
        cout<<"There is no profit or loss."<<endl;
    }
 
    }
