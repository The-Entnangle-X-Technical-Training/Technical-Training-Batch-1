//Discount Price Calculator;
#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    float mainAmount = 0 , discountAmount = 0;
    float finalPrice = 0.0 ;

    cout<<"Enter Marked Amount :";
    cin>>mainAmount;
    cout<<"Enter Discount percentage :";
    cin>>discountAmount;

    discountAmount = mainAmount * discountAmount / 100 ;
    finalPrice = mainAmount - discountAmount ;
    
    cout<<"The Discount Amount is :"<<discountAmount<<endl;
    
    cout<<fixed<<setprecision(2);

    cout<<"The Final Price is :"<<finalPrice;

    return 0;
}