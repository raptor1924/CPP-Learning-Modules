#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num)
{
  std::vector<int> multiplesVector;
  multiplesVector.push_back(num*1);
  multiplesVector.push_back(num*2);
  multiplesVector.push_back(num*3);
  return(multiplesVector);
}

int main() {
  
  for (int element : first_three_multiples(8)) 
  {
    std::cout << element << "\n";
  }
  
}
