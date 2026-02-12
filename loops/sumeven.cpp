// printing first 10  number and  sum of even numbers
#include <iostream>
using namespace std;
int main()
{
    int i, sum =0;
    for (int i = 2; i <= 10; i += 2)
    {
        cout<<i<<" "<<endl;
         sum += i;
       // cout << i << " " <<endl;
    }

   
    cout << "the sum of even numbers is " << sum << endl;
}
