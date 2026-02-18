//Problem 22: Profit or Loss

#include<iostream>
using namespace std;

int main(){

    int costPrice=0;
    int sellingPrice=0;

    cout<<"Cost Price=";
    cin>>costPrice;

    cout<<"Selling Price=";
    cin>>sellingPrice;

    if(sellingPrice>costPrice){
        cout<<"Profit";
    }
    else if(costPrice>sellingPrice){
        cout<<"Loss";
    }
    else{
        cout<<"No Profit No Loss";
    }
        
}
