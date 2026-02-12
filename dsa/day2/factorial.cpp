#include<iostream>
using namespace std;
int main(){
    int i=1;
    int fact=1;
    int num=4;
    while(i<=num){
        fact=fact*i;
        
        i++;
    }
    cout<<fact<<endl;
    return 0;
}
