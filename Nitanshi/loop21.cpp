#include<iostream>
using namespace std;

int main(){

    int num;
    int largest = 0;

     cout<<"enter Number ";
     cin>>num;

     while(num > 0)
    {
        int lastdig = num % 10;
        if(lastdig > largest){
            largest = lastdig;
        }
        num /= 10;
    }
    cout<<largest;

    return 0;
}