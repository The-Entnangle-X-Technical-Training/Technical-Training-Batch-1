//creating rectangle with star
#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the no of rows:"<<endl;
    cin>>m;
    cout<<"enter the numbers of coulms:"<<endl;
    cin>>n;
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {cout<<" * ";
        }
         cout<<endl;
    }
   
}