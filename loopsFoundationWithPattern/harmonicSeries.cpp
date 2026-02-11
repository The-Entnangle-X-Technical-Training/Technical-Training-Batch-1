#include<iostream>
using namespace std;

int main()
{
    float sum = 0.0;
    int N; // Number of terms

    cout << "Enter the number of terms (N): ";
    cin >> N;

    // Loop from 1 up to N
    for(int i = 1; i <= N; i++)
    {
        sum = sum + 1.0/i;
        
        // Printing the current term and current sum
        cout << "Term 1/" << i << " | Current Sum: " << sum << endl;
    }
    
    cout << "\nFinal Harmonic Sum: " << sum << endl;
    
    return 0;
}
