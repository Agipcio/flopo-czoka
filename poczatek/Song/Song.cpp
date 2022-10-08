#include "song.hpp"
#include <iostream>

// add the Song constructor here:

std::string Song::get_title() {

  return title;

}

std::string Song::get_artist() {

  return artist;

}
Song::Song(std::string new_title,std::string new_artist)
    : title(new_title), artist(new_artist) {}
Song::~Song()
    {
        std::cout<<"goodbye "+title+"\n";
    }