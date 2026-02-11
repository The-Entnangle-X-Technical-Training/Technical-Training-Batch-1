// checking weather the number is divisible 2 and 3 both 
#include<iostream>
using namespace std;    
int main(){
    int num;
    cout<<"enter the number "<<endl;
    cin>>num;
    if(num%2==0 && num%3==0){
        cout<<"the number is divisible by 2 and 3 both "<<endl;
    }
    else {
        cout<<"the number is not divisible by 2 and 3 both "<<endl;
        
    }
}