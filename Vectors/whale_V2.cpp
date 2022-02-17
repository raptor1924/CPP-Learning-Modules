#include <iostream>
#include <vector>
#include <string>
//
int main()
{
  //Whale translator v2
  //
  // Declare and initialize variables
  //
  std::string userInput;
  std::vector<char> vowels = {'a','e','i','o','u'};
  std::vector<char> result;
  int indexer = 0;
  // Get user input string to translate
  //
  std::cout << "Enter string to translate to Whale: ";
  //std::cin.getline() >> userInput;
  std::getline(std::cin, userInput);
  //std::cout << "input string:  " << userInput << "\n";
  // userInput = "turpentine and turtles";
  std::cout << "\n" << "String Length: " << userInput.size() << "\n";
  //
  for (indexer = 0; indexer < userInput.size(); indexer++)
  {
    std::cout << userInput[indexer];
  }
  std::cout << "\n";
}
