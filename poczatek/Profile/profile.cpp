#include "profile.hpp"
#include <vector>
#include <string>
#include <iostream>

Profile::Profile(int new_age,std::string new_name,std::string new_city,std::string new_country,std::string new_pronouns)
{
name=new_name;
age=new_age;
city=new_city;
country=new_country;
pronouns=new_pronouns;
}
Profile::Profile(int new_age,std::string new_name,std::string new_city,std::string new_country)
{
name=new_name;
age=new_age;
city=new_city;
country=new_country;
pronouns="they/them";
}
std::string Profile::vievProfile()
{
std::string profile;
profile="\n\n\n\n\n\n   ===Twoj Profil===\n";
profile+= "\nWiek: " + std::to_string(age);
profile+= "\nImie: " + name;
profile+= "\nMiejscowosc: " + city;
profile+= "\nKraj: " + country;
profile+= "\nZaimki: " + pronouns;
profile+= "\n\nHobby: ";
for(long long unsigned int i=0; i < hobbies.size(); i++)
{
    profile+= hobbies[i];
    profile+= ", ";
} 
profile+= "\n\n\n\n\n\n";
return profile;
}
void Profile::addHobby(std::string new_hobby)
{
    hobbies.push_back(new_hobby);
}