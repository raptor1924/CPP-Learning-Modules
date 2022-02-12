#include <iostream>
int main ()
{
  // Display all numbers from 0 to 100
  // For miltiples of 3, print 'Fizz'.
  // For multiples of 5, print 'Buzz'.
  // For multiples of 3 and 5, print 'FizzBuzz'.
  //
  // Declare and initialize variables
  //
  int counter = 0;
  while (counter <= 100)
  {
    if ((counter % 15) == 0)
    {
      std::cout << "FizzBuzz\n";
    }
    else if((counter % 5) == 0)
    {
      std::cout << "Buzz\n";
    }
    else if ((counter % 3) == 0)
    {
      std::cout << "Fizz\n";
    }
    else
    {
      std::cout << counter << "\n";
    }
    counter++;
  }
}
