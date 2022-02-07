// Rock paper scissors then lizard spock :)
//
#include <iostream>
#include <stdlib.h>
int main()
{
  // Live long and prosper
  //
  // Seed random number generator, declare and initialize variables
  //
  srand (time(NULL));
  int cChoice = rand() % 3 + 1;
  int uChoice = 0;
  std::string result1, result2, result3;
  bool playerWins = false, isTie = false;
  result1 = "Rock smashes Scissors!\n";
  result2 = "Paper covers Rock!\n";
  result3 = "Scissors cuts Paper!\n";
  //
  // Begin game
  //
  std::cout << "Rock Paper Scissors!\n\n";
  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n\n";
  std::cout << "Choose your fate! ";
  std::cin >> uChoice;
  // Output choices
  //
  std::cout << "\nPlayer Choice:  " << uChoice << "\n";
  std::cout << "Computer Choice:  " << cChoice << "\n\n";
  // Rock smashes Scissors
  // Paper covers Rock
  // Scissors cuts Paper
  //
  // Tie
  if (uChoice == cChoice)
  {
    isTie = true;
    std::cout << "\nTIE!\n";
  }
  // Player Wins logic
  else if (uChoice == 1 && cChoice == 3)
  {
    std::cout << result1;
    playerWins = true;
  }
  else if (uChoice == 2 && cChoice == 1)
  {
    std::cout << result2;
    playerWins = true;
  }
  else if (uChoice == 3 && cChoice == 2)
  {
    std::cout << result3;
    playerWins = true;
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
  if (!isTie)
  {
     if (playerWins)
     {
        std::cout << "PLAYER WINS!\n";
     }
     else
     {
        std::cout << "COMPUTER WINS!\n";
     }
  }
  
}
