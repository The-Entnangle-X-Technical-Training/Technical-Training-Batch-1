//creating tringle with numbers 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of sides :"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        //for (int j=0;j<=i;j++){
        for(int j=n;j>i;j--){    
        cout<<j+1<<" ";

        }
    
    cout<<endl; }

}
