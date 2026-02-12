#include<iostream>
using namespace std;

  int main(){
    int num, temp;
    int count = 0;

    cout<<"enter Number ";
    cin>>num;

     while(num > 0)
    {
        int lastdig = num % 10;
        count++;
        num /= 10;
    }
    int sum = 0;
    temp = num;
    while(num > 0)
    {
     int lastdig = num % 10;
     for(int i=1; i<count; i++){
      sum = sum * lastdig;
     }
     num /= 10;
    }

    if(sum == temp){
      cout<<" armstrong"<<endl;
    }
    else{
      cout<<" not armstrong"<<endl;
    }
    return 0;
}