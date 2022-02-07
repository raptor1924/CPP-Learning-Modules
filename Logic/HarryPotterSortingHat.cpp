#include <iostream>

main ()
{
  //The sorting hat magic starts here
  //
  // Declare and initialize variablesd
  //
  int gryffindor, hufflepuff, ravenclaw, slytherin;
  int answer1, answer2, answer3, answer4;
  int max;
  std::string house;
  gryffindor = 0;
  hufflepuff = 0;
  ravenclaw = 0;
  slytherin = 0;
  max=0;
  //
  std::cout << "The Sorting Hat Quiz!\n\n";
  // Throw the questions and collect points!
  //
  // QUESTION 1
  //
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";
  std::cout << "1) The Good\n";
  std::cout << "2) The Great\n";
  std::cout << "3) The Wise\n";
  std::cout << "4) The Bold\n\n";
  std::cout << "Enter a number: ";
  std::cin >> answer1;
  if (answer1 == 1)
  {
    hufflepuff++;
  }
  else if (answer1 == 2)
  {
    slytherin++;
  }
  else if(answer1 == 3)
  {
    ravenclaw++;
  }
  else if(answer1 == 4)
  {
    gryffindor++;
  }
  else
  {
    std::cout << "Invalid Input\n";
  }
  // QUESTION 2
  //
  std::cout << "\n\nQ2) Dawn or Dusk?\n\n";
  std::cout << "1) Dawn\n";
  std::cout << "2) Dusk\n\n";
  std::cout << "Enter a number: ";
  std::cin >> answer2;
  if (answer2 == 1)
  {
    gryffindor++;
    ravenclaw++;
  }
  else if (answer2 == 2)
  {
    hufflepuff++;
    slytherin++;
  }
  else 
  {
    std::cout << "Invalid Input\n";
  }
  // QUESTION 3
  // 
  std::cout << "\n\nQ3) Which kind of instrument most pleases your ear?\n\n";
  std::cout << "1) The violin\n";
  std::cout << "2) The trumpet\n";
  std::cout << "3) The piano\n";
  std::cout << "4) The drum\n\n";
  std::cout << "Enter a number: ";
  std::cin >> answer3;
  if (answer3 == 1)
  {
    slytherin++;
  }
  else if (answer3 == 2)
  {
    hufflepuff++;
  }
  else if (answer3 == 3)
  {
    ravenclaw++;
  }
  else if (answer3 == 4)
  {
    gryffindor++;
  }
  else
  {
    std::cout << "Invalid input\n";
  }
  // QUESTION 4
  //
  std::cout << "\n\nQ4) Which road tempts you most?\n\n";
  std::cout << "1) The wide, sunny grassy lane\n";
  std::cout << "2) The narrow, dark, lantern-lit alley\n";
  std::cout << "3) The twistingt, leaf-strewn path through the woods\n";
  std::cout << "4) The cobbled street lined with ancient buildings\n\n";
  std::cout << "Enter a number: ";
  std::cin >> answer4;
  if (answer4 == 1)
  {
    hufflepuff++;
  }
  else if (answer4 == 2)
  {
    slytherin++;
  }
  else if (answer4 == 3)
  {
      gryffindor++;
  }
  else if (answer4 == 4)
  {
    ravenclaw++;
  }
  else
  {
    std::cout << "Invalid input\n";
  }
  // Find Max point count and assign house
  //
  if (gryffindor > max)
  {
    max = gryffindor;
    house = "Gryffindor";
  }
  if (hufflepuff > max)
  {
    max = hufflepuff;
    house = "Hufflepuff";
  }
  if (ravenclaw > max)
  {
    max = ravenclaw;
    house = "Ravenclaw";
  }
  if (slytherin > max)
  {
    max = slytherin;
    house = "Slytherin";
  }
  std::cout << "Your House Assignmaent is: " << house << "!\n";
}
