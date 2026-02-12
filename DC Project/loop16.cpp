//Sum  1 to N even number 

#include<iostream>
using namespace std;
int main(){

    int number,sum,f;
    cout<<"Enter a number: "<<endl;
    cin>>number;
    int sum = 0;

    for(int i= 1; i<number; i++){

        f=i*2;
     if(f<number){
        sum+=1;
     }
      cout<<sum;
    }
    
 
    return 0;
}