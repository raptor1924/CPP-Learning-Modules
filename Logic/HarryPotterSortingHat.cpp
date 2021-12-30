#include <iostream>

int main()
{
  //The magic starts here :)
  int gryffindor=0, hufflepuff=0, ravenclaw=0, slytherin=0;
  int answer1=0, answer2=0, answer3=0, answer4=0;
  //Question 1
  //
  std::cout << "The Sorting Hat Quiz!\n\n";
  std::cout << "Q1) When I'm dead, I want people to remember me as: \n\n";
  std::cout << "1) The Good\n";
  std::cout << "2) The Great\n";
  std::cout << "3) The Wise\n";
  std::cout << "4) The Bold\n";
  //Loop to handle valid / invalid input
  //Question 1 Input
  //
    std::cin >> answer1;
    while (answer1 < 1 || answer1 > 4)
    {
      //std::cout << "INVLAID ANSWER:  " << answer1 << "\n\n";
      std::cout << "Retry: ";
      std::cin >> answer1;
    }

    if (answer1 == 1)
    {
      hufflepuff++;
    }
    else if (answer1 == 2)
    {
      slytherin++;
    }
    else if (answer1 == 3)
    {
      ravenclaw++;
    }
    else if (answer1 == 4)
    {
      gryffindor++;
    }

    
    
  //Question 2
  //
  std::cout << "Q2) Dawn or Dusk? \n\n";
  std::cout << "1) Dawn\n";
  std::cout << "2) Dusk\n";



  return 0;
}
