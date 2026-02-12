#include<iostream>
using namespace std;
int main(){

    int sellingPrice , costPrice ;
    int Profit , Loss ;

    cout<<"Enter costPrice :";
    cin>>costPrice;

    cout<<"Enter sellingPrice :";
    cin>>sellingPrice;

    Profit = costPrice - sellingPrice ;
    Loss = sellingPrice - costPrice ;

    cout<<"Profit is :"<<Profit<<endl;
    cout<<"Loss is :"<<Loss;

    return 0;
}