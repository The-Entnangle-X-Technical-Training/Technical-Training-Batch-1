// print multiplication table of n


#include <iostream>
using namespace std;
int main() {

    int i = 1;
    int n = 0;

    cout<<"enter number:";
    cin>>n;
    

    while(i<=10){
        cout <<n<<"X"<<i<<"="<<n*i<<endl;
            i++;
        }
        
    
    return 0;
}   