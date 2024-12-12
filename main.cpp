// Calculating The Safest Driving Area
#include <limits>
using namespace std;
#include <iostream>
int main()
{
  int northAcc, southAcc, eastAcc, westAcc, centralAcc;

    cout << "Enter the number of accidents in the North region: ";
    cin >> northAcc;
    while (northAcc < 0) {
      cout << "Invalid input. Please enter a non-negative number: ";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cin >> northAcc;
    }
    cout << "Enter the number of accidents in the South region: ";
    cin >> southAcc;
    while (southAcc < 0) {
      cout << "Invalid input. Please enter a non-negative number: ";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cin >> southAcc;
    }
    cout << "Enter the number of accidents in the East region: ";
    cin >> eastAcc;
    while (eastAcc < 0) {
      cout << "Invalid input. Please enter a non-negative number: ";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cin >> eastAcc;
    }
    cout << "Enter the number of accidents in the West region: ";
    cin >> westAcc;
    while (westAcc < 0) {
      cout << "Invalid input. Please enter a non-negative number: ";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cin >> westAcc;
    }
    cout << "Enter the number of accidents in the Central region: ";
    cin >> centralAcc;
    while (centralAcc < 0) {
      cout << "Invalid input. Please enter a non-negative number: ";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cin >> centralAcc;
    }
  
    int minAcc = min(northAcc, min(southAcc, min(eastAcc, min(westAcc, centralAcc))));

    cout << "The following region(s) had the fewest accidents:" << endl;
    if (northAcc == minAcc) {
      cout << "North" << endl;
    }
    if (southAcc == minAcc) {
      cout << "South" << endl;
    }
    if (eastAcc == minAcc) {
      cout << "East" << endl;
    }
    if (westAcc == minAcc) {
      cout << "West" << endl;
    }
    if (centralAcc == minAcc) {
      cout << "Central" << endl;
    }
    return 0;
}