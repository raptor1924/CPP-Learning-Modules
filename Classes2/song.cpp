#include "song.hpp"

// add Song method definitions here:
//
//Add song title to object
//
void Song::add_title(std::string new_title) 
{
  title = new_title;
}
//Retrieve song title from object
//
std::string Song::get_title() 
{
  return title;
}
//Add song artist to object
//
void Song::add_artist(std::string new_artist)
{
  artist = new_artist;
}
//Retrieve song artist from object
//
std::string Song::get_artist()
{
  return artist;
}
