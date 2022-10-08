#include <string>

class Song {
  
  std::string title;
  std::string artist;

public:
  // Add a constructor here:
  std::string get_artist();
  std::string get_title();
  ~Song();
  Song(std::string new_title,std::string new_artist);
    
};