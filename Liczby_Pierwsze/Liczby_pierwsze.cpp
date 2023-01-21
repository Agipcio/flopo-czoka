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
    for (int i = 0; i < ciag.size(); i++)
    {
        bool is_prime = true;
        if (ciag[i] == 0 || ciag[i] == 1)
        {
            is_prime = false;
        }

        for (int j = 2; j <= ciag[i] / 2; j++)
        {
            if (ciag[i] % j == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
            std::cout << ciag[i] << "TAK\n";
        else
            std::cout << ciag[i] << " NIE\n";
    }
}