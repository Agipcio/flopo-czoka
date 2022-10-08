#include <vector>
#include <string>
#include <iostream>

class Profile
{
private:
std::string name,city,country,pronouns;
int age;
std::vector<std::string> hobbies;
public:
Profile(int new_age,std::string new_name,std::string new_city,std::string new_country,std::string new_pronouns);
Profile(int new_age,std::string new_name,std::string new_city,std::string new_country);
std::string vievProfile();
void addHobby(std::string new_hobby);
};