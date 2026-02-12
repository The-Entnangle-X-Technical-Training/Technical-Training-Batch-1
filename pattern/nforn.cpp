//printing n stars for n number of rows
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter the number of n :"<<endl;
    cin>>n;
    for  (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<"* ";
        }
    cout<<endl;
    }

}