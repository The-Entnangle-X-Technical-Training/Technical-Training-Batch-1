//area of parameter of rectangle :
#include<iostream>
using namespace std;
int main(){
    int length , breadth , area;
    cout<<"enter length :";
    cin>>length;
    cout<<"enter breadth :";
    cin>>breadth;
    area = length * breadth;
    cout<<"area of rectangle is :"<<area<<endl;
    int parameter;
    parameter = 2 * (length + breadth);
    cout<<"the parameter of rectangle is :"<<parameter;
    return 0;
}