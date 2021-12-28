#include <iostream>
#include <cstdlib>

//Magic 8-Ball Demo
//
int main() 
{
  //Declare and initialize variables
  //Seed random number generator
  //Generate random number from 0 to 9
  //
  srand(time(NULL));
  int answer = std::rand() % 10;
  std::string tAnswer;

  //Start Game
  //
  std::cout << "MAGIC 8-BALL:\n\n";

  //Conditional logic
  //
  if (answer==0)
  {
    tAnswer = "It is certain.\n";
  }
  else if (answer == 1)
  {
    tAnswer = "Without a doubt.\n";
  }
  else if (answer == 2)
  {
    tAnswer = "Yes - definitely.\n";
  }
  else if (answer == 3)
  {
    tAnswer = "Signs point to yes.\n";
  }
  else if (answer == 4)
  {
    tAnswer = "Cannot predict now.\n";
  }
  else if (answer == 5)
  {
    tAnswer = "Don't count on it.\n";
  }
  else if (answer == 6)
  {
    tAnswer = "Outlook good.\n";
  }
  else if (answer == 7)
  {
    tAnswer = "Better not tell you now.\n";
  }
  else if (answer == 8)
  {
    tAnswer = "Ask again later.\n";
  }
  else if (answer == 9)
  {
    tAnswer = "My reply is no.\n";
  }
  else
  {
    tAnswer = "Very doubtful.\n";
  }
  std::cout << tAnswer << "\n";

  return 0;
}
