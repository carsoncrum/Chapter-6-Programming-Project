// Calculating Celcius from Fahrenheit

#include <iostream>
#include <iomanip>
using namespace std;

double fahrenheitToCelsius(double fahrenheit) {
  return 5.0 / 9.0 * (fahrenheit - 32.0);
}
int main() {
  cout << "Fahrenheit" << setw(10) << "Celsius" << endl;
  for (int fahrenheit = 0; fahrenheit <= 20; fahrenheit++) {
    double celsius = fahrenheitToCelsius(fahrenheit);
    cout << setw(10) << fahrenheit << setw(10) << fixed << setprecision(2) << celsius << endl;
  }
  return 0;
}