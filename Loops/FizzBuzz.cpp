//FizzBuzz demo.
//Output numbers 1 to 100
//Numbers that are multiples of 3, output 'fizz'
//Numbers that are multiples of 5, output 'buzz'
//Numbers that are multiples of 3 and 5, output 'fizzbuzz'
//
#include <iostream>
int main()
{
  int counter;

  for (counter = 1; counter <= 100; counter++)
  {
    if ((counter % 3 == 0) && (counter % 5 ==0))
    {
      std::cout << " FizzBuzz ";
    }
    else if (counter %5 == 0)
    {
      std::cout << " Buzz ";
    }
    else if (counter % 3 ==0)
    {
      std::cout << " Fizz ";
    }
    else
    {
      std::cout << counter << " ";
    }   
  }
  std::cout << "\n";
  return 0;
}
