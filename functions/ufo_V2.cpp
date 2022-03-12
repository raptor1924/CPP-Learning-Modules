#include <iostream>
#include <vector>
#include "ufo_functions.hpp"

int main() 
{
  //Declare and initialize variables
  //
  std::vector<char> incorrect;
  std::string codeword, answer;
  char letter;
  int loopCounter;
  bool guess;
  int misses;
  codeword = "codecademy";
  answer = "----------";
  misses = 0;
  guess = false;
  //Display game greeting
  //
  greet();
  //Loop through gameplay until answer is guessed or misses = 7
  //
  while((answer != codeword) && (misses < 7))
  {
    //Display game status
    //
    display_misses(misses);
    display_status(incorrect, answer);
    //Get player input
    //
    std::cout << "Please enter your guess:  ";
    std::cin >> letter;
    //Check player letter against codeword to see if guess is correct
    //
    for(loopCounter = 0; loopCounter < codeword.size(); loopCounter++)
    {
      if(letter == codeword[loopCounter])
      {
        answer[loopCounter] = letter;
        guess = true;
      }
    }
    //Check if correct guess or not
    //
    if(guess)
    {
      std::cout << "CORRECT!\n";
    }
    else
    {
      std::cout << "INCORRECT!  OH NO!  The tractor beam pulls your friend further into the ship!\n";
      incorrect.push_back(letter);
      //Increment misses
      //
      misses++;
    }
    if(guess)
    {
      guess = false;
    }
  }
  //Call end_game function
  //
  end_game(codeword, answer);
}
