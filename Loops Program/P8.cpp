//8: Sum of First 10 Numbers
#include<iostream>
using namespace std;

int main(){

    int i=1,sum=0;
    while(i<=10){
        sum = sum+i;
        i++;
    }
    cout<<"sum:"<<sum;
return 0;
}