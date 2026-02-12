// sum of even number 1 to N


#include <iostream>
using namespace std;
int main() {

    int i = 1;
    int n = 0;
    int sum  = 0 ;

    cout<<"enter number:";
    cin>>n;

    while(i<=n){
        sum=sum +(2 * i) ;
        i++;
    }    
        cout << "sum "<<sum;
        
        
    
    return 0;
}   