//shipping Cost Calculator

#include<iostream>
using namespace std;

int main(){
    int weight;
    int distance;
    int baseCost=5;
    int costPerkg;
    int costPer10km;
    int total;

    cout<<"weight=";
    cin>>weight;

    cout<<"distance=";
    cin>>distance;

    costPerkg=weight*2;

    costPer10km=(distance*0.50)/10;

    total=baseCost+costPer10km+costPerkg;
    cout<<total;

}