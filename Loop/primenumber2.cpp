//print prime number 1 to N 
   
#include <iostream>
using namespace std;

int main() 
{
    int number;
    cout<<"Enter a number: ";
    cin >> number; 
    for (int i = 2; i <= number; i++)
     { 
        bool prime = true;
        for (int j = 2; j < i; j++)
         { 
            if (i % j == 0)
             { 
                prime = false;
                break;
            }
        }
        if (prime) cout << i << " ";
    }
    return 0;
}