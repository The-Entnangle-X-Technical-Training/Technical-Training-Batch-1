//Count 1 to N even number 

#include<iostream>
using namespace std;
int main(){

    int number;
    cout<<"Enter a number: "<<endl;
    cin>>number;
    int count = 0;

    for(int i= 1; i<=number; i++){

        if( i % 2 == 0){
            count= count+1;
        }
      
    }
    
  cout<<count;
    return 0;
}