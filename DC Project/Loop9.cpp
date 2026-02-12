//Sum of N number 

#include<iostream>
using namespace std;
int main(){
    int number=0;
    cout<<"Enter a number: "<<endl;
    cin>>number;

    int sum=0;

    for(int i= 1; i<=number; i++){

        sum += i;
        
    }
    cout<<sum;
    return 0;
}