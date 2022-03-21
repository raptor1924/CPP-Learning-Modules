#include <iostream>
#include "profile.hpp"
//Class Constructor
//
Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns) : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns)
{

}
//Class display data method / function
//
std::string Profile::view_profile()
{
  int counter;
  //
  std::string bio = "Name: " + name;
  bio += "\nAge: " + std::to_string(age);
  bio += "\nPronouns: " + pronouns + "\n\n";
  bio += "Hobbies: ";
  for (counter = 0; counter < hobbies.size(); counter++)
  {
      bio += hobbies[counter] + "\n";
  }
  bio += "\n\n";
  
  return bio;
}
//Add Hobby method / function
//
void Profile::add_hobby(std::string new_hobby)
{
  hobbies.push_back(new_hobby);
}
