//sum of first N even number

#include <iostream>
using namespace std;
int main() 
{
    int N;
    cout << "Enter a number N: ";
    cin >> N;

    int sum = 0;   

  
    for (int i = 1; i <= N; i++)
     {
        int even = 2 * i;   
        sum += even;        
    }

    cout << "Sum of first " << N << " even numbers is: " << sum << endl;

    return 0;
}