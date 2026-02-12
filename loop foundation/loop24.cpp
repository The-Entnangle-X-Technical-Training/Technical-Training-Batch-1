// print all number divisible by 3(1 to N)


#include <iostream>
using namespace std;
int main() {

    int i = 1;
    int N = 0;
   
    cout<<"enter number:";
    cin>>N;

    cout<<"number is divisible by 3 from 1 to"<<N<<"are:"<<endl;

    while(i<=N){
        if(i % 3==0){
        cout << i <<" ";
        }
        i++;
    }    
        
    return 0;
}