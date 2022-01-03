#include <iostream>
#include "ufo_functions.hpp"

int main() 
{
  //Declare and initialize variables
  //
  std::string codeword, answer;
  std::vector<char> incorrect;
  bool guess;
  int misses, i;
  //
  misses = 0;
  guess = false;
  codeword = "codecademy";
  answer = "----------";
//Display game greeting
//
greet();

//Loop main game function
//
while (answer != codeword && misses < 7)
{
  display_misses(misses);
  display_status(incorrect, answer);

  misses++;
}

end_game(answer, codeword);
}
