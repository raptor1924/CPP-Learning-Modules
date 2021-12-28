#include <iostream>

int main() 
{
  //Dog years calculator
  //Declare variables
  //
  int dog_age, early_years, later_years, human_years;
  //Initialize variables
  //Current age
  //First two years counts as 21 human years
  //Years after 2 counts a 4 human years per dog year
  //
  dog_age=20;
  early_years=21;
  later_years=(dog_age-2)*4;
  //Human years is total of early and later years
  //
  human_years=early_years + later_years;
  //Output human years
  //
  std::cout <<"My name is Fozzie!  Ruff ruff, I am "<< human_years << " years old in human years.\n";
  
  return 0;
}
