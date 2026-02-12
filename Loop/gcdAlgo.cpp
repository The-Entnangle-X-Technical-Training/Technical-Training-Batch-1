//GCD (Euclidean Algorithm)

#include <iostream>
using namespace std;

  int main()
  {
        int numOne, numTwo, GCD;
        
        cout<<"Enter first number: ";
        cin >> numOne;;
        cout<<"Enter second number: ";
        cin>> numTwo;

      for(int i=1; i<numOne && i<numTwo; i++)
      {
        if(numOne%i==0 && numTwo%i==0)
           GCD=i;
      }
      cout<<"The GCD of two number is: "<<GCD<<endl;
      return 0;
    }