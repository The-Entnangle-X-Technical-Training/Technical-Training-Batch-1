// count  odd number from 1 to n 
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    int count=0;
    for (int i=1;i<=n;i++){
        if(i%2!=0){
            count++;
        }
    }
    cout<<"the total odd number from 1 to "<<n<<" is "<<count<<endl;
}