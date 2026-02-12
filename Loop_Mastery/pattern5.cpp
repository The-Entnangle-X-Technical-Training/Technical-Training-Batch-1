//floyd's triangle 

#include<iostream>
using namespace std;
int main(){
    int rows=1,number;
    cout<<"Enter a number : ";
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<rows<<" ";
            rows++;
        }
         cout<<endl;
    }
    return 0;
}