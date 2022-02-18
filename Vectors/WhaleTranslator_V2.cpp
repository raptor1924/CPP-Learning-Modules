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
  int iIndex = 0, vIndex = 0;
  std::string uContinue = "y";
  // Get user input string to translate
  //
  while(uContinue == "y")
  {
  std::cout << "Enter string to translate to Whale: ";
  std::getline(std::cin, userInput);
  std::cout << "\n" << "String Length: " << userInput.size() << "\n";
  //
  for (iIndex = 0; iIndex < userInput.size(); iIndex++)
  {
    std::cout << userInput[iIndex];
    // Nested loop to convert input string vowels to whale
    // and exclude consonants
    //
    for (vIndex = 0; vIndex < vowels.size(); vIndex++)
    {
      if (vowels[vIndex] == userInput[iIndex])
      {
        result.push_back(userInput[iIndex]);
      }
    }
    if (userInput[iIndex] == 'e' || userInput[iIndex] == 'u')
    {
      result.push_back(userInput[iIndex]);
    }
  }
  std::cout << "\n";
  for (iIndex = 0; iIndex < result.size(); iIndex++)
  {
    std::cout << result[iIndex];
  }
  std::cout << "\n\n";
  std::cout << "Continue with another translation? (y/n)";
  std::cin >> uContinue;
  }
}
