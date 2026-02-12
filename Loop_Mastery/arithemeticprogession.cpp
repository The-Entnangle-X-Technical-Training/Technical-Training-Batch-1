//Airthemethic progression 

#include<iostream>
using namespace std;
int main(){

    int number, difference, Nthterm,arithmetic_progression;
    cout<<"Enter a number: ";//satrting number
    cin>>number;
    cout<<"Enter a difference: ";//difference between all number
    cin>>difference;
    cout<<"Enter a Nthterm: ";//number of times 
    cin>>Nthterm;
    for(int i=0;i<Nthterm;i++) {
        arithmetic_progression=number+i*difference; 
        cout<<arithmetic_progression<<" ";
    }
    return 0;

}