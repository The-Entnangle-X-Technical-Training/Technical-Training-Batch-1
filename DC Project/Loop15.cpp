//Count 1 to N odd number 

#include<iostream>
using namespace std;
int main(){

    int number,f;
    cout<<"Enter a number: "<<endl;
    cin>>number;
    int count = 0;

    for(int i= 1; i<number; i++){

        f=i*2-1;
        if( f % 2 == 1){
            count= count+1;
        }
      
    }
    
  cout<<count;
    return 0;
}