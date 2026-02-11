// calculating the grades 
#include<iostream>
using namespace std;
int  main()
    {
     float marks;
     cout <<" enter the marks out of 100"<<endl;
     cin>>marks;
        if(marks>=90){
            cout<<"the grade is A "<<endl;
        }
        else if(marks>=80){
            cout<<"the grade is B "<<endl;
        }
        else if(marks>=70){
            cout<<"the grade is C "<<endl;
        }
        else if(marks>=60){
            cout<<"the grade is D "<<endl;
        }
        else {
            cout<<"the grade is F "<<endl;
        }
}