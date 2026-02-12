#include<iostream>
using namespace std;
int main(){
    int i=1;
    int base=2;
    int exponent=3;
    int result=1;
    while(i<=exponent){
        result=result*base;

      
        
        i++;
    }
    cout<<result<<endl;
    return 0;
}