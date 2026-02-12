#include <iostream>
using namespace std;

int main() {
   int length = 0;
   int breadth = 0;
   int area = 0;
   int perimeter = 0;

   cout<<"enter length of rectangle";
   cin>> length;
   cout<< "enter breadth of rectangle";
   cin>>breadth;

   area = length * breadth;
   perimeter = 2 * (length + breadth);

   cout<< "area of the rectangle" << area << endl;
   cout << "perimeter of the rectangle" << perimeter<< endl;
    
   return 0;

}