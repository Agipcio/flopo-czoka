#include <iostream>
#include <vector>
int main()
{
    int liczba;
    std::vector<int> ciag;
    std::cout << "podaj liczbe: ";
    for (int i = 0; i < 4; i++)
    {
        std::cin >> liczba;
        std::cout << "\n";
        ciag.push_back(liczba);
        std::cout << ciag[i] << "\n";
    }
    
}