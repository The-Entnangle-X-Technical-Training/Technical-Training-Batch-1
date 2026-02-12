// Print First N Odd Numbers


#include <iostream>
using namespace std;
int main() {

    int i = 1;
    int n = 0 ;
     cout<<"enter n:";
     cin>>n;

    while(i<=n){
        cout << 2*i-1 << " ";
        
        i++;
    }
    return 0;
}   