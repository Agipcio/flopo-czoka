#include <iostream>
#include <string>
std::string hashtag(std::string wejscie)
{
    std::string wyjscie;
    wyjscie= "# " + wejscie + " #";
    return wyjscie + "\n";
}



int main()
{
    std::string wejscie;
    std::cout << "wpisz fraze: ";
    std::cin >> wejscie;
    std::cout << hashtag(wejscie);
}