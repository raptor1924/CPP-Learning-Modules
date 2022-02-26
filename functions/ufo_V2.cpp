#include <iostream>
#include <vector>
#include "ufo_functions.hpp"

int main() 
{
  //Declare and initialize variables
  //
  std::string codeword, answer;
  int misses;
  std::vector<char> incorrect;
  bool guess;
  codeword = "codecademy";
  answer = "----------";
  misses = 0;
  guess = false;
  //
  greet();
  //Loop for player guesses.  At 7 misses, friend gets abducted.
  //
  while((answer != codeword) && (misses < 7))
  {
    display_misses(misses);
    display_status(incorrect, answer);
    misses++;
  }
  end_game(answer, codeword);
}
