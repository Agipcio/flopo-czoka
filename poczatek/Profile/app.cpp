#include "profile.hpp"
#include <iostream>
#include <vector>
#include <string>


int main()
{
Profile konrad(16,"Konrad Widawski","Kalek","Polska","On/Oni");
konrad.addHobby("Valorant");
konrad.addHobby("Rower");
konrad.addHobby("Piwo");
konrad.addHobby("Minecraft");
konrad.addHobby("Anime");
konrad.addHobby("Automatyka");
std::cout << konrad.vievProfile();
}