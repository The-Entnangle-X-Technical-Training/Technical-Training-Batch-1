// PERCENTAGE CALCULATOR

// variable = mathematics,science,english,totalmark,percentage
// O1 = input mathematics,science,english
// O2 = total mark by adding mathematics + science  + english 
// O3 = percentage = totalmark*100/300
// O4 = display total mark and percentage



#include <iostream>
using namespace std;
int main(){

    // int subjects=0;
    int mathematics=0;
    int science=0;
    int english=0;
    int totalmark=0;
    int percentage=0;

    
    cout<<"enter mathematics:";
    cin>>mathematics;

    cout<<"enter science:";
    cin>>science;

    cout<<"enter english:";
    cin>>english;

   
    totalmark = mathematics + science + english;
    percentage = totalmark*100/300;

    cout<<"totalmark"<<totalmark<<endl;
    cout<<"percentage"<<percentage<<endl;

    return 0;

}




