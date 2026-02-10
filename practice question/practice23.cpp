// ELESTRICITY BILL CALCULATOR

// Varible = units consumed , rate per unit , total bill
// O1 = units consumed , rate per unit
// O2 = total bill = units consumed * rate per unit
// O3 = display total bill 


# include <iostream>
using namespace std;
int main(){

    
    int unitsconsumed= 0;
    int rateperunit = 0;
    int totalbill = 0;
    

    cout<<"unitsconsumed:";
    cin>>unitsconsumed;

    cout<<"rateperunit:";
    cin>>rateperunit;

    totalbill = unitsconsumed * rateperunit;
    
    cout<<"totalbill"<<totalbill<<endl;
    
    return 0;

}