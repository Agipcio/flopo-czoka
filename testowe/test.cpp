#include <iostream>

int main()
{
    int i = 28;
    std::string t = "EuroparlamentarzystkaKonstantynopolitanka";
    char w;

    while (i > 0)
    {
        i = i - 2;
        w = w + t[i];
    }
    std::cout << w;
}