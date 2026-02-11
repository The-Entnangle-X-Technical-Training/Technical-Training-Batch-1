#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    int count =0;
    for (int i = 2; i < number; i++)
    {
        int isPrime=1;
        for(int j = 2; j<i; j++)
        {
            if(i%j == 0){
                isPrime =0;
                break;
            }
        }
            if(isPrime){
                count++;
                cout<<i<<" ";
            }
            
        }
        cout<<endl<<"Count = "<<count;
        
    return 0;
}