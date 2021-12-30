//Rock, Paper, Scissors, Lizard, Spock!
//
//Live long...
//      and prosper. - Spock
//
#include <iostream>
#include <stdlib.h>

int main()
{
  //Seed random number generator, declare, and
  //initialize variables
  //
  srand (time(NULL));
  int computer = rand() % 3 + 1;
  int user=0;
  std::string sUser, sComputer, winnerString;
  //Prompt user with game start and grab input
  //
  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cin >> user;
  std::cout << "\n\n";
  //Determine rock, paper, scissors strings
  //
  //Computer
  //
  if (computer == 1)
  {
    sComputer = "Rock";
  }
  else if (computer == 2)
  {
    sComputer == "Paper";
  }
  else if (computer = 3)
  {
    sComputer = "Scissors";
  }
  //User
  //
  if (user == 1)
  {
    sUser = "Rock";
  }
  else if (user == 2)
  {
    sUser == "Paper";
  }
  else if (user = 3)
  {
    sUser = "Scissors";
  }
  std::cout << "COMPUTER:  " << sComputer << "\nUSER:  " << sUser << "\n\n";
  //Conditionals and logic here
  //
  // 1 == Rock
  // 2 == Paper
  // 3 == Scissors
  //Scissors cuts Paper
  //Paper covers Rock
  //Rock crushes Scissors
  //
  if (sUser = "")




  return 0;
}
