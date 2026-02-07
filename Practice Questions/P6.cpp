//Percentage Calculator

//(V)- Subject1Marks,Subject2Marks,Subject3Marks,TotalMarks,Percentage %
//(O1)-input Subject1Marks,Subject2Marks,Subject3Marks(out of 100)
//(O2)- TotalMarks=Subject1Marks + Subject2Marks + Subject3Marks
//(O3)- Percentage %=(TotalMarks/300)*100
//(O4)- display TotalMarks and Percentage %

#include<iostream>
using namespace std;

int main(){
    
    double Subject1Marks,Subject2Marks,Subject3Marks,TotalMarks,Percentage=0;

    cout<<"Enter Subject1Marks(out of 100):";
    cin>>Subject1Marks;

    cout<<"Enter Subject2Marks(out of 100):";
    cin>>Subject2Marks;

    cout<<"Enter Subject3Marks(out of 100):";
    cin>>Subject3Marks;

    TotalMarks=Subject1Marks + Subject2Marks + Subject3Marks;
    cout<<"TotalMarks:" <<TotalMarks<< "(out of 300)"<<endl;
    
    Percentage=(TotalMarks/300.0)*100;
    cout<<"Percentage:"<<Percentage<<"%";
   
return 0;
}
