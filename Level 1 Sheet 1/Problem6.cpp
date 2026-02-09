#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    int sum, percentage;

    cout<<"Enter marks of english = ";
    cin>>a;
    cout<<"Enter marks of hindi = ";
    cin>>b;
    cout<<"Enter marks of maths =";
    cin>>c;

    sum = a + b + c; 
    cout<<"The sum is = "<<sum<<endl;
    
    percentage = (sum * 100) / 300;          
    cout<<"The percentage is = "<<percentage<<endl;

}