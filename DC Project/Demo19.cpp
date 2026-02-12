//Simple interest with total amount

#include<iostream>
using namespace std;
int main(){

    int P,R,T,SI,Total;

    cout<<"Enter principal amount: ";
    cin>>P;
    cout<<"Enter rate of interest: ";
    cin>>R;
    cout<<" Enter Time: ";
    cin>>T;

    SI = (P*R*T)/100;
    Total = (P+SI);

    cout<<" Simple interest = "<< SI << endl;
    cout<< "Total amount = "<< Total << endl;

    return 0;


}