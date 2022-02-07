#include <iostream>
#include <cstdlib>

int main()
{
  //Majik 8 ball version 2
  //
  //Seed random number generator
  //
  srand(time(NULL));
  //Declare and initialize variables
  //
  int ballAnswer = std::rand() % 10;
  

  // Your future awaits...
  //
  std::cout << "MAJIK 8-BALL V2\n\n";
  //
  if (ballAnswer == 0)
  {
    std::cout << "It is certain!\n";
  }
  else if (ballAnswer == 1)
  {
    std::cout << "Holy Crackers what are you thinking?";
  }
  else if (ballAnswer == 2)
  {
    std::cout << "Maybe?  I dunno.  It's kinda fuzzy.";
  }
  else if (ballAnswer == 3)
  {
    std::cout << "Yes.";
  }
  else if (ballAnswer == 4)
  {
    std::cout << "No.";
  }
  else if (ballAnswer == 5)
  {
    std::cout << "Yes?  Is that what you'd like to hear?";
  }
  else if (ballAnswer == 6)
  {
    std::cout << "What in corn dog hell?";
  }
  else if (ballAnswer == 7)
  {
    std::cout << "Would NO make it better?";
  }
  else if (ballAnswer == 8)
  {
    std::cout << "Roll the bones again.";
  }
  else
  {
    std::cout << "Very Doubtful.\n";
  }
}
