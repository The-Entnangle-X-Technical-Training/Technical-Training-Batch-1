// Sum of First N Numbers

#include <iostream>
using namespace std;
int main(){

    int i = 1 ;
    int n= 0;
    int sum = 0 ;

    cout<<"enter a number:";
    cin>>n;

    while( i <= n ){
        sum=sum+i;
        i++;
    }
    cout<<"sum of fisrt"<<n<<"natural numbers="<<sum;

         
    return 0;
}    