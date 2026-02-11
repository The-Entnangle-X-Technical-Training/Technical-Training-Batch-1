//greater of two numbers

#include <iostream>
using namespace std;

int main()
    {
        int numberOne, numberTwo, numberThree;
        cout << "Enter three numbers: ";
        cin >> numberOne >> numberTwo >> numberThree;

        int greatest;
        if (numberOne >= numberTwo && numberOne >= numberThree)
            greatest = numberOne;

        else if (numberTwo >= numberOne && numberTwo >= numberThree)
            greatest = numberTwo;

        else
            greatest = numberThree;

        cout << "The greatest number is: " << greatest << endl;
        
        return 0;
    }