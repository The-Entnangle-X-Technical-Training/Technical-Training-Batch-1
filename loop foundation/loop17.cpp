// sum of odd numbers 1  to N


#include <iostream>
using namespace std;
int main() {

    int i = 1;
    int n = 0;
    int sum  = 0 ;

    cout<<"enter number:";
    cin>>n;

    while(i<=n){
        sum=2*i-1 ;
        i++;
    }    
        cout << "sum "<<sum;
        
        
    
    return 0;
}