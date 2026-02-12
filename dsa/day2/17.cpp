#include<iostream>
using namespace std;
int main(){
    int i=1;
   int num;
   int number;
   int digit=0;
   int newNumber=0;
   
   cout<<"entre number";
   cin>>number;
      while(number>0){
        digit=number%10;
       number=number/10;
       newNumber=newNumber*10+digit;
       if(newNumber==digit){
        cout<<"palindrom number";
       }
       else{
        cout<<"not";
       }
      }
          
    cout<<newNumber<<endl;
    
    return 0;
}
