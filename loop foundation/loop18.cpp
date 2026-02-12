// factorial of a number


# include <iostream>
using namespace std;
int main(){

    int i =1 ;
    int n =0 ;
    int factorial =  1 ;

    cout<<"enter a number:";
    cin>>n;

    while(i<=n){
    factorial=factorial*i;
    i++;
    }
    cout<<"factorial of number"<<factorial;
    return 0;

}