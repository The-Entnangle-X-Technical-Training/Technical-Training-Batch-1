// print number form 1 to n that are divisible by 3
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    for (int i=1;i<=n;i++){
        if(i%3==0){
            cout<<i<<" "<<endl;
        }
    }
}