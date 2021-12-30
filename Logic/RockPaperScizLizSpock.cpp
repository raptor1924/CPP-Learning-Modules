//Rock, Paper, Scissors, Lizard, Spock
//using conditionals and booleans
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
  bool isLizard= false, isSpock=false;
  //Prompt user with game start and grab input
  //
  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n";
  std::cin >> user;
  std::cout << "\n\n";
  //Determine rock, paper, scissors, lizard, spock strings
  //
  //Computer
  //
  if (computer == 1)
  {
    sComputer = "Rock";
    isRock = true;
  }
  else if (computer == 2)
  {
    sComputer = "Paper";
    isPaper = true;
  }
  else if (computer == 3)
  {
    sComputer = "Scissors";
    isScissors = true;
  }
  else if (computer == 4)
  {
    sComputer = "Lizard";
    isLizard = true;
  }
  else if (computer == 5)
  {
    sComputer = "Spock";
    isSpock = true;
  }
  //User
  //
  if (user == 1)
  {
    sUser = "Rock";
    isRock = true;
  }
  else if (user == 2)
  {
    sUser = "Paper";
    isPaper = true;
  }
  else if (user == 3)
  {
    sUser = "Scissors";
    isScissors = true;
  }
  else if (user == 4)
  {
    sUser = "Lizard";
    isLizard = true;
  }
  else if (user == 5)
  {
    sUser = "Spock";
    isSpock = true;
  }
  std::cout << "COMPUTER:  " << sComputer << "\nUSER:  " << sUser << "\n\n";
  //Conditionals and logic here
  //
  // 1 == Rock
  // 2 == Paper
  // 3 == Scissors
  // 4 == Lizard
  // 5 == Spock
  //Scissors cuts Paper
  //Paper covers Rock
  //Rock crushes Scissors
  //Rock crushes Lizard
  //Lizard poisons Spock
  //Spock smashes Scissors
  //Scissors decapitate Lizard
  //Paper disproves Spock
  //Lizard eats paper
  //Spock vaporizes Rock
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
  //Rock crushes Lizard
  //
  if (isRock && isLizard)
  {
    resultString = "\nROCK CRUSHES LIZARD!\n";
    if (user == 1)
    {
      winnerString = "YOU WIN!!\n";
    }
    else
    {
      winnerString = "COMPUTER WINS!\n";
    }
  }
  //Lizard poisons Spock
  //
  if (isLizard && isSpock)
  {
    resultString = "\nLIZARD POISONS SPOCK!\n";
    if (user == 4)
    {
      winnerString = "YOU WIN!!\n";
    }
    else
    {
      winnerString = "COMPUTER WINS!\n";
    }
  }
  //Spock smashes Scissors
  //
  if (isSpock && isScissors)
  {
    resultString = "\nSPOCK SMASHES SCISSORS!\n";
    if (user == 5)
    {
      winnerString = "YOU WIN!!\n";
    }
    else
    {
      winnerString = "COMPUTER WINS!\n";
    }
  }
  //Scissors decapitate Lizard
  //
  if (isScissors && isLizard)
  {
    resultString = "\nSCISSORS DECAPITATES LIZARD!\n";
    if (user == 3)
    {
      winnerString = "YOU WIN!!\n";
    }
    else
    {
      winnerString = "COMPUTER WINS!\n";
    }
  }
  //Paper disproves Spock
  //
  if (isPaper && isSpock)
  {
    resultString = "\nPAPER DISPROVES SPOCK!\n";
    if (user == 2)
    {
      winnerString = "YOU WIN!!\n";
    }
    else
    {
      winnerString = "COMPUTER WINS!\n";
    }
  }
  //Lizard eats paper
  //
  if (isLizard && isPaper)
  {
    resultString = "\nLIZARD EATS PAPER!\n";
    if (user == 4)
    {
      winnerString = "YOU WIN!!\n";
    }
    else
    {
      winnerString = "COMPUTER WINS!\n";
    }
  }
  //Spock vaporizes Rock
  //
  if (isSpock && isRock)
  {
    resultString = "\nSPOCK VAPORIZES ROCK!\n";
    if (user == 5)
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
