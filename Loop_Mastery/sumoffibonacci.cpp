//Sum of fibonacci

        #include<iostream>
        using namespace std;
        int main()
        {
        int number, numOne=0 , numtwo=1, next, sum=0;
            cout<<"Enter the number:";
            cin>>number;

            for(int i =1;i <=number; i++) 
        {
            sum = sum +numOne;
            next = numOne+numtwo;
            numOne=numtwo;
            numtwo=next;
        }
        cout<<" Sum of first "<<number<< " Fibonacci numbers = " <<sum;
        
        return 0;
        }