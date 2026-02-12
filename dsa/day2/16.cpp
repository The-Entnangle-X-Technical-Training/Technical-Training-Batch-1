#include<iostream>
using namespace std;
int main(){
    int i=1;
   int digit=0;
   int number;
   
   int newNumber=1;
   
   cout<<"entre number";
   cin>>number;
      while(number>0){
        digit=number%10;
       number=number/10;
       newNumber=newNumber*digit;
       
      }
          
    cout<<newNumber<<endl;
    
    return 0;
}
