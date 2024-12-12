// Calculating Paint Jobs

#include <iostream>
using namespace std;

double calculatePaint(double wallSpace) {
  return wallSpace / 110.0;
}

double calculateLaborHours(double wallSpace) {
  return wallSpace / 110.0 * 8.0;
}

double calculatePaintCost(double paintPrice, double wallSpace) {
  return calculatePaint(wallSpace) * paintPrice;
}

double calculateLaborCharges(double wallSpace) {
  return calculateLaborHours(wallSpace) * 25.0;
}

double calculateTotalCost(double paintPrice, double wallSpace) {
  return calculatePaintCost(paintPrice, wallSpace) + calculateLaborCharges(wallSpace);
}
int main() {
  int numRooms;
  double paintPrice, totalWallSpace = 0;

  cout << "Enter the number of rooms to be painted: ";
  cin >> numRooms;
  while (numRooms < 1) {
    cout << "Invalid input. Please enter a value greater than or equal to 1: ";
    cin >> numRooms;
  }

  cout << "Enter the price of paint per gallon: ";
  cin >> paintPrice;
  while (paintPrice < 10.0) {
    cout << "Invalid input. Please enter a value greater than or equal to 10.00: ";
    cin >> paintPrice;
  }
 
  for (int i = 1; i <= numRooms; i++) {
    double wallSpace;
    cout << "Enter the square footage of wall space in room " << i << ": ";
    cin >> wallSpace;
    while (wallSpace < 0) {
      cout << "Invalid input. Please enter a non-negative value: ";
      cin >> wallSpace;
    }
    totalWallSpace += wallSpace;
  }

  cout << "\nResults:\n";
  cout << "Gallons of paint required: " << calculatePaint(totalWallSpace) << endl;
  cout << "Hours of labor required: " << calculateLaborHours(totalWallSpace) << endl;
  cout << "Cost of paint: $" << calculatePaintCost(paintPrice, totalWallSpace) << endl;
  cout << "Labor charges: $" << calculateLaborCharges(totalWallSpace) << endl;
  cout << "Total cost of the paint job: $" << calculateTotalCost(paintPrice, totalWallSpace) << endl;
  return 0;
}