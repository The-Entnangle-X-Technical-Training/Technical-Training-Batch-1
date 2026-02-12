//finding the factorial of a number
#include <iostream>
using namespace std ;
int main(){
    int n;
    cout <<"enter the number "<<endl;
    cin>>n;
    int factorial=1;
    for (int i=1;i<=n;i++){
    
        factorial=factorial*i;

        cout<<"the factorial of "<<n<<" is "<<factorial<<endl;
    }

}