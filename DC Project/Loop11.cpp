//Print multiplication table N

#include<iostream>
using namespace std;
int main(){
    int number = 0;
    cout<<" Enter number: ";
    cin>>number;

    for(int i= 1; i<=10; i++){

        cout<< i*number <<endl;
        
    }
    
    return 0;
}