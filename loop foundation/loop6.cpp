// Print First N Even Numbers  


#include <iostream>
using namespace std;
int main() {

    int i = 1;
    int n = 0;

    cout<<"enter number:";
    cin>>n;

    while(i<=n){
        cout << i * 2<< " ";
        i++;
    }
        
    return 0;
}   
