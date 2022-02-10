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
  //Conditionals and game logic here
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
  // Player Wins logic via Switch statement
  //
  switch (uChoice)
  {
    case 1: //Rock
      if (cChoice == 3)
      {
        std::cout << "Rock smashes Scissors!\n";
        winner = "PLAYER";
      }
      else if (cChoice == 4)
      {
        std::cout << "Rock crushes Lizard!\n";
        winner = "PLAYER";
      }
      break;
    case 2: //Paper
      if (cChoice == 1)
      {
        std::cout << "Paper covers Rock!\n";
        winner = "PLAYER";
      }
      else if (cChoice == 5)
      {
        std::cout << "Paper disproves Spock!\n";
        winner = "PLAYER";
      }
      break;
    case 3: //Scissors
      if (cChoice == 2)
      {
        std::cout << "Scissors cuts Paper!\n";
        winner = "PLAYER";
      }
      else if (cChoice == 4)
      {
        std::cout << "Scissors decapitates Lizard!\n";
        winner = "PLAYER";
      }
      break;
    case 4: //Lizard
      if (cChoice == 2)
      {
        std::cout << "Lizard eats Paper!\n";
        winner = "PLAYER";
      }
      else if (cChoice == 5)
      {
        std::cout << "Lizard poisons Spock!\n";
        winner = "PLAYER";
      }
      break;
    case 5: //Spock
      if (cChoice == 3)
      {
        std::cout << "Spock smashes Scissors!\n";
        winner = "PLAYER";
      }
      else if (cChoice == 1)
      {
        std::cout << "Spock vaporizes Rock!\n";
        winner = "PLAYER";
      }
      break;
    default:
      std::cout << "Invalid Choice!\n";
      break;
  }
  // Computer Wins logic via Switch statement
  //
  switch (cChoice)
  {
    case 1: //Rock
      if (uChoice == 3)
      {
        std::cout << "Rock smashes Scissors!\n";
        winner = "COMPUTER";
      }
      else if (uChoice == 4)
      {
        std::cout << "Rock crushes Lizard!\n";
        winner = "COMPUTER";
      }
      break;
    case 2: //Paper
      if (uChoice == 1)
      {
        std::cout << "Paper covers Rock!\n";
        winner = "COMPUTER";
      }
      else if (uChoice == 5)
      {
        std::cout << "Paper disproves Spock!\n";
        winner = "COMPUTER";
      }
      break;
    case 3: //Scissors
      if (uChoice == 2)
      {
        std::cout << "Scissors cuts Paper!\n";
        winner = "COMPUTER";
      }
      else if (uChoice == 4)
      {
        std::cout << "Scissors decapitates Lizard!\n";
        winner = "COMPUTER";
      }
      break;
    case 4: //Lizard
      if (uChoice == 2)
      {
        std::cout << "Lizard eats Paper!\n";
        winner = "COMPUTER";
      }
      else if (uChoice == 5)
      {
        std::cout << "Lizard poisons Spock!\n";
        winner = "COMPUTER";
      }
      break;
    case 5: //Spock
      if (uChoice == 3)
      {
        std::cout << "Spock smashes Scissors!\n";
        winner = "COMPUTER";
      }
      else if (uChoice == 1)
      {
        std::cout << "Spock vaporizes Rock!\n";
        winner = "COMPUTER";
      }
      break;
    default:
      std::cout << "Invalid Choice!\n";
      break;
  }
  std::cout << "\n";
  if (uChoice == cChoice)
  {
   std::cout << "TIE!\n";
  }
  else 
  {
    std::cout << winner << " WINS!\n";
  }
}
