#include<iostream>
using namespace std;
int main(){
    int i=1;
   int num;
   int sum=0;
   
   cout<<"entre number";
   cin>>num;
      while(num>0){
        num=num%10;
       sum=sum+num;
       num=num/10;
       
      }
          
    cout<<sum<<endl;
    
    return 0;
}