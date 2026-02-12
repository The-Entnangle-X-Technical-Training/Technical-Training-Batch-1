//count prime number

#include<iostream>
using namespace std;
int main()
{

    int number,count=0,i=1;
    cout<<"enter a number:";
    cin>>number;

    while( i<=number){
        if (number%i==0){
            count++;
        }
    }
cout<<count<<endl;
return 0;

}