// cheaking weather the number is a single digit number or not 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number "<<endl;
    cin>>num;
    if(num>=0 && num<=9){
        cout<<"the number is a single digit number "<<endl;
    }
    else {
        cout<<"the number is not a single digit number "<<endl;
        
    }
}