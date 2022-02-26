//Demonstrate function templates.  Function template defined in header file (.hpp)
// Use single template function to determine smallest number using integers and doubles
//

#include <iostream>

#include "numbers.hpp"

int main() {
  
  std::cout << get_smallest(100, 60) << "\n";
  std::cout << get_smallest(2543.2, 3254.3) << "\n";
  
}
