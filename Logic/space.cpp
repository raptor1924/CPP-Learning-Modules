#include <iostream>

int main() 
{
  // Declare and initialize variables
  //
  double merGrav, vGrav, marGrav, jupGrav, satGrav, uraGrav, nepGrav;
  double gravConst, eWeight, pWeight;
  int fLoc;
  //
  merGrav = 0.38;
  vGrav = 0.91;
  marGrav = 0.38;
  jupGrav = 2.34;
  satGrav = 1.06;
  uraGrav = 0.92;
  nepGrav = 1.19;
  // Output planet table.
  // Get user input for Earth weight and planet location.
  //
  std::cout << "#  Planet\n";
  std::cout << "1  Mercury\n";
  std::cout << "2  Venus\n";
  std::cout << "3  Mars\n";
  std::cout << "4  Jupiter\n";
  std::cout << "5  Saturn\n";
  std::cout << "6  Uranus\n";
  std::cout << "7  Neptune\n\n";
  std::cout << "Enter your fight weight on Earth: ";
  std::cin >> eWeight;
  std::cout << "Enter your fight-planet location number: ";
  std::cin >> fLoc;
  // Determine gravity constant
  //
  switch (fLoc)
  {
    case 1:
      gravConst = merGrav;
      break;
    case 2:
      gravConst = vGrav;
      break;
    case 3:
      gravConst = marGrav;
      break;
    case 4:
      gravConst = jupGrav;
      break;
    case 5:
      gravConst = satGrav;
      break;
    case 6:
      gravConst = uraGrav;
      break;
    case 7:
      gravConst = nepGrav;
      break;
    default:
      std::cout << "Selection Error\n";
      break;
  }
  pWeight = eWeight * gravConst;
  std::cout << "\nDestination planet weight: " << pWeight << "\n";
}
