//Rock, Paper, Scissors using conditionals and booleans
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
  std::string sUser, sComputer, resultString, winnerString;
  bool isRock=false, isPaper=false, isScissors=false;
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
    sComputer = "✊";
    isRock = true;
  }
  else if (computer == 2)
  {
    sComputer = "✋";
    isPaper = true;
  }
  else if (computer = 3)
  {
    sComputer = "✌️";
    isScissors = true;
  }
  //User
  //
  if (user == 1)
  {
    sUser = "✊";
    isRock = true;
  }
  else if (user == 2)
  {
    sUser = "✋";
    isPaper = true;
  }
  else if (user = 3)
  {
    sUser = "✌️";
    isScissors = true;
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
  if (user == computer)
  {
    resultString = "TIE!\n\n\n";
  } 
  //Scissors cuts paper
  //
  if (isScissors && isPaper)
  {
    resultString = "\nSCISSORS CUTS PAPER!\n";
    if (user == 3)
    {
      winnerString = "YOU WIN!!\n";
    }
    else
    {
      winnerString = "COMPUTER WINS!\n";
    }
  }
  //Paper covers rock
  //
  if (isPaper && isRock)
  {
    resultString = "\nPAPER COVERS ROCK!\n";
    if (user == 2)
    {
      winnerString = "YOU WIN!!\n";
    }
    else
    {
      winnerString = "COMPUTER WINS!\n";
    }
  }
  //Rock crushes scissors
  //
  if (isRock && isScissors)
  {
    resultString = "\nROCK CRUSHES SCISSORS!\n";
    if (user == 1)
    {
      winnerString = "YOU WIN!!\n";
    }
    else
    {
      winnerString = "COMPUTER WINS!\n";
    }
  }
  //Output result and winner
  //
  std::cout << resultString;
  std::cout << winnerString;
  return 0;
}
