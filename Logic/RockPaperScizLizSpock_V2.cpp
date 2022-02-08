#include <iostream>
#include <stdlib.h>
int main()
{
  // Rock, paper, scissors, lizard, Spock!
  // Live long and prosper
  //
  // Seed random number generator, declare and initialize variables
  //
  srand (time(NULL));
  int cChoice = rand() % 5 + 1;
  int uChoice = 0;
  std::string result, winner = "COMPUTER";
  // Begin game, get user selection, and output choices
  //
  std::cout << "Rock Paper Scissors!\n\n";
  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n\n";
  std::cout << "Choose your fate! ";
  std::cin >> uChoice;
  std::cout << "\nPlayer Choice:  " << uChoice << "\n";
  std::cout << "Computer Choice:  " << cChoice << "\n\n";
  //Conditionals and logic here
  //
  // 1 == Rock
  // 2 == Paper
  // 3 == Scissors
  // 4 == Lizard
  // 5 == Spock
  //Rock smashes Scissors
  //Rock crushes Lizard
  //Paper covers Rock
  //Paper disproves Spock
  //Scissors cuts Paper
  //Scissors decapitate Lizard
  //Lizard eats paper
  //Lizard poisons Spock
  //Spock smashes Scissors
  //Spock vaporizes Rock
  //
  // Tie
  if (uChoice == cChoice)
  {
    winner = "TIE!";
  }
  // Player Wins logic
  else if (uChoice == 1 && cChoice == 3)
  {
    std::cout << result1;
    winner = "PLAYER";
  }
  else if (uChoice == 2 && cChoice == 1)
  {
    std::cout << result2;
    winner = "PLAYER";
  }
  else if (uChoice == 3 && cChoice == 2)
  {
    std::cout << result3;
    winner = "PLAYER";
  }
  else if (uChoice == 4 )
  {

  }
  else if (uChoice == 5)
  {

  }
  // Computer Wins logic
  else if (cChoice == 1 && uChoice == 3)
  {
    std::cout << result1;
  }
  else if (cChoice == 2 && uChoice == 1)
  {
    std::cout << result2;
  }
  else if (cChoice == 3 && uChoice == 2)
  {
    std::cout << result3;
  }
  else
  {
    std::cout << "Invalid Choice!\n";
  }
  // Display winner
  //
  std::cout << "\n\n";
  if (winner != "TIE!")
  {
     std::cout << winner << " WINS!\n";
  }
}
