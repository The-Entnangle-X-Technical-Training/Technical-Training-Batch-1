// discount based on amount 
#include <iostream>
using namespace std;
int main(){
    float amt,dis,totalamt;
    cout<<"enter the actual amount"<<endl;
    cin>>amt;
    if(amt>=1000){
        dis=amt*0.1;
        cout<<"the discount is "<<dis<<endl;
    }
    else {
        
        cout<<"there is no discount  "<<dis<<endl;
        
    }
 totalamt=amt-dis;
    cout<<"the total amount after discount is "<<totalamt<<endl;
}
