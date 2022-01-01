//Whale Talk language translation demo
//
//Translation rules:
//There are no consonants, only vowels excluding the letter 'y'
//u's and e's get doubled
//
//Translater parses through a text string, locates the vowels in the
//string, and concatenates them into a 'translated' string based
//on the rules above.
//
#include <iostream>
#include <vector>
#include <string>

int main ()
{
  //Whale, whale, whale.
  //What have we got here?
  //
  //Declare and initialize variables
  //
  std::string iString = "turpentine and turtles";
  std::vector<char> vowels;
  std::vector<char> result;
  int i, j;
  //Initialize vector
  //
  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');
  //Loop through input string and vector
  //Build result string
  //  
  for (i = 0; i < iString.size(); i++)
  {
      for (j = 0; j <= vowels.size(); j++)
      {
        if (iString[i] == vowels[j])
        {
          result.push_back(vowels[j]);
        }
      }
    if (iString[i] == 'e' || iString[i] == 'u')
    {
      result.push_back(iString[i]);
    }
  }
  std::cout << "\n";
  //output result vector
  //
  for (i = 0; i < result.size(); i++)
  {
    std::cout << result[i];
  }
  std::cout << "\n";
  return 0;
}
