// AVERAGE IN MARKS IN 5  SUBJECT

// Variable = mathematics , science , english , hindi ,computer ,totalmark , average
// O1 = input mathematics , science , english , hindi ,computer 
// O2 = totalmark = mathematics + science + english + hindi +computer 
// O3 = avearge = mathematics + science + english  + hindi + computer / 5
// O4 = display totalmark and average



#include <iostream>
using namespace std;
int main(){

    // int subjects=0;
    int mathematics=0;
    int science=0;
    int english=0;
    int hindi=0;
    int computer=0;
    int totalmark=0;
    int average=0;

    
    cout<<"enter mathematics:";
    cin>>mathematics;

    cout<<"enter science:";
    cin>>science;

    cout<<"enter english:";
    cin>>english;

    cout<<"enter hindi:";
    cin>>hindi;


    cout<<"enter computer:";
    cin>>computer;


    totalmark = mathematics + science + english + hindi + computer;
    average= mathematics + science + english + hindi + computer/5;

    cout<<"totalmark"<<totalmark<<endl;
    cout<<"average"<<average<<endl;

    return 0;

}




