// Calculating Rectangle Properties


#include <iostream>
int main()
{
  char choice;
  do {
    double length, width;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    double perimeter = 2 * (length + width);
    double area = length * width;
    std::cout << "Perimeter: " << perimeter << std::endl;
    std::cout << "Area: " << area << std::endl;

    std::cout << "Do you want to process another rectangle (y/n)? ";
    std::cin >> choice;
  } while (choice == 'y' || choice == 'Y');
  return 0;
}