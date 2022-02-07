#include <iostream>

int main() 
{
  // Take year as input, validate 4 digit number
  // Display whether or not year falls on a leap year  
  //
  int iYear;
  bool LeapYear, fourDigitYear;
  LeapYear = false;
  fourDigitYear = false;
  //  Get year.  Determine if four-digits.
  //
  std::cout << "Enter four-digit year: ";
  std::cin >> iYear;
  if (iYear > 999 && iYear < 10000)
  {
    fourDigitYear = true;
  }
  // If four-digit year, then determine if leap year
  //
  if ((iYear % 100 == 0) && (iYear % 400 != 0))
  {
    LeapYear = false;
  }
  else if ((iYear % 4 ==0) || (iYear % 400 == 0))
  {
    LeapYear = true;
  }
  // Display results
  //
  if (LeapYear)
  {
    std::cout << "Year falls on a Leap Year.\n";
  }
  else
  {
    std::cout << "Year does NOT fall on a Leap Year.\n";
  }
}
