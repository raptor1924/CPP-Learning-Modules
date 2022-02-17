#include <iostream>
#include <vector>
int main()
{
  int evenTotal = 0, oddTotal = 1;
  std::vector<int> evenOdd = {2, 4, 3, 6, 1, 9};
  for (int i=0; i < evenOdd.size(); i++)
  {
    if (evenOdd[i] % 2 == 0)
    {
        evenTotal = evenTotal + evenOdd[i];
    }
    else
    {
      oddTotal = oddTotal * evenOdd[i];
    }
  }
  std::cout << "Sum of even numbers is: " << evenTotal << "\n";
  std::cout << "Product of odd numbers is: " << oddTotal << "\n";
}
