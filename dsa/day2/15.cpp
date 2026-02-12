#include<iostream>
using namespace std;
int main(){
    int i=1;
   
   int number;
   
   int newNumber=0;
   int digit=0;
   cout<<"entre number";
   cin>>number;
      while(number>0){
        digit=number%10;
       number=number/10;
       newNumber=newNumber*10+digit;
       
      }
          
    cout<<newNumber<<endl;
    
    return 0;
}
