
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
  string name;
  int age;

public:
Person()
  : name("NA"), age(0)
{}
Person()
{
  this->name = "N/A";
  this->age = 0;
}
  Person(string name, int age)
  {

    this->name = name;
    this->age = age;
  }

  ~Person()
  {
    cout << "Destructor called!"
         << "\n";
  }

// Accesors
  const string& getName() const
  {
    return this->name;
  }

  const int& getAge() const
  {
    return this->age;
  }
// modifiers
  void setName(const string name)
  {
    this->name = name;
  }

  void setAge(const int age){
    this->age=age;
  }
// functions
  const string toString() const
  {
      return "Name: " + this->name + " Age: " + to_string(this->age);
  }
};

int main()
{
  Person FirstPerson;
  FirstPerson.setAge(30);
  FirstPerson.setName("Maciej");
  cout << FirstPerson.toString() << "\n";

  Person SecondPerson;
  SecondPerson.setAge(15);
  SecondPerson.setName("Maciek");
  cout << SecondPerson.toString() << "\n";

  Person ThirdPerson("Kuba",19);
  cout << ThirdPerson.toString() << "\n";

  Person FourthPerson;
  cout << FourthPerson.toString() << "\n";


  return 0;
}