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
    for (int i = 0; i < 4; i++)
    {
        if (ciag[i] % 2 == 0 && ciag[i] != 2)
        {
            std::cout << "tak";
        }
        else
        {
            if (ciag[i] % 3 == 0 && ciag[i] != 3)
            {
                std::cout << "tak";
            }
            else
            {
                if (ciag[i] % 5 == 0 && ciag[i] != 5)
                {
                    std::cout << "tak";
                }
                else
                {
                    std::cout << "nie";
                }
            }
        }
    }
}