 #include<iostream>
 using namespace std;

 int main(){

    int principal;
    int rate;
    int time;
    int simpleInterest;
    int totalAmount;


    cout<<"Enter principal amount:";
    cin>>principal;

    cout<<"Enter rate of interest(in %):";
    cin>>rate;

    cout<<"Enter time period(in years):";
    cin>>time;

    simpleInterest=(principal*rate*time)/100.0;
    totalAmount=principal+simpleInterest;

    cout<<"Simple Interest:"<<simpleInterest<<endl;
    cout<<"TotalAmount:"<<totalAmount<<endl;

    return 0;
    

 }