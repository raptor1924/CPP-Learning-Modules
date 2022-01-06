#include <iostream>
#include "ufo_functions.hpp"

int main() 
{
  //Declare and initialize variables
  //
  std::string codeword, answer;
  std::vector<char> incorrect;
  char letter;
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
  std::cout << "\033[2J\033[1;1H";
  display_misses(misses);
  display_status(incorrect, answer);
  std::cout << "Please enter your guess: ";
  std::cin >> letter;
  for (i = 0; i < codeword.size(); i++)
  {
    if (letter == codeword[i])
    {
      answer[i] = letter;
      guess = true;
    }
  }
  if (guess == true)
  {
    std::cout <<  "Correct!";
  }
  else
  {
    std::cout << "Incorrect!  The tractor beam piulls the purson in further.";
    incorrect.push_back(letter);
    misses++;
  }
guess = false;
}

end_game(answer, codeword);
}
