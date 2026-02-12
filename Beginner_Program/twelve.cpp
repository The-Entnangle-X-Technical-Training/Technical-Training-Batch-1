//area of square by using formula side*side.
#include<iostream>
using namespace std;
int main(){
    int side;
    cout<<"enter side :";
    cin>>side;
    int square , parameter;
    square = side*side;
    cout<<"area of square is :"<<square<<endl;
    parameter = 4*side;
    cout<<"parameter of square is :"<<parameter;
    return 0;
}