#include <string>

class Song {
  
  std::string title;
  std::string artist;

public:
  //Set and retrieve song title
  //
  void add_title(std::string new_title);
  std::string get_title();
  //Set and retrieve song artist
  //
  void add_artist(std::string new_artist);
  std::string get_artist();
  
};
