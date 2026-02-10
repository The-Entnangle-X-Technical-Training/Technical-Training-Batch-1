#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    int sum, average;

    cout<<"Enter a = ";
    cin>>a;
    cout<<"Enter b = ";
    cin>>b;
    cout<<"Enter c =";
    cin>>c;

    sum = a + b + c;
    cout<<"The sum is = "<<sum<<endl;

    average = sum / 3;
    cout<<"The average is = "<<average<<endl;

}