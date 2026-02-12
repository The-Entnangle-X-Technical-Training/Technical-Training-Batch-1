//count multiples of m numbers from 1 to n 

#include <iostream>
using namespace std;

int main()
 {
    int numOne, numTwo;
    cout << "Enter value of numOne: ";
    cin >> numOne;
    cout << "Enter value of numTwo: ";
    cin >> numTwo;

    int count=0; 
    for (int i = 1; i <= numOne; i++)
     {
        if (i % numTwo == 0) 
        {
            count++;
        }
    }    

    cout << "Count of multiples of " << numTwo << " from 1 to " << numOne << " is: " << count << endl;

    return 0;
}



