//check if digits of a three digit number are in ascending order
#include<iostream>
using namespace std;
int main()
{
        int number, hundredsDigit, tensDigit,unitsDigit;
        cout<<"Enter a three digit number:";
        cin>>number;

        hundredsDigit=number/100;
        tensDigit=(number%100)/10;
        unitsDigit=number%10;

        if(hundredsDigit<tensDigit && tensDigit<unitsDigit){
            cout<<"The number is a ascending order"<<endl;
        }
        else{
            cout<<"the number is not in ascending order"<<endl;
        }
        return 0;

}