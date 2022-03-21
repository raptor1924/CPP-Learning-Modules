#include <vector>

class Profile
{
private:
  int age;
  std::string name;
  std::string city;
  std::string country;
  std::string pronouns;
  std::vector<std::string> hobbies;
  
public:
  Profile(std::string new_name = "UNDEFINED", int new_age = 0, std::string new_city = "UNDEFINED", std::string new_country = "UNDEFINED", std::string new_pronouns = "they/them");

  std::string view_profile();
  void add_hobby(std::string new_hobby);
};
