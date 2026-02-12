#include<iostream>
using namespace std;
int main(){
    int i=1;
   int num;
   int count=0;
   cout<<"entre number";
   cin>>num;
      while(num!=0){
        num=num/10;
        count++;
       
        i++;
      }
          
    cout<<count<<endl;
    
    return 0;
}