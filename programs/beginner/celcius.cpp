#include <iostream>
using namespace std;

int main() {
   double temperatureCelcius = 0.0;
   double temperatureFahrenheit = 0.0;

   cout << " enter temperature in celcius:";
   cin >>  temperatureCelcius;

   temperatureFahrenheit = (temperatureCelcius * 9/5) + 32;

   cout << "temperature in fahrenheit" << temperatureFahrenheit << endl;
   return 0;

}