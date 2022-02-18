#include <iostream>
#include <vector>

// Define is_palindrome() here:
bool is_palindrome(std::string text)
{
  bool palindrome;
  std::string revString;
  int counter;
  //
  std::cout << "Input Text: " << text << "\n";
  std::cout << "Input text length: " << text.size() << "\n";
  std::cout << "Reversed String: ";
  //
  for(counter = text.size() - 1; counter >= 0; counter--)
  {
    std::cout << text[counter];
    revString = revString + text[counter];
  }
  std::cout << "\n";
  if(revString == text)
  {
    palindrome = true;
  }
  else
  {
    palindrome = false;
  }
  return palindrome;
}

int main() 
{  
  std::cout << is_palindrome("madam") << "\n\n";
  std::cout << is_palindrome("ada") << "\n\n";
  std::cout << is_palindrome("lovelace") << "\n\n"; 
}
