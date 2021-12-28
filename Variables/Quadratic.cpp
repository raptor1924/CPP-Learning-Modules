#include <iostream>
#include <cmath>

//Quadratic Formula demo
//Solves the quadratic equation for x
//

int main() 
{
  //Declare variables
  //
  double a, b, c, xRoot1, xRoot2;
  //Get user input for a, b, c values
  //
  std::cout <<"Solve quadratic formula for x:  \n\n";
  std::cout <<"Enter a: ";
  std::cin >> a;
  std::cout <<"Enter b: ";
  std::cin >> b;
  std::cout <<"Enter c: ";
  std::cin >> c;
  std::cout << "\n\n";
  //Solve for positive root
  //
  xRoot1 = (-b + std::sqrt((b*b)-(4*a*c)))/(2*a);
  xRoot2 = (-b - std::sqrt((b*b)-(4*a*c)))/(2*a);
  //Output the solutions
  //
  std::cout << "X Root 1 is " << xRoot1 << "\n";
  std::cout << "X Root 2 is " << xRoot2 << "\n";
  return 0;
  
}
