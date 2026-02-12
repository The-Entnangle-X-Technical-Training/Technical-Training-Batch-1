#include<iostream>
using namespace std;

  int main(){
     int num,temp;
      int factSum=0;

      cout<<"enter Number ";
     cin>>num;

     temp = num;

    while(num > 0)
    {
        int lastdig = num % 10;
        int fact = 1;
        for(int i=1; i<=lastdig; i++){
         fact*=i;    
        }

        factSum += fact;
        num /= 10;
    }


    
    if(factSum == temp){
      cout<<" Strong"<<endl;
    }
    else{
      cout<<" not Strong"<<endl;
    }
    return 0;
}